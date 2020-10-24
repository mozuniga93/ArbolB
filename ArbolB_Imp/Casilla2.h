#pragma once
#include "Casilla.h"

struct Casilla;

struct Casilla2
{
	Casilla2* siguiente;
	Casilla2* anterior; // el siguiente y el anterior en la lista del arbol b
	Casilla* direccionArbol; // direccion a la casilla del arbol	
};

