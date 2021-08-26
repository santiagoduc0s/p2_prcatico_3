#include "menu.h"

using namespace std;

int main()
{
    arregloInt arreglo;
    int opcion;
    do {
        opcion = menu();
        switch(opcion) {
            case 1:
                cargarArregloInt(arreglo);
                break;
            case 2:
                mostrarArregloInt(arreglo);
                break;
            case 3:
                printf("\nLa suma de los elementos del arreglo es %i\n", sumaElementosArregloInt(arreglo));
                break;
            case 4:
                printf("\nEl promedio de los elementos del arreglo es %.2f\n", promedioElementosArregloInt(arreglo));
                break;
            case 5:
                printf("prueba2");
                break;
            case 0:
                printf("\nNos vemos  luego!\n");
                break;
            default:
                printf("\nLa opcion seleccionada es invalida, por favor seleccione otra opcion.\n");

        }

        if (opcion != 0) {
            pausa();
        }

    } while (opcion != 0);
}
