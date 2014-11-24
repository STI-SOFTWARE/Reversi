/*partidas.h
 *  Created on: 24/11/2014  Author: Android
 *         >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Aqui se definen todas las funciones que ejecutaran las partidas
 */
#ifndef PARTIDAS_H_
#define PARTIDAS_H_

#ifdef	__cplusplus
extern "C" {
#endif


void crearTablero();
void elegirTurno();

char crearTurno();
void cambiarTurno(char turnoActual);
Ficha crearFicha(char turno);


void crearTablero(char tablero[MAX + 1][MAX + 1]);
void crearTurno();
void cambiarTurno(char * Turno);

void insertarFichaEnTablero(Ficha ficha, char tablero[][]);
            
    int jugadasPosibles(char turnoActual, char tablero[][]);//booleano, se pueden hacer jugadas?
    //si no se pueden hacer jugadas
    void pasarTurno();//Imprimimos la ficha que pasa turno y hacemos cambiarTurno()
    //si se puede, hacemos un dowhile comprobando lo que recibimos por teclado
    int comprobarTeclado(char fila, int columna);//booleano, comprobamos lo que mete el usuario
    void guardarFicha(Ficha ficha, char tablero[][]);
    int buscarGanador(char tablero[][]);//booleano, tenemos ganador?
        int finDePartida(char tablero[][]);//booleano, tablero lleno?
        char contarFichas(char tablero[][]);//devolvemos el turno con +fichas

int contarFichas(char turno, char tablero[][]);

void comprovarMovimiento(char Tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy);
void elegirFicha(Jugador jugador1, Jugador jugador2);


#ifdef	__cplusplus
}
#endif
#endif /* PARTIDAS_H_ */
