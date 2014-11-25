#include <stdio.h>
#include 'partidas.h'

void imprimirTablero(char tablero[MAX+1][MAX+1]){
    int i,j;
    for(i=0; i<MAX+1; i++){
        printf("\n");
        for(j=0; j<MAX+1; j++){
           printf("%c ",tablero[i][j]);
        }
    }
}

int imprimirMenu(){
    int opcion=-1;
    do{
        if(opcion!=-1 ){
            printf("\t>>>>>>>>>>>Debe elegir una opcion válida.\n");
        }
        printf("Elija una opcion de menu.\n\t 1. Jugar.\n\t 2. Salir.\n");
        scanf("%d", opcion);
    }while(opcion!=1 || opcion!=2);
        return opcion;
}
void salir(){
    int i=0;
    while(i++<20){
        printf("\n");
    }
    printf("Gracias por jugar con nosotros.\n\tVuelva pronto.");
}
void imprimirCabecera(){
    printf(">>>>>>>>>>>>>>Bienvenido a Reversi\n");
    imprimirContador(NULL);
    imprimirTablero(NULL);
}

void imprimirContador(char tablero[][]){
    printf("x: %d \t\t\t\t o:%d", contarFichas("x", tablero), contarFichas("o", tablero));
}
void imprimirTurno(char turno){
    printf("\n >>>>>>>>>>>>Turno de: %s", turno);
    
}
