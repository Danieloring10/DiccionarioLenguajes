#include "Lista.h"

TNodo *CrearNodo(char *Linea){
    TNodo *aux;
    aux = (TNodo *)malloc(sizeof(TNodo));
    aux->Linea = Linea;
    aux->sig = NULL;
    return aux;
}
void AgregarNodo(TNodo **cab, char *Linea){
    TNodo *aux = CrearNodo(Linea), *corre = *cab;
    if(*cab == NULL){
        *cab = aux;
        return;
    }
    while(corre->sig != NULL){
        corre = corre->sig;
    }
    corre->sig = aux;
}
void MostrarNodos(TNodo *cab){
    TNodo *corre = cab;
    while(corre != NULL){
        printf("%s", corre->Linea);
        corre = corre->sig;
    }
}