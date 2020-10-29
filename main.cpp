#include <iostream>
#include "ArregloDinamico.h"

using namespace std;

int main()
{
    ArregloDinamico arreglo;
    arreglo.insertar_inicio("Hola");
    arreglo.insertar_inicio("Profesor");
    arreglo.insertar_final("Aqui");
    arreglo.insertar_final("Esta");
    arreglo.insertar_final("Mi");
    arreglo.insertar_final("Tarea");
    arreglo.insertar_final("Hecho");
    arreglo.insertar_final("Por");
    arreglo.insertar_final("Jesus");
    arreglo.insertar_final("Benavides");


    for(size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << "  ";
    }
    return 0;
}
