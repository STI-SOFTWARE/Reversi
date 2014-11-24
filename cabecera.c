#include <stdio.h>
#include "reversi.h"
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
/*
/Recibe un tablero, una ficha y dos numeros
/Devuelve 0 si la jugada no es valida y 1 si lo es.
*/
int comprobarMovimiento(char tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy) {
    int i;
    if(tablero[x][y]!= VACIO)
        return 0;
    if (ficha == BLANCO) {
        if (tablero[posx][posy + 1] == NEGRO) {
            for (i = 2; posy + i < MAX + 1; i++)
                if (tablero[posx][posy + i] == BLANCO)
                    return 1;
            else if (tablero[posx][posy + i] == VACIO)
                break;
        }
        if (tablero[posx][posy - 1] == NEGRO) {
            for (i = 2; posy - i > 0; i++)
                if (tablero[posx][posy - i] == BLANCO)
                    return 1;
            else if (tablero[posx][posy - i] == VACIO)
                break;
        }
        if (tablero[posx + 1][posy] == NEGRO) {
            for (i = 2; posx + i < MAX + 1; i++)
                if (tablero[posx + i][posy] == BLANCO)
                    return 1;
            else if (tablero[posx + i][posy] == VACIO)
                break;
        }
        if (tablero[posx - 1][posy] == NEGRO) {
            for (i = 2; posx + i > 0; i++)
                if (tablero[posx - i][posy] == BLANCO)
                    return 1;
            else if (tablero[posx - i][posy] == VACIO)
                break;
        }
        if (tablero[posx + 1][posy + 1] == NEGRO) {
            for (i = 2; posx + i < MAX + 1 || posy + i < MAX + 1; i++) {
                if (tablero[posx + i][posy + i] == BLANCO)
                    return 1;
               else  if (tablero[posx + i][posy + i] == VACIO)
                    break;
            }
        }
        if (tablero[posx - 1][posy - 1] == NEGRO) {
            for (i = 2; posx - i > 0 || posy - i > 0; i++) {
                if (tablero[posx - i][posy - i] == BLANCO)
                    return 1;
               else  if (tablero[posx - i][posy - i] == VACIO)
                    break;
            }
        }
        if (tablero[posx - 1][posy + 1] == NEGRO) {
            for (i = 2; posx - i > 0 || posy + i < MAX + 1; i++) {
                if (tablero[posx - i][posy + i] == BLANCO)
                    return 1;
                else if (tablero[posx - i][posy + i] == VACIO)
                    break;
            }
        }
        if (tablero[posx + 1][posy - 1] == NEGRO) {
            for (i = 2; posx - i < MAX + 1 || posy - i > 0; i++) {
                if (tablero[posx + i][posy - i] == BLANCO)
                    return 1;
                else if (tablero[posx + i][posy - i] == VACIO)
                    break;
            }
        }
    }
    if (ficha == NEGRO) {
        if (tablero[posx][posy + 1] == BLANCO) {
            for (i = 2; posy + i < MAX + 1; i++) {
                if (tablero[posx][posy + i] == NEGRO)
                    return 1;
               else  if (tablero[posx][posy + i] == VACIO)
                    break;
            }
        }
        if (tablero[posx][posy - 1] == BLANCO) {
            for (i = 2; posy - i > 0; i++) {
                if (tablero[posx][posy - i] == NEGRO)
                    return 1;
                else if (tablero[posx][posy - i] == VACIO)
                    break;
            }
        }
        if (tablero[posx + 1][posy] == BLANCO) {
            for (i = 2; posx + i < MAX + 1; i++) {
                if (tablero[posx + i][posy] == NEGRO)
                    return 1;
                else if (tablero[posx + i][posy] == VACIO)
                    break;
            }
        }
        if (tablero[posx - 1][posy] == BLANCO) {
            for (i = 2; posx + i > 0; i++) {
                if (tablero[posx - i][posy] == NEGRO)
                    return 1;
                else if (tablero[posx - i][posy] == VACIO)
                    break;
            }
        }
        if (tablero[posx + 1][posy + 1] == BLANCO) {
            for (i = 2; posx + i < MAX + 1 || posy + i < MAX + 1; i++) {
                if (tablero[posx + i][posy + i] == NEGRO)
                    return 1;
               else  if (tablero[posx + i][posy + i] == VACIO)
                    break;
            }
        }
        if (tablero[posx - 1][posy - 1] == BLANCO) {
            for (i = 2; posx - i > 0 || posy - i > 0; i++) {
                if (tablero[posx - i][posy - i] == NEGRO)
                    return 1;
               else  if (tablero[posx - i][posy - i] == VACIO)
                    break;
            }
        }
        if (tablero[posx - 1][posy + 1] == BLANCO) {
            for (i = 2; posx - i > 0 || posy + i < MAX + 1; i++) {
                if (tablero[posx - i][posy + i] == NEGRO)
                    return 1;
               else  if (tablero[posx - i][posy + i] == VACIO)
                    break;
            }
        }
        if (tablero[posx + 1][posy - 1] == BLANCO)
            for (i = 2; posx + i < MAX + 1 || posy - i > 0; i++) {
                if (tablero[posx + i][posy - i] == NEGRO)
                    return 1;
               else  if (tablero[posx + i][posy - i] == VACIO)
                    break;
            }
    }
    return 0;
}
/*
/Recibe un tablero y una ficha
/Devuelve un 1 si hay jugadas posibles para la ficha dada y un 0 si no.
*/
comprobarJugadasPosibles(char tablero[MAX + 1][MAX + 1], char ficha) {
    int i, j;
    for (i = 1; i < MAX + 1; i++) {
        for (j = 1; j < MAX + 1; j++) {
            if (comprobarMovimiento(tablero, ficha, i, j) == 1) 
                return 1; 
        }
    }
    return 0;
}
