#pragma once
#include "Pagina.h"
#include "Casilla.h"
#include <cstddef>
#include <iostream>
#include "Constants.h"
using namespace std;

class ArbolB {
public:
	int orden; // es el orden del arbol b	
	// es el numero minimo de casillas que puede tener una pagina (orden-1 / 2)
	int minimo;
	Pagina* raiz; // la pagina raiz del arbol b
	Casilla* lugarEncontrado; // el lugar encontrado
	Casilla2* principio;
	Casilla2* final; // principio y final de la lista del arbol b
	int cuantos; // el numero de casillas en el arbol b

public:

	ArbolB(int); // contructor del arbol b
	ArbolB();//otro constructor
	~ArbolB(); // destructor del arbol b
	//pone el orden y el minimo que puede tener cada pagina
	void ponerOrden(int orden);
	void destructorCopia();//copia dle destructor
	bool buscar(int); // busca un numero en el arbol b
	void agregar(int); // agregar un numero en el arbol b
	void agregarEnLista(Casilla*);//agrega una casilla en la lista del arbol b
	void pintarArbol();//Para probar el arbol, ponerlo mas bonito despues
	void pintar();///pinta la lista de numeros ordenados
	// funcion que divide una pagina en dos 
	//cuando este supere el numero maximo permitido
	void dividir(Casilla*, Pagina*);
	bool borrar(int); // funcion que borra un numero en el arbol
	// funcion que desliga una casilla de la lista del arbol b
	void desligar(Casilla2*);
	//funcion que intercambia el valor de dos casillas 
	void intercambiar(Casilla*, Casilla*);
	// funcion que traspasa las casillas de una pagina a otra 
	void traspasarCasillas(Pagina*, Pagina*);
	bool agregarArchivo();//agregar numeros al arbol b por archivo
	bool guardarArchivo();//guardar los numeros ordenados en un archivo
	bool borrarArchivo();//borrar los numeros ordenados en un archivo
};

