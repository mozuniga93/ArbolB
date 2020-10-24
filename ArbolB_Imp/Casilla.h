#pragma once
#include "Pagina.h"
#include "Casilla2.h"

using namespace std;

class Pagina;
struct Casilla2;

// representa la casilla que va en cada una de las listas de cada pagina
struct Casilla {
	int valor; // el numero que se guarda en cada casilla
	Pagina* hizq;
	Pagina* hder; // sus hijos los cuales son paginas
	Pagina* actual; // es la pagina en la que se encuentra
	Casilla* siguiente;
	Casilla* anterior; // el siguiente y el anterior de la casilla en
	// la lista de la pagina
	Casilla2* direccionLista; // es la direccion a la lista, la cual esta 
	//ordenada en el arbol b
};
