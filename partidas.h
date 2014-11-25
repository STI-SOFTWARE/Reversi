/* GENEDADOR DE PARTIDAS
 * 
 *         >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Aqui se definen todas las funciones que ejecutaran las partidas
 */
#ifndef PARTIDAS_H_
#define PARTIDAS_H_
#include 'inicializacion.h'
#ifdef	__cplusplus
extern "C" {
#endif
int comprobarJugadasPosibles(char tablero[MAX + 1][MAX + 1], char ficha);//booleano, se pueden hacer jugadas?
//si no se pueden hacer jugadas
    void pasarTurno(char * turnoActual);//Imprimimos la ficha que pasa turno y hacemos cambiarTurno()
//si se puede
void insertarFichaEnTablero(Ficha ficha, char tablero[MAX + 1][MAX + 1]);

    Ficha leerFichaPorTeclado(char turno);//Recibe el turno actual y por teclado las coord, devuelve una Ficha con las posiciones
    int comprobarMovimiento(char tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy);
                                                            /*/Recibe un tablero, una ficha y dos numeros
                                                            /Devuelve falso si la jugada no es valida y verdadero si lo es.*/
    void guardarFicha(Ficha ficha, char tablero[MAX + 1][MAX + 1]);
    int buscarGanador(char tablero[MAX + 1][MAX + 1]);//booleano, tenemos ganador?
        int finDePartida(char tablero[MAX + 1][MAX + 1]);//booleano, tablero lleno?
        int contarFichas(char turno, char tablero[MAX + 1][MAX + 1]);//devolvemos el turno con todas las fichas correspondientes

#ifdef	__cplusplus
}

#endif
#endif /* PARTIDAS_H_ */
