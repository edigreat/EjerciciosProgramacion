#include <stdio.h>
/**
 * Programa para ejemplificar el paso de parametros 
 * por referencia con punteros en C
 *
 * */
void fnsuma(int *x,int *y);

int main()
{
    int x=10,y=20;
    fnsuma(&x,&y);
    printf("Resultado = %d \n",x);

    return 0;
}

/**
 * Recibe la direccion de las variables
 */

void fnsuma(int *x,int *y){
    //Modifica el contenido al cual apuntan
    *x = *x + *y;

}
