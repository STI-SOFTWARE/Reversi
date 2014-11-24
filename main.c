/*
 * main.c
 *
 *      Author: Android
 */


#include <stdio.h>
#include <stdlib.h>

#include "cabecera.h"
#include "partidas.h"


typedef struct{
    char turno;
    int ejex;
    int ejey;
}Ficha;

void main(){
    int opcion=-1;
    imprimirCabecera();
    opcion=imprimirMenu();
    switch(opcion){
        case 1: 
            inicializarPartida();
            break;
        case 2:
            salir();
            break;
        default:
            break;
    }
}
