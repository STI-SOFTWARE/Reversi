/* 
 * File:   main.c
 * Author: eps
 *
 * Created on 11 de noviembre de 2014, 12:41
 * GENEDADOR DE PARTIDAS
 * ::::::::::::::::::::::::::::::::::::::::::::INICIAR PARTIDA::::::::::::::::::::::::::::::::::::::::::::::::
 *  EN PROCESO
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 8
#define BLANCO 'x'
#define NEGRO 'o'


void crearTablero(char tablero[MAX+1][MAX+1]); //si se asigna un puntero libre habria que hacer una reserva dinamica de memoria
void imprimirTablero(char  Tablero[MAX+1][MAX+1]);
char crearTurno();
void cambiarTurno(char *turno);
void imprimirTurno(char turno);
void imprimirCabecera();

void crearTablero(char tablero[MAX+1][MAX+1]){
    int i, j;
    for(i=0; i<MAX+1; i++){
        for(j=0; j<MAX+1; j++){
            tablero[i][j]=' ';
        }   
    }
    for(i=1; i<=MAX; i++){
        tablero[0][i] = 'A'+i-1;
        tablero[i][0] = '1'+i-1; 
    }
    tablero[4][4]= BLANCO;
    tablero [5][5]= BLANCO;
    tablero[5][4]= NEGRO;
    tablero [4][5]= NEGRO;
}
void imprimirTablero(char tablero[MAX+1][MAX+1]){
    int i,j;
    for(i=0; i<MAX+1; i++){
        printf("\n");
        for(j=0; j<MAX+1; j++){
           printf("%c ",tablero[i][j]);
        }
    }
}
char crearTurno(){
    char turno;
    int ficha;
    do{
        printf("\nElija la ficha: \n 1.X\n 2.O\n");
        scanf("%d", ficha);
    }while(ficha!=1 || ficha!=2);
    if(ficha==1){
        turno=BLANCO;
    }else if(ficha==2){
        turno=NEGRO;
    }
     printf("\nficha elegida: %s", turno);
    return turno;
}
/*void cambiarTurno(char* turno){
    if(strcmp( turno,  NEGRO)){
        *turno=BLANCO;
    }else{
        *turno=NEGRO;
    }
}*/

