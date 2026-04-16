#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MostrarPersonas (char* Nombres[]);
int BuscarNombre(char* Nombres[],char palabra[]);

int main(){

    int cantPersonas=5;
    char *Buff;
    char palabra[20];
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
        fflush(stdin);
       
    }
    
    //MostrarPersonas (NombrePersona);
    printf("ingresar nombre a buscar: ");
    fflush(stdin);
    scanf("%s",&palabra);

        int aux=BuscarNombre(NombrePersona,palabra);
            if(aux==-1){
                printf("LA PALABRA NO SE ENCONTRO.");
            }else printf("\n\tLa palabra encontrada es: %s",NombrePersona[aux]);
        
    
    
        getchar();
    return 0;
}

void MostrarPersonas (char* Nombres[]){

    for (int i = 0; i < 5; i++)
    {
        printf("\nNombre en posicion [%d]: %s",i,Nombres[i]);

    }

}

int BuscarNombre(char* Nombres[],char palabra[]){

char *puntero;
    
    for (int i = 0; i < 5; i++)
    {
        puntero=strstr(Nombres[i],palabra);
        if(puntero!=NULL){
           return i;
        }
    }
    
    if(puntero==NULL){
        return -1;
    }
    
}