/*
    TAREA 03:
    1. Realizar la implementación de un árbol AVL en el cual se pueda agregar balanceado y recorrer con los tres tipos de recorrido.
    2. Inserte los siguientes valores en un árbol AVL: 7, 14, 28, 5, 9, 8, 21, 3, 15, 24, 100 y 1

    ESTUDIANTES:
    Gabriel Calvo
    David Solano
    Monica Zuniga
*/


#include <iostream>
#include <fstream>
#include "Arbol.h"
#include <cstdlib>
#include <cstdio>
#include <ctime>


using namespace std;

//PROTOTIPO DE FUNCIONES
int menu(int answer);
void insertarEnBMas();
void mostrarArbol();
static Arbol* a = new Arbol(4);

int main()
{
    int answer;
    bool keepLooping = true;

    do
    {
        system("CLS");
        cout << "-------------------------------------" << endl;
        cout << "Favor digite un numero del menu:" << endl;
        cout << "1. Insertar un elemento en el Arbol." << endl;
        cout << "2. Mostrar el Arbol" << endl;
        cout << "0. Salir." << endl;
        cout << "-------------------------------------" << endl;
        cin >> answer;
        system("CLS");

        menu(answer);

        if (answer == 0)
        {
            keepLooping = false;
        }

    } while (keepLooping);
}

//MENU PRINCIPAL

int menu(int answer)
{
    switch (answer)
    {
    case 1:
        insertarEnBMas();
        break;
    case 2:
        mostrarArbol();
        system("PAUSE");
        break;
    case 0:
        cout << "Gracias por usar el sistema." << endl;
        break;
    default:
        cout << "Opcion incorrecta. Favor digite de nuevo." << endl;
    }
    return answer;
}

//FUNCIONES DEL MENU

void insertarEnBMas() {
    int input = -1;
    bool valid = false;
    do
    {
        cout << "Favor digite un numero entero a agregar: " << flush;
        cin >> input;
        if (cin.good())
        {
            valid = true;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error. Favor inserte un numero entero." << endl;
        }
    } while (!valid);

    a->agregar(input);
}

void mostrarArbol() { 
    a->imprimirArbol();
}