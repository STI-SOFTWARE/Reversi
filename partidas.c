#include <stdio.h>
#include "reversi.h"
typedef struct{
    char nombre[3];
    char ficha;
}Jugador;
enum {TRUE=1, FALSE=0}Boolean;

void main(){
    int jugar=-1;
    Turno turnoActual;
    Jugador jugador1, jugador2;
    char tablero[MAX][MAX];
    crearTablero(&tablero);
    elegirFicha(&jugador1, &jugador2);
    crearTurno(turnoActual);
    imprimirTablero();
    
    jugar=comprobarJugadasPosibles(&tablero);
    if(jugar){
        
    }
}
