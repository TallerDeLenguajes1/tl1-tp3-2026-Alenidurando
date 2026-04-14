#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MostrarPersonas (char* Nombres[]);

int main(){

    int cantPersonas=5;
    char *Buff;
    Buff=(char *) malloc(100*sizeof(char));
    char *NombrePersona[5];
    int longNombre;
    

    for (int i = 0; i < cantPersonas; i++)
    {
        printf("\nIngresar nombre: ");
        scanf("%s",Buff);
        longNombre=strlen(Buff);
        NombrePersona[i]= (char *) malloc(longNombre+1*sizeof(char));
        strcpy(NombrePersona[i],Buff);
       
    }
    
    MostrarPersonas (NombrePersona);


    getchar();
    return 0;
}

void MostrarPersonas (char* Nombres[]){

    for (int i = 0; i < 5; i++)
    {
        printf("\nNombre en posicion [%d]: %s",i,Nombres[i]);

    }

}