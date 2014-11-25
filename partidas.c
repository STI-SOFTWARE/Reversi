#include <stdio.h>
#include 'partidas.h'
enum{TRUE=0, FALSE=1,}Boolean;
/*Recibe un tablero, una ficha y dos numeros
/Devuelve falso si la jugada no es valida y verdadero si lo es.*/
int comprobarMovimiento(char tablero[MAX + 1][MAX + 1], char ficha, int posx, int posy) {
    int i;
    if(tablero[x][y]!= VACIO)
        return TRUE;
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
                    return FALSE;
                else if (tablero[posx + i][posy] == VACIO)
                    break;
            }
        }
        if (tablero[posx - 1][posy] == BLANCO) {
            for (i = 2; posx + i > 0; i++) {
                if (tablero[posx - i][posy] == NEGRO)
                    return FALSE;
                else if (tablero[posx - i][posy] == VACIO)
                    break;
            }
        }
        if (tablero[posx + 1][posy + 1] == BLANCO) {
            for (i = 2; posx + i < MAX + 1 || posy + i < MAX + 1; i++) {
                if (tablero[posx + i][posy + i] == NEGRO)
                    return FALSE;
               else  if (tablero[posx + i][posy + i] == VACIO)
                    break;
            }
        }
        if (tablero[posx - 1][posy - 1] == BLANCO) {
            for (i = 2; posx - i > 0 || posy - i > 0; i++) {
                if (tablero[posx - i][posy - i] == NEGRO)
                    return FALSE;
               else  if (tablero[posx - i][posy - i] == VACIO)
                    break;
            }
        }
        if (tablero[posx - 1][posy + 1] == BLANCO) {
            for (i = 2; posx - i > 0 || posy + i < MAX + 1; i++) {
                if (tablero[posx - i][posy + i] == NEGRO)
                    return FALSE;
               else  if (tablero[posx - i][posy + i] == VACIO)
                    break;
            }
        }
        if (tablero[posx + 1][posy - 1] == BLANCO)
            for (i = 2; posx + i < MAX + 1 || posy - i > 0; i++) {
                if (tablero[posx + i][posy - i] == NEGRO)
                    return FALSE;
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
/*Recibe el turno que juega y el tablero
						comprueba y VALIDA la jugada del usuario
						 devuelve una ficha creada con estos, NULL si no es valido el mov*/
Ficha leerFichaPorTeclado(char turno, char tablero[MAX + 1][MAX + 1]){
	Ficha jugada=leerYComprobarTeclado(&turno);
	if(comprobarMovimiento(&tablero,jugada.turno, jugada.ejex, jugada.ejey){
		return jugada;
	}else{
		return NULL;
	}
}
/*Recibe el turno que juega y lee por teclado las coord,
						COMPRUEBA lo que ingresa el usuario,
						devuelve una ficha con el mov a jugar*/
Ficha leerYComprobarTeclado(char turno){
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
void insertarFichaEnTablero(Ficha ficha, char tablero[MAX + 1][MAX + 1]){//OJO, la ficha que metemos ya esta comprobada y el mov validado
    guardarFicha(ficha, &tablero);
    if(encuentraGanador(&tablero)){//tambien entra con EMPATE
        imprimirGanador(&tablero);
    }

}
void imprimirGanador(char tablero[MAX + 1][MAX + 1], Jugador jugador1, Jugador jugador2){//esto en cabecera*******************
	Jugador jugador=buscarGanador(&tablero,&jugador1, &jugador2);
	if(strcmp(jugador.nombre,VACIO)){
		printf("\n!Empate!");
		return;
	}
	printf("\n¡Las %c ganan!\n\t>>Felicidades %s", jugador.turno, jugador.nombre);
}
/*booleano,
Recibe el tablero, si encuentra ganador devuelve TRUE sino hay ganador FALSE*/
int encuentraGanador(char tablero[MAX + 1][MAX + 1]){
	int fichasNegras=0, fichasBlancas=0;
	if(jugadasPosibles(&tablero)==TRUE || !finDePartida(&tablero)){	return FALSE;}
	return TRUE;	
}
/*Recibe el tablero y los jugadores,
	devuelve el jugador ganador*/
Jugador buscarGanador(char tablero[MAX + 1][MAX + 1],, Jugador jugador1, Jugador jugador2){
	Jugador ganador;
	char nombre;
	fichasNegra=contarFichas(NEGRA, &tablero);
	fichasBlancas=contarFichas(BLANCA, &tablero);
	if(fichasNegras>fichasBlancas){			ganador.turno=NEGRA;}
	else if(fichasNegras<fichasBlancas){	ganador.turno=BLANCA;}
	else{									ganadodr.turno=VACIO}
	ganador.nombre=buscarNombre(ganador.turno, jugador1, jugador2);
	return ganador;
}
char buscarNombre(char turno, Jugador jugador1, Jugador jugador2){
	if(strcmp(jugador1.turno, turno){		return jugador1.nombre;}
	else if(strcmp(jugador2.turno, turno)){ return jugador2.nombre;}
	else{									return VACIO;}
}
/*booleano,
Recibe el tablero, pregunta tablero lleno?*/
int finDePartida(char tablero[MAX + 1][MAX + 1]){
	int i,j;
	for(i=0; i<MAX+1; i++){
		for(j=0; j<MAX+1; j++){
			if(tablero[i][j]==VACIO){	return TRUE;}
		}
	}
	return FALSE;
}
/*Recibe el turno que esta jugando y el tablero
	devuelve el numero de fichas que tiene el jugador.turno*/
int contarFichas(char turno, char tablero[MAX + 1][MAX + 1]){
	int i,j, contador=0;
	for(i=0; i<MAX+1; i++){
		for(j=0; j<MAX+1; j++){
			if(strcmp(tablero[i][j], turno){	contador++;}
		}
	}
	return contador;
}

void inicializarPartida(){
    int jugar=-1;
    char turnoActual, tablero[MAX][MAX];//un unico turno que va cambiando
    Jugador jugador1, jugador2;
    Ficha jugada=NULL;
    crearTablero(&tablero);
    elegirFicha(&jugador1, &jugador2);//
    crearTurno(turnoActual);
    imprimirTablero();
    imprimirTurno(turnoActual);
    do{
		jugar=comprobarJugadasPosibles(&tablero, turnoActual);
    	if(jugar){
			do{
				jugada=leerFichaPorTeclado(turnoActual);
			}while(jugada==NULL);
			insertarFichaEnTablero(jugada, &tablero);  	}
	   	else{		pasarTurno(&turnoActual);    //esto imprime que pasamos           			}
    	cambiarTurno(&turnoActual);//DEBE imprimir por pantalla el turno que esta jugando
	}while(finDePartida(&tablero)!=TRUE);
    
}
