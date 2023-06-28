#include <stdio.h>
int soma (int valor1, int valor2){
 //*função recebe dois valores 
 int soma= valor1 + valor2;
 return soma;
 }
 int main(void){
    int (*p)(int,int) = soma;
    int resultado = p(2,3);
    printf("valor do resultado = %d \n", resultado);
    return 0;
 }