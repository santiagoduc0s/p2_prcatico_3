#include "boolean.h"

void cargarBoolean(boolean &b)
{
    int valor;
    printf ("\nIngrese 0 si es FALSE y 1 si es TRUE: ");
    scanf ("%d", &valor);
    if (valor == 0)
        b = FALSE;
    else
        b = TRUE;
}

void mostrarBoolean(boolean b)
{
    if (b)
        printf ("\nVerdadero");
    else
        printf ("\nFalso");
}
