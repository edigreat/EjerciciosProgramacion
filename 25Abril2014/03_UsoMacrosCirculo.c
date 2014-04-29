#include <stdio.h>
/**
 * Ejemplo de uso de macro para calcular el 
 * area de un circulo
 * */

#define PI 3.1416
#define AREA_CIRCULO(x) PI * x * x //define macro
int main(){
        int x=8;

        //En la macro se reemplazan los valores 3.1416 * 8 + 2 * 8 + 2
        //Verificar la precedencia y las operaciones que se realizan despues de
        //reemplazar la macro
        printf("Area del circulo %f \n", AREA_CIRCULO(x+2));
        return 0;
}

/**
  Objetivo del ejercicio: Determinar la salida
  Ejemplo de una ejecucion

  Area del circulo 43.132800
**/    
