/*
 * main.c               >>>>>>>>>>Aqui ejecutamos el menu, desde donde nuestro jugador se movera
 *      Author: Android
 */

#include <stdio.h>
#include <stdlib.h>
#include "cabecera.h"
#include "inicializacion.h"


enum {TRUE=1, FALSE=0}Boolean;
enum {A=0,B,C,D,E,F,G,H}Letras;

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
    }
}
