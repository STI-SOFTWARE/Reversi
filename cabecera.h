ifndef REVERSI_H
#define	REVERSI_H

#ifdef	__cplusplus
extern "C" {
#endif
#define MAX 8
#define Vacio '.'    
void crearTablero(char tablero[MAX + 1][MAX + 1]);
void crearTurno();
void cambiarTurno(char * Turno);
void imprimirTablero(char Tablero[MAX + 1][MAX + 1]);
void imprimirCabecera();
void comprovarMovimiento(char Tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy);
void elegirFicha(Jugador jugador1, Jugador jugador2);


#ifdef	__cplusplus
}
#endif

#endif	/* REVERSI_H */
