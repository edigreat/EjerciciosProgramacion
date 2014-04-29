#include <stdio.h>
/**
 * Ejemplo del uso de punteros en un arreglo
 *
 * */

void cambio(int *b,int n);
int main(){
    int i , a[5]={2,4,6,8,10};
    cambio(a,5);
    for(i=0; i<5;i++){
    printf("a[%d] = %d \n",i, a[i]); 
    }

    return 0;
}
/**
 * int *b recibe la direccion del primer elemento del 
 * arreglo
 * */
void cambio(int *b,int n){

    int i;
    for(i=0;i<=4;i++){
        /* la direccion de b es a[0]
         * en este caso, a[1] es el unico modificado
         */
        *(b+1)=*(b+i) + 5;
    }

}

/**
  El objetivo del ejercicio es cual es el resultado que imprime en main
  Ejemplo de una ejecucion
[0] = 2
a[1] = 15
a[2] = 6
a[3] = 8
a[4] = 10
**/

