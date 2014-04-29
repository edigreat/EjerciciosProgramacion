#include <stdio.h>
/**
 * Ejemplo del operador ternario
 * Verificar la precedencia
 * */
int main(){
int k,num=30;
k=(num>5?(num<=10?100:200):500);

printf("resultado %d \n",k);

return 0;

}

/**
 El objetivo del ejercicio es determinar la salida
 en consola, ejemplo de una ejecucion
    resultado 200 
 **/

