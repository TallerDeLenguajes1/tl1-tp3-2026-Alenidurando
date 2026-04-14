#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MostrarPersonas (char* Nombres[]);
void BuscarNombre (char* Nombres[],int cantidad);


int main(){

    int cantPersonas=5;
    char *Buff;
    Buff=(char *) malloc(100*sizeof(char));
    char *NombrePersona[cantPersonas];
    int longNombre;
    

    for (int i = 0; i < cantPersonas; i++)
    {
        fflush(stdin);
        printf("\nIngresar nombre: ");
        scanf("%s",Buff);
        
        longNombre=strlen(Buff);
        NombrePersona[i]= (char *) malloc(longNombre+1*sizeof(char));
        strcpy(NombrePersona[i],Buff);
        
       
    }
    
    //MostrarPersonas (NombrePersona);
    BuscarNombre (NombrePersona,cantPersonas);

    getchar();
    return 0;
}

void MostrarPersonas (char* Nombres[]){

    for (int i = 0; i < 5; i++)
    {
        printf("\nNombre en posicion [%d]: %s",i,Nombres[i]);

    }

}

void BuscarNombre (char* Nombres[],int cantidad){
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

}