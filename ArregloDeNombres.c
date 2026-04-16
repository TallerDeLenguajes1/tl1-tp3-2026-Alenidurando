#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MostrarPersonas (char* Nombres[]);
int BuscaNombrePorPalabra(char* Nombres[],char palabra[]);
void BuscaNombrePorId (char* Nombres[],int cantidad);


int main(){

    int cantPersonas=5;
    char *Buff;
    char palabra[20];
    Buff=(char *) malloc(100*sizeof(char));
    char *NombrePersona[cantPersonas];
    int longNombre,opcion;
    

    for (int i = 0; i < cantPersonas; i++)
    {
        fflush(stdin);
        printf("\nIngresar nombre: ");
        scanf("%s",Buff);
        
        longNombre=strlen(Buff);
        NombrePersona[i]= (char *) malloc(longNombre+1*sizeof(char));
        strcpy(NombrePersona[i],Buff);
        fflush(stdin);
       
    }
    

    printf("----------------MENU-----------------");
    printf("\n---Opciones:\n\t 1. Buscar por ID \n\t 2. Buscar por Palabra ");
    printf("\nIngresar Opcion: ");
    scanf("%d",&opcion);

    switch (opcion)
    {
    case 1:
        BuscaNombrePorId(NombrePersona,cantPersonas);
        break;
    case 2:
        
            printf("\nIngresar nombre a buscar: ");
            fflush(stdin);
            scanf("%s",&palabra);

            int aux=BuscaNombrePorPalabra(NombrePersona,palabra);
            
            if(aux==-1){
                printf("LA PALABRA NO SE ENCONTRO.");
            }else printf("\n\tLa palabra encontrada es: %s",NombrePersona[aux]);
    break;
    
    default:
    printf("ERROR");
        break;
    }

    getchar();
    return 0;
}

void MostrarPersonas (char* Nombres[]){

    for (int i = 0; i < 5; i++)
    {
        printf("\nNombre en posicion [%d]: %s",i,Nombres[i]);

    }

}

int BuscaNombrePorPalabra(char* Nombres[],char palabra[]){

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
};
    
void BuscaNombrePorId (char* Nombres[],int cantidad){
    int id; //id a buscar. 
    printf("ingresar ID a buscar: ");
    fflush(stdin);
    scanf("%d",&id);
    int control=0; //variable de control para corroborar si el id existe en el vector.

    for (int i = 0; i < cantidad; i++)
    {
        if (id==i){
             printf("\nNombre en posicion del id [%d]: %s",i,Nombres[i]);
             i=cantidad; //igualando a la condicion para salir del ciclo ya que el id es unico.
             control=1;
        }

    }
    
    if(control==0){
        printf("\nNo se encontro el valor buscado ");
    }

};