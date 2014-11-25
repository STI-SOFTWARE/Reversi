/* >>>>>>>>>>>>>>>>>>>>>>>>Aqui se desarrollaran todas la funciones que dibujen la partida y el menu      */
#ifndef INICIALIZACION_H_
#define INICIALIZACION_H_

#ifdef	__cplusplus
extern "C" {
#endif


void crearTurno();
void elegirFicha(Jugador jugador1, Jugador jugador2);
void cambiarTurno(char * turnoActual);
Ficha crearFicha(char turno, int ejex, int ejey);

void crearTablero(char tablero[MAX + 1][MAX + 1]);




#ifdef	__cplusplus
}
#endif
#endif /* INICIALIZACION_H_ */
