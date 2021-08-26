#ifndef BOOLEAN_H_INCLUDED
#define BOOLEAN_H_INCLUDED

/// Includes
#include <stdio.h>

/// Constants

/// Typedefs
typedef enum {FALSE, TRUE} boolean;

/// Functions and Procedures
void cargarBoolean(boolean &b);
// carga la variable b con un valor ingresado por el usuario

void mostrarBoolean(boolean b);
// muestra en pantalla el valor de la variable b

#endif // BOOLEAN_H_INCLUDED
