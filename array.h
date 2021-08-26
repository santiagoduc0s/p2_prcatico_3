#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

/// Includes
#include "boolean.h"

/// Constants
const int TAM = 3;

/// Typedefs
typedef int arregloInt [TAM];

/// Functions and Procedures

void cargarArregloInt(arregloInt &arreglo);
// Carga del arreglo por teclado.

void mostrarArregloInt(arregloInt arreglo);
// Suma de los elementos del arreglo.

int sumaElementosArregloInt(arregloInt arreglo);
// Promedio de dichos elementos.

float promedioElementosArregloInt(arregloInt arreglo);
// Desplegar el arreglo por pantalla.

boolean existeValorArregloInt(arregloInt arreglo, int valor);
// Dado un entero determinar si pertenece o no al arreglo.

int cantidadMultiplosDeUnValorArregloInt(arregloInt arreglo, int valor);
// Dado un entero positivo, contar cuántos múltiplos de dicho entero hay en el arreglo.

void mayorValorConPosicionArregloInt(arregloInt arreglo, int &valorMayor, int &posicionValorMayor);
// Determinar cuál es el elemento mayor y devolverlo así como la posición que el mismo ocupa en el arreglo.

void invertirArregloInt(arregloInt arreglo,arregloInt &arregloInvertido);
// Dado un arreglo devolver otro arreglo con los valores del anterior invertidos.

void primerYUltimoValorArregloInt(arregloInt arreglo, int &primerValor, int &ultimoValor);
// Devolver el primero y el último elemento del arreglo.

#endif // ARRAY_H_INCLUDED
