/* >>>>>>>>>>>>>>>>>>>>>>>>Aqui se desarrollaran todas la funciones que dibujen la partida y el menu      */
#ifndef CABECERA_H_
#define CABECERA_H_

#ifdef	__cplusplus
extern "C" {
#endif
#define MAX 8
#define VACIO '.'  

void imprimirTablero(char Tablero[MAX + 1][MAX + 1]);
void imprimirContador(char  tablero[][]);
void imprimirTurno(char turno);

void imprimirCabecera();
void salir();
//extras: void imprimirEstadisticas();
int imprimirMenu();



#ifdef	__cplusplus
}
#endif
#endif /* CABECERA_H_ */
