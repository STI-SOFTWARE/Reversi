#include <stdio.h>
#include "partidas.h"
int imprimirMenu(){
    int opcion=-1;
    do{
        if(opcion!=1 || opcion!=2){
            printf("\t>>>>>>>>>>>Debe elegir una opcion válida.\n");
        }
        printf("Elija una opcion de menu.\n\t 1. Jugar.\n\t 2. Salir.\n");
        scanf("%d", opcion);
    }while(opcion!=1 || opcion!=2);
        return opcion;
}
void salir(){
    printf("Gracias por jugar con nosotros.\n\tVuelva pronto.");
}
