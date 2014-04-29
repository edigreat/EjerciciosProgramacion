#include <stdio.h>
/**
 *  Ejemplo del uso de una macro
 */

#define MIN(x,y)((x)<(y)?(x):(y)) //Definicion de macro
int main(){
    int x = 10;
    int y = 2;
    //Se reemplaza los valores en la macro
    // la operacion que se evalua es  10 < 2 ? 10 : 2
    printf("Min %d\n",MIN(x,y)); 
}

/**
 El objetivo del ejercicio es determinar la salida
 Ejemplo de una ejecucion
    Min 2
 **/
