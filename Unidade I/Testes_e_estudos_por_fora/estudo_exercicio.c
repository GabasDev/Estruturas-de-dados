#include <stdio.h>
int main(void)
{
    int x = 10;
    int y = 20;
    int *p = &x;
    int *py = &y;
    printf("o endereco de x = %i - valor de x = %i\n", &x, *p);
    printf("o endereco de y = %i - valor de y = %i\n", &y,y, *p);
    int soma = x + y; 
    printf("a soma dos dois valores e = %i\n", soma);
    
    return 0;
}