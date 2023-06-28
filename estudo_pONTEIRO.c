#include <stdio.h>
int main(void)
{
    int a, b, soma;
    printf("digite o numero ");
    scanf("%d", &a);
    printf("digite o numero ");
    scanf("%d", &b);
    soma = a + b;
    printf(" o numero %i + %i e %d  \n", a, b, soma);
    int *p = &soma;
    (*p)++;
    printf(" e o numero depois da modificacao e %i ", soma);

    return 0;
}