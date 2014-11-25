#include <stdio.h>
#include 'partidas.h'
enum{TRUE=1, FALSE=0,}Boolean;
/*Recibe un tablero, una ficha y dos numeros
/Devuelve falso si la jugada no es valida y verdadero si lo es.*/
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
/Recibe un tablero y una ficha /Devuelve verdadero si hay jugadas posibles para la ficha dada y un 0 si falso.*/
int comprobarJugadasPosibles(char tablero[MAX + 1][MAX + 1], char ficha) {
    int i, j;
    for (i = 1; i < MAX + 1; i++) {
        for (j = 1; j < MAX + 1; j++) {
            if (comprobarMovimiento(tablero, ficha, i, j) == 1) 
                return TRUE; 
        }
    }
    return FALSE;
}
/*Recibe el turno que juega y lee por teclado las coord, devuelve una ficha creada con estos*/
Ficha leerFichaPorTeclado(char turno){
    Ficha ficha;
    char letra=VACIO;
    int fila, columna=-1;
    do{
        if(!strcmp(letra, VACIO)){   printf("\n\t>>>>>>Debe insertar una ficha valida.");}   
        printf("Escriba la fila en la que desea insertar la ficha (letra entre a y h):");
        fflush(stdio);
        fila=getche();
    }while(letra<61 || letra>68);
    fila=toupper(letra);
     do{
        if(columna!=-1){   printf("\n\t>>>>>>Debe insertar una columna valida.");}   
        printf("Escriba la columna en la que desea insertar la ficha (entero entre 1 y 8):");
        scanf("%d", &columna);
    }while(columna<1 || columna>8);
    ficha=crearFicha(turno, fila, columna-1);
}
void insertarFichaEnTablero(Ficha ficha, char tablero[MAX + 1][MAX + 1]){
    if(comprobarMovimiento(&tablero, ficha.turno, ficha.ejex, ficha.ejey)==TRUE){
        guardarFicha(ficha, &tablero);
        if(buscarGanador(&tablero)){//tambien entra con EMPATE
            imprimirGanador(&tablero);//esto en cabecera*****************************************
                /*tambien imprime el EMPATE
                int finDePartida(char tablero[MAX + 1][MAX + 1]);//booleano, tablero lleno?
                int contarFichas(char turno, char tablero[MAX + 1][MAX + 1]);
                */
        }
    }else{
        //jugada no valida------->vuelve a leerporteclado
    }
}
    

void inicializarPartida(){
    int jugar=-1;
    char turnoActual;//un unico turno que va cambiando
    Jugador jugador1, jugador2;
    char tablero[MAX][MAX];
    crearTablero(&tablero);
    elegirFicha(&jugador1, &jugador2);//
    crearTurno(turnoActual);
    imprimirTablero();
    imprimirTurno(turnoActual);
    
    jugar=comprobarJugadasPosibles(&tablero, turnoActual);
    if(jugar){
        insertarFichaEnTablero(leerFichaPorTeclado(turnoActual), &tablero);
    }else{
        pasarTurno(&turnoActual);    //esto imprime que pasamos   
        }
    cambiarTurno(&turnoActual);
}
