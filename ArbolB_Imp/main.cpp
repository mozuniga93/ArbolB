#include <iostream>
#include <cstdlib>
#include <fstream>
#include <windows.h>
#include "ArbolB.h"
using namespace std;
//-------------------------------------------------------
int menu();
void animarReinicio();
//-------------------------------------------------------
int main() {


	int eleccion;//para usar en el menu
	int orden;
	int numero;//para agregar
	ArbolB A;
	do {
		do {
			system("cls");
			cout << "\tARBOL B" << endl << endl;
			cout << "ORDEN DEL ARBOL: "; cin >> orden;
			system("cls");
		} while (orden < 3 || orden>10);
		A.ponerOrden(orden);
		do {
			eleccion = menu();
			system("cls");
			switch (eleccion) {
			case 1:
				cout << "\tInsertar elemento al Arbol B" << endl << endl;
				cout << "Numero: "; cin >> numero;
				A.agregar(numero);
				cout << endl << endl;
				system("pause");
				break;
			case 2:
				cout << "\tImprimir lista de valores agregados" << endl << endl;
				A.pintar();
				cout << endl << endl;
				system("pause");
				break;
			case 3:
				cout << "\tImprimir estado del Arbol B" << endl << endl;
				A.pintarArbol();
				cout << endl << endl;
				system("pause");
				break;
			case 4:
				cout << "\tEliminar elemento del Arbol B" << endl << endl;
				cout << "Numero a borrar: "; cin >> numero;
				if (A.borrar(numero)) cout << "Numero " << numero << " borrado!";
				else cout << "Numero no encontrado...";
				cout << endl << endl;
				system("pause");
				break;
			case 5:
				cout << "\tREINICIAR PROGRAMA" << endl << endl;
				A.destructorCopia();
				animarReinicio();
				cout << endl << endl;
				system("pause");
				break;
			case 6:
				cout << endl << endl;
				cout << endl << endl << endl;
				system("pause");
			}
		} while (eleccion != 9 && eleccion != 8);
	} while (eleccion != 9);

	return 0;
}
//*****************************************
int menu() {

	int eleccion;
	do {
		system("cls");
		cout << "\t>> ARBOL B <<" << endl << endl;
		cout << " 1. AGREGAR NUMERO AL ARBOL B." << endl;
		cout << " 2. MOSTRAR LISTA DE NUMEROS INSERTADOS'." << endl;
		cout << " 3. MOSTRAR ESTADO DEL ARBOL B'." << endl;
		cout << " 4. BORRAR NUMERO DEL ARBOL B." << endl;
		cout << " 5. REINICIAR PROGRAMA." << endl;
		cout << " 6. SALIR." << endl << endl;
		cout << "\t>>Ingrese su eleccion: ";
		cin >> eleccion;
	} while (eleccion < 1 || eleccion>9);
	return eleccion;
}
//animacion de reinicio XD
void animarReinicio() {
	cout << "Reiniciando..." << endl << endl;
	cout << "\t";
	for (int i = 0; i <= 100; i += 2) {
		cout << char(178);
		if (i < 10)cout << i << " %" << "\b\b\b";
		else cout << i << " %" << "\b\b\b\b";
		Sleep(20);
		/*cout<<"\t"<<i<<" %";
		system("cls");*/
	}
}
