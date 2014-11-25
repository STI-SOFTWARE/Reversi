/* 
 * ::::::::::::::::::::::::::::::::::::::::::::INICIAR PARTIDA::::::::::::::::::::::::::::::::::::::::::::::::
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 8
#define BLANCO 'x'
#define NEGRO 'o'
void crearTablero(char tablero[MAX+1][MAX+1]){
    int i, j;
    for(i=0; i<MAX+1; i++){
        for(j=0; j<MAX+1; j++){
            tablero[i][j]=VACIO;
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

char crearTurno(){
    char turno;
    int ficha=-1;
    do{
        if(ficha!=-1){
            printf("\n\t >>>>>>>>>>>>>>>Debe elegir una ficha permitida.");
        }
        printf("\nElija una ficha: \n 1.X\n 2.O\n");
        scanf("%d", ficha);
    }while(ficha!=1 || ficha!=2);
    if(ficha==1){
        turno=BLANCO;
    }else if(ficha==2){
        turno=NEGRO;
    }
    return turno;
}
void cambiarTurno(char* turno){
    if(strcmp( * turno,  NEGRO)){
        *turno=BLANCO;
    }else{
        *turno=NEGRO;
    }
}

