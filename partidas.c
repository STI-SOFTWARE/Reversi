#include <string.h>
#include <stdio.h>
#include "cabecera.h"
#include "inicializacion.h"
#include "partidas.h"

/*Recibe un tablero, una ficha y dos numeros
/Devuelve falso si la jugada no es valida y verdadero si lo es.*/
int comprobarS(char tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy) {
    int i;
    if (ficha == BLANCO) {
        if (tablero[posx + 1][posy] == NEGRO) {
            for (i = 2; posx + i < MAX + 1; i++)
                if (tablero[posx + i][posy] == BLANCO)
                    return TRUE;
                else if (tablero[posx + i][posy] == VACIO)
                    break;
        }
    }
    if (ficha == NEGRO) {
        if (tablero[posx + 1][posy] == BLANCO) {
            for (i = 2; posx + i < MAX + 1; i++) {
                if (tablero[posx + i][posy] == NEGRO)
                    return TRUE;
                else if (tablero[posx + i][posy] == VACIO)
                    break;
            }
        }
    }
    return FALSE;
}

int comprobarN(char tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy) {
    int i;
    if (ficha == BLANCO) {
        if (tablero[posx - 1][posy] == NEGRO) {
            for (i = 2; posx + i > 0; i++)
                if (tablero[posx - i][posy] == BLANCO)
                    return TRUE;
                else if (tablero[posx - i][posy] == VACIO)
                    break;
        }
    }
    if (ficha == NEGRO) {
        if (tablero[posx - 1][posy] == BLANCO) {
            for (i = 2; posx + i > 0; i++) {
                if (tablero[posx - i][posy] == NEGRO)
                    return TRUE;
                else if (tablero[posx - i][posy] == VACIO)
                    break;
            }
        }
    }
    return FALSE;
}

int comprobarE(char tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy) {
    int i;
    if (ficha == BLANCO) {
        if (tablero[posx][posy + 1] == NEGRO) {
            for (i = 2; posy + i < MAX + 1; i++)
                if (tablero[posx][posy + i] == BLANCO)
                    return TRUE;
                else if (tablero[posx][posy + i] == VACIO)
                    break;
        }
    }
    if (ficha == NEGRO) {
        if (tablero[posx][posy + 1] == BLANCO) {
            for (i = 2; posy + i < MAX + 1; i++) {
                if (tablero[posx][posy + i] == NEGRO)
                    return TRUE;
                else if (tablero[posx][posy + i] == VACIO)
                    break;
            }
        }
    }
    return FALSE;
}

int comprobarO(char tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy) {
    int i;
    if (ficha == BLANCO) {
        if (tablero[posx][posy - 1] == NEGRO) {
            for (i = 2; posy - i > 0; i++)
                if (tablero[posx][posy - i] == BLANCO)
                    return TRUE;
                else if (tablero[posx][posy - i] == VACIO)
                    break;
        }
    }
    if (ficha == NEGRO) {
        if (tablero[posx][posy - 1] == BLANCO) {
            for (i = 2; posy - i > 0; i++) {
                if (tablero[posx][posy - i] == NEGRO)
                    return TRUE;
                else if (tablero[posx][posy - i] == VACIO)
                    break;
            }
        }
    }
    return FALSE;
}

int comprobarNE(char tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy) {
    int i;
    if (ficha == BLANCO) {
        if (tablero[posx - 1][posy + 1] == NEGRO) {
            for (i = 2; posx - i > 0 || posy + i < MAX + 1; i++) {
                if (tablero[posx - i][posy + i] == BLANCO)
                    return TRUE;
                else if (tablero[posx - i][posy + i] == VACIO)
                    break;
            }
        }
        return FALSE;
    }
    if (ficha == NEGRO) {
        if (tablero[posx - 1][posy + 1] == BLANCO) {
            for (i = 2; posx - i > 0 || posy + i < MAX + 1; i++) {
                if (tablero[posx - i][posy + i] == NEGRO)
                    return TRUE;
                else if (tablero[posx - i][posy + i] == VACIO)
                    break;
            }
        }
    }
    return FALSE;
}

int comprobarNO(char tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy) {
    int i;
    if (ficha == BLANCO) {
        if (tablero[posx - 1][posy - 1] == NEGRO) {
            for (i = 2; posx - i > 0 || posy - i > 0; i++) {
                if (tablero[posx - i][posy - i] == BLANCO)
                    return TRUE;
                else if (tablero[posx - i][posy - i] == VACIO)
                    break;
            }
        }
        return FALSE;
    }
    if (ficha == NEGRO) {
        if (tablero[posx - 1][posy - 1] == BLANCO) {
            for (i = 2; posx - i > 0 || posy - i > 0; i++) {
                if (tablero[posx - i][posy - i] == NEGRO)
                    return TRUE;
                else if (tablero[posx - i][posy - i] == VACIO)
                    break;
            }
        }
    }
    return FALSE;
}

int comprobarSE(char tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy) {
    int i;
    if (ficha == BLANCO) {
        if (tablero[posx + 1][posy + 1] == NEGRO) {
            for (i = 2; posx + i < MAX + 1 || posy + i < MAX + 1; i++) {
                if (tablero[posx + i][posy + i] == BLANCO)
                    return TRUE;
                else if (tablero[posx + i][posy + i] == VACIO)
                    break;
            }
        }
        return FALSE;
    }
    if (ficha == NEGRO) {
        if (tablero[posx + 1][posy + 1] == BLANCO) {
            for (i = 2; posx + i < MAX + 1 || posy + i < MAX + 1; i++) {
                if (tablero[posx + i][posy + i] == NEGRO)
                    return TRUE;
                else if (tablero[posx + i][posy + i] == VACIO)
                    break;
            }
        }
    }
    return FALSE;
}

int comprobarSO(char tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy) {
    int i;
    if (ficha == BLANCO) {
        if (tablero[posx + 1][posy - 1] == NEGRO) {
            for (i = 2; posx - i < MAX + 1 || posy - i > 0; i++) {
                if (tablero[posx + i][posy - i] == BLANCO)
                    return TRUE;
                else if (tablero[posx + i][posy - i] == VACIO)
                    break;
            }
        }
    }
    if (ficha == NEGRO) {
        if (tablero[posx + 1][posy - 1] == BLANCO)
            for (i = 2; posx + i < MAX + 1 || posy - i > 0; i++) {
                if (tablero[posx + i][posy - i] == NEGRO)
                    return TRUE;
                else if (tablero[posx + i][posy - i] == VACIO)
                    break;
            }
    }
    return FALSE;
}

int comprobarMovimiento(char tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy) {
    int i;
    if (tablero[posx][posy] != VACIO)
        return FALSE;

    if (comprobarN(tablero, ficha, posx, posy) == TRUE) {
        return TRUE;
    } else if (comprobarS(tablero, ficha, posx, posy) == TRUE) {
        return TRUE;
    } else if (comprobarE(tablero, ficha, posx, posy) == TRUE) {
        return TRUE;
    } else if (comprobarO(tablero, ficha, posx, posy) == TRUE) {
        return TRUE;
    } else if (comprobarNO(tablero, ficha, posx, posy) == TRUE) {
        return TRUE;
    } else if (comprobarNE(tablero, ficha, posx, posy) == TRUE) {
        return TRUE;
    } else if (comprobarSO(tablero, ficha, posx, posy) == TRUE) {
        return TRUE;
    } else if (comprobarSE(tablero, ficha, posx, posy) == TRUE) {
        return TRUE;
    } else
        return FALSE;
}

/*
/Recibe un tablero y una ficha 
/Devuelve verdadero si hay jugadas posibles para la ficha dada y un 0 si falso.
 */
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

/*Recibe el turno que juega y el tablero
comprueba y VALIDA la jugada del usuario
devuelve una ficha creada con estos, NULL si no es valido el mov*/
Ficha leerFichaPorTeclado(char turno, char tablero[MAX + 1][MAX + 1]) {
    Ficha jugada = leerYComprobarTeclado(&turno, tablero);
    //if (comprobarMovimiento(&tablero, jugada.turno, jugada.ejex, jugada.ejey))
    return jugada;
    //else
    //  return NULL;

}

/*Recibe el turno que juega y lee por teclado las coord,
COMPRUEBA lo que ingresa el usuario,
devuelve una ficha con el mov a jugar*/
Ficha leerYComprobarTeclado(char turno, char tablero[MAX + 1][MAX + 1]) {
    Ficha ficha;
    char letra = VACIO;
    int fila, columna = 0;
    do {
        do {
            if (!strcmp(letra, VACIO))
                printf("\n\t>>>>>>Debe insertar una ficha valida.");
            printf("Escriba la fila en la que desea insertar la ficha (letra entre a y h):");
            // fflush(stdio);
            //fila=getche();
            letra = getchar();
        } while (letra > 65 && letra < 72 || letra > 97 && letra < 104);
        letra = toupper(letra);
        fila = letra - 65;
        do {
            if (columna != -1) {
                printf("\n\t>>>>>>Debe insertar una columna valida.");
            }
            printf("Escriba la columna en la que desea insertar la ficha (entero entre 1 y 8):");
            scanf("%d", &columna);
        } while (columna < 1 && columna > 8);
    } while (comprobarMovimiento(tablero, turno, fila, columna));
    ficha = crearFicha(turno, fila, columna - 1);
}

void insertarFichaEnTablero(Ficha ficha, char tablero[MAX + 1][MAX + 1]) {//OJO, la ficha que metemos ya esta comprobada y el mov validado
    int i;
    if (comprobarN(tablero, ficha.turno, ficha.ejex, ficha.ejey) == TRUE) {
        for (i = 0; tablero[ficha.ejex - i][ficha.ejey] == ficha.turno; i++)
            tablero[ficha.ejex - i][ficha.ejey] = ficha.turno;
    } else if (comprobarS(tablero, ficha.turno, ficha.ejex, ficha.ejey) == TRUE) {
        for (i = 0; tablero[ficha.ejex + i][ficha.ejey] == ficha.turno; i++)
            tablero[ficha.ejex + i][ficha.ejey] = ficha.turno;
    } else if (comprobarE(tablero, ficha.turno, ficha.ejex, ficha.ejey) == TRUE) {
        for (i = 0; tablero[ficha.ejex][ficha.ejey + i] == ficha.turno; i++)
            tablero[ficha.ejex][ficha.ejey + i] = ficha.turno;
    } else if (comprobarO(tablero, ficha.turno, ficha.ejex, ficha.ejey) == TRUE) {
        for (i = 0; tablero[ficha.ejex][ficha.ejey - i] == ficha.turno; i++)
            tablero[ficha.ejex][ficha.ejey - i] = ficha.turno;
    } else if (comprobarNO(tablero, ficha.turno, ficha.ejex, ficha.ejey) == TRUE) {
        for (i = 0; tablero[ficha.ejex - i][ficha.ejey - i] == ficha.turno; i++)
            tablero[ficha.ejex - i][ficha.ejey - i] = ficha.turno;
    } else if (comprobarNE(tablero, ficha.turno, ficha.ejex, ficha.ejey) == TRUE) {
        for (i = 0; tablero[ficha.ejex - i][ficha.ejey + i] == ficha.turno; i++)
            tablero[ficha.ejex - i][ficha.ejey + i] = ficha.turno;
    } else if (comprobarSO(tablero, ficha.turno, ficha.ejex, ficha.ejey) == TRUE) {
        for (i = 0; tablero[ficha.ejex + i][ficha.ejey - i] == ficha.turno; i++)
            tablero[ficha.ejex + i][ficha.ejey - i] = ficha.turno;
    } else if (comprobarSE(tablero, ficha.turno, ficha.ejex, ficha.ejey) == TRUE) {
        for (i = 0; tablero[ficha.ejex + i][ficha.ejey - i] == ficha.turno; i++)
            tablero[ficha.ejex + i][ficha.ejey - i] = ficha.turno;
    }
    tablero[ficha.ejex][ficha.ejey] = ficha.turno;
}

void imprimirGanador(char tablero[MAX + 1][MAX + 1], Jugador jugador1, Jugador jugador2) {//esto en cabecera*******************
    Jugador jugador = buscarGanador(tablero, jugador1, jugador2);
    if (strcmp(jugador.nombre, VACIO)) {
        printf("\n!Empate!");
        return;
    }
    printf("\n¡Las %c ganan!\n\t>>Felicidades %s", jugador.fichaElegida, jugador.nombre);
}

/*booleano,
Recibe el tablero, si encuentra ganador devuelve TRUE sino hay ganador FALSE*/
int encuentraGanador(char tablero[MAX + 1][MAX + 1]) {
    int fichasNegras = 0, fichasBlancas = 0;
    if (comprobarJugadasPosibles(tablero,NEGRO)&& comprobarJugadasPosibles(tablero,BLANCO)|| !finDePartida(&tablero)) {
        return FALSE;
    }
    return TRUE;
}

/*Recibe el tablero y los jugadores,
 devuelve el jugador ganador, VACIO si es empate*/
Jugador buscarGanador(char tablero[MAX + 1][MAX + 1], Jugador jugador1, Jugador jugador2) {
    Jugador ganador;
    int fichasNegras, fichasBlancas;
    char nombre;
    fichasNegras = contarFichas(NEGRO, tablero);
    fichasBlancas = contarFichas(BLANCO, tablero);
    if (fichasNegras > fichasBlancas) {
        if (jugador1.fichaElegida == NEGRO)
            ganador = jugador1;
        else
            ganador = jugador2;
    } else if (fichasNegras < fichasBlancas) {
        if (jugador1.fichaElegida == BLANCO)
            ganador = jugador1;
        else
            ganador = jugador2;
    } else
        strcpy(ganador.nombre,"000");
    return ganador;
}

/*Recibe el tablero
 / Devuelve FALSE si hay al menos una casilla vacia*/
int finDePartida(char tablero[MAX + 1][MAX + 1]) {
    int i, j;
    for (i = 0; i < MAX + 1; i++) {
        for (j = 0; j < MAX + 1; j++) {
            if (tablero[i][j] == VACIO) {

                return FALSE;
            }
        }
    }
    return TRUE;
}

/*Recibe el turno que esta jugando y el tablero
        devuelve el numero de fichas que tiene el jugador.turno*/
int contarFichas(char turno, char tablero[MAX + 1][MAX + 1]) {
    int i, j, contador = 0;
    for (i = 0; i < MAX + 1; i++) {
        for (j = 0; j < MAX + 1; j++) {

            if (tablero[i][j] == turno)
                contador++;
        }
    }
    return contador;
}

void inicializarPartida() {
    int jugar = -1;
    char turnoActual, tablero[MAX + 1][MAX + 1]; //un unico turno que va cambiando
    Jugador jugador1, jugador2;
    Ficha jugada ;
    crearTablero(tablero);
    elegirFicha(&jugador1, &jugador2, &turnoActual); //
    //crearTurno(turnoActual);
    imprimirTablero(tablero);
    imprimirTurno(turnoActual);
    do {
        jugar = comprobarJugadasPosibles(tablero, turnoActual);
        if (jugar) {

            jugada = leerFichaPorTeclado(turnoActual, tablero);

            insertarFichaEnTablero(jugada, tablero);
        } else {
            // pasarTurno(&turnoActual); //esto imprime que pasamos           			}
            cambiarTurno(&turnoActual); //DEBE imprimir por pantalla el turno que esta jugando
        }
    } while (finDePartida(tablero) != TRUE);


}
