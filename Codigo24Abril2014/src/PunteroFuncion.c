#include <stdio.h>

int a[5] = {2,4,6,8,10};
int *func();
int main(){
    int Licontador=0;
    //Como regresa un puntero, imprimimos 
    // el contenido del mismo, para el ejercicio
    //a[1] = 4
    
    printf("Resultado  [%d]  \n ",*(*func)());
   
    printf("Verificando el contenido del arreglo \n "); 
    while(Licontador<5){
    printf("item[%d] = %d \n ",Licontador, a[Licontador]);
    Licontador = Licontador + 1;
    }

    return 0;
}


int *func(){
    int *ptr=a;
    
    // primero direcciona,despues incrementa
    // (*ptr++) primero regresa el contenido de la direccion
    // que apunta (2), que en n este momento es la primera
    // NOTA:INCREMENTA HASTA QUE TODA LA OPERACION HA SIDO EVALUADA. 
    // sin afectar ningun valor. Como (*ptr++) regresa 2
    // la operacion es
    // a[0]= 2  + 2  
    // Una vez que ha sido evaluada TODA  la expresion, 
    // se incrementa el puntero, es decir regresa la direccion
    // de a[1]
    *ptr = *ptr + (*ptr++);
    return ptr;

}
