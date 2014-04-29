#include <stdio.h>
/**
 * Programa para ejemplificar la doble indireccion, 
 * modificado del original visto en clase para evitar
 * warnings en los printf, ya que algunos imprimen
 * direcciones
 */

int main(){
    int i=4;
    int *p=&i;
    int **q=&p;

    printf ("%x , %p , %p \n",i,p,q);
    printf ("%x , %x , %p \n",i,*p,*q);
    printf ("%x , %x , %x \n",i,*p,**q);

}

/**
 * El objetivo del ejercicio es determinar que imprime (direccion o valor)
 Ejemplo de una ejecucion

 4 , 0x7fff5035d72c , 0x7fff5035d720
 4 , 4 , 0x7fff5035d72c
 4 , 4 , 4

 */

