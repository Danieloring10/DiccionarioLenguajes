#include "Lector.h"
FILE *ObtenerArchivo(){
    char Nombre[MAXTAM];
    printf("Ingresa el nombre del archivo: ");
    fgets(Nombre,MAXTAM,stdin);
    Nombre[strlen(Nombre) - 1] = '\0';
    FILE *archivo = fopen(Nombre, "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo");
    }
    return archivo;
}
char *LeerLinea(FILE *archivo){
    char *Linea, *aux;
    if(archivo == NULL || feof(archivo)){
        return NULL;
    }
    Linea = (char *)malloc(MAXTAM);
    fgets(Linea,MAXTAM,archivo);
    aux = Linea;
    Linea = realloc(aux,strlen(Linea)+1);
    printf("%s", Linea);
    return Linea;
} 
