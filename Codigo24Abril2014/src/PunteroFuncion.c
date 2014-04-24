#include <stdio.h>

int a[5] = {2,4,6,8,10};
int *fun();
int main(){

    printf("%d",*func());
    return 0;
}


int * fun(){
    int *ptr=a;
    ptr = *ptr + (*ptr++);
    return ptr;

}
