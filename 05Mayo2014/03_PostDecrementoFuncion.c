#include <stdio.h>
int fun();

int main(){
	
	for(fun();fun();fun()){
		printf("%d ",fun());

	}

	return 0;

}

int fun(){
/* STATIC vuelve el atributo statico
y lo coloca en un ambiente global
*/
	int static num = 7;

/**
regresa primero el valor, se evalua la 
expresion donde fue llamado y decrementa
**/
	return num--;

}

/**
Objetivo del ejercicio: Determinar la salida
Ejemplo de una ejecucion: 
	5 2
**/



