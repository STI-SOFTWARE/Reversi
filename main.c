/**/


void main(){
    int opcion=-1;
    imprimirCabecera();
    opcion=imprimirMenu();
    switch(opcion){
        case 1: 
            inicializarPartida();
            break;
        case 2:
            salir();
            break;
        default:
            break;
    }
}
