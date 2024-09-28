#ifndef LISTA_H
#define LISTA_H
#include <stdio.h>
#include <stdlib.h>

typedef struct  NODO
{
    char *Linea; 
    struct NODO *sig;
}TNodo;

TNodo *CrearNodo(char *Linea);
void AgregarNodo(TNodo **cab,char *Linea);
void MostrarNodos(TNodo *cab);

#endif