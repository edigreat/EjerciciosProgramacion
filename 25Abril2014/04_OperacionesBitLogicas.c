#include <stdio.h>
/**
 El enunciado del ejercicio es: "Sabiendo que el codigo 
 ASCII de A=65 y a=97 . Que imprime el siguiente programa?

 */
int main(){
    char c=65;
    int i, mascara=1;
    for(i=1;i<=5;i++)
    {
        printf("%c \n",c|mascara);//Operacion Logica OR bit a bit
        mascara = mascara << 1; // Corrimiento a la izq a nivel de bits 
    }

}

/**
 Objetivo del ejercicio: Determinar la salida

    Para la primera iteracion
    c= 65         111001
    mascara       000001
                  ------
    c|mascara     111001  (65)
    
    Imprime A (ASCII = 65)
    
    mascara =    000010 (mascara << 1)
    
    Siguiente iteracion 

    c= 65         111001
    mascara       000010
                  ------ 
    c|mascara     111011  (67)

   
    Imprime C (ASCII = 67)
    
    mascara =    000100 (mascara << 1)

    y continua hasta terminar las iteraciones.....

    El resultado de la ejecucion es la secuencia A C E I Q

 **/




