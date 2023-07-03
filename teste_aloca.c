#include<stdio.h>
#include<stdlib.h>

int main(void){
    int *x;
    x=malloc(sizeof(int));
    if (x){
        printf ("memoria alocada com sucesso! \n");
        printf ("x: %d\n", *x);
        *x=50;
        printf ("x: %d\n", *x);
    }
    else {
        printf ("erro de memoria");
    }
    return (0); 
}

