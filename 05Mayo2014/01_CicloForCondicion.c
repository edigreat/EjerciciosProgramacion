#include <stdio.h>

int main(){

int x=1,y=1;

//En C cualquier cosas diferente de cero
//es verdadero
for( ; y ; printf("%d %d \n" ,x,y)){
	//Primer evalua y luego incrementa
	y=x++<=5;	

}

printf("\n");

return 0;
}

/* Objetivo del ejercicio: Determinar la salida
Ejemplo de una ejecucion 

2 1 
3 1 
4 1 
5 1 
6 1 
7 0 
*/



