#include <stdio.h>
int main(){
	int i=3,j=2;

	/*
	Verificar el decremento de --i, primero
	decrementa y luego evalua toda la expresion
	primer interacion en ternario
	5 ? 2 : 2
	segunda iteracion
	3 ? 1 : 2
	tercera iteracion
	2 ? 0 : 2 
	regresa 0 y es falso, sale del ciclo
	*/
	while(i+2?--i:j++)
	printf("%d %d\n",i,j);

	return 0;


}
/**
Objetivo del ejercicio: Determinar la salida
Ejemplo de una ejecucion:
2 2
1 2
**/



