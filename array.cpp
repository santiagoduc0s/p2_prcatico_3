#include "array.h"


void cargarArregloInt(arregloInt &arreglo)
{
    int i;
    for(i = 0; i < TAM; i++) {
        printf("\nIngrese un numero entero para la posicion %d del arreglo: ", i);
        scanf("%d",&arreglo[i]);
    }
}

void mostrarArregloInt(arregloInt arreglo)
{
    int i;
    printf("\nEl contenido del arreglo es:\n");
    printf("[");
    for(i = 0; i < TAM - 1;i++)
        printf("%d, ", arreglo[i]);
    printf("%d]\n", arreglo[i]);
}

int sumaElementosArregloInt(arregloInt arreglo)
{
    int i, suma = 0;
    for(i = 0; i < TAM; i++)
        suma = suma + arreglo[i];
    return suma;
}

float promedioElementosArregloInt(arregloInt arreglo)
{
    int i, suma = 0;
    for(i = 0;i < TAM; i++) {
        suma = suma + arreglo[i];
    }
    return (suma * 1.0) / i * 1.0;
}

boolean existeValorArregloInt(arregloInt arreglo, int valor)
{
    int i = 0;
    boolean existe = FALSE;
    while(existe == FALSE && i < TAM) {
        if(arreglo[i] == valor)
            existe = TRUE;
        i++;
    }
    return existe;
}

int cantidadMultiplosDeUnValorArregloInt(arregloInt arreglo, int valor)
{
    int i, contador = 0;
    for(i = 0; i < TAM; i++) {
        if(arreglo[i] % valor == 0)
            contador++;
    }
    return contador;
}

void mayorValorConPosicionArregloInt(arregloInt arreglo, int &valorMayor, int &posicionValorMayor)
{
    int i;
    valorMayor = arreglo[0];
    posicionValorMayor = 0;
    for(i = 0;i < TAM;i++) {
        if(valorMayor < arreglo[i]) {
            valorMayor = arreglo[i];
            posicionValorMayor = i;
        }
    }
}

void invertirArregloInt(arregloInt arreglo,arregloInt &arregloInvertido)
{
    int i;
    for(i = 0; i < TAM; i++)
        arregloInvertido[(TAM - 1) - i] = arreglo[i];
}

void primerYUltimoValorArregloInt(arregloInt arreglo, int &primerValor, int &ultimoValor)
{
    primerValor = arreglo[0];
    ultimoValor = arreglo[TAM - 1];
}

