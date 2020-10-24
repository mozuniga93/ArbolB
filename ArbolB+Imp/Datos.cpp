#include "Datos.h"
#include <iostream>
int Nodo::max_llaves;

// Constructor info
Info::Info() {
    encontrado = false;
    donde = NULL;
    indice = -1;
}

// Construccion nodo
Nodo::Nodo()
{
    cuantas_llaves = 0;
    es_hoja = true;
    padre = siguiente = anterior = NULL;
}

Nodo::Nodo(int o)
{
    cuantas_llaves = 0;
    es_hoja = true;
    padre = siguiente = anterior = NULL;
    max_llaves = o;
}