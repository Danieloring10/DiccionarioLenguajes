#include "main.h"
int main(){
    TNodo *cab = NULL;
    FILE *Archivo = ObtenerArchivo();
    char *aux = LeerLinea(Archivo);
    while(aux != NULL){
        AgregarNodo(&cab,aux);
        aux = LeerLinea(Archivo);
    }
    MostrarNodos(cab);
}