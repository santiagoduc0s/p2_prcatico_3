#include "menu.h"

int menu()
{
    int opcion;
    printf("\n");
    printf("1 - Carga arreglo\n");
    printf("2 - Mostrar elementos del arreglo\n");
    printf("3 - Sumar elementos del arreglo\n");
    printf("4 - Promedio de los elementos del arreglo\n");
    printf("0 - Salir del programa\n");

    printf("\nQue opcion desea realizar?\n");
    scanf("%d", &opcion);
    return opcion;
}

void pausa()
{
    printf("\nPrecione cualquier tecla para continuar...\n");
    getch();
    system("cls");
}
