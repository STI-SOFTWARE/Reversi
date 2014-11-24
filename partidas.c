#include <stdio.h>
#include "partidas.h"

void inicializarPartida(){
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
