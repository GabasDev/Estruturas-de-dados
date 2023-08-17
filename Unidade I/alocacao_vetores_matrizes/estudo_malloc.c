#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = (int *)calloc(40, sizeof(int));

    if (p != NULL)
        printf("Alocados 40 inteiros \n");
    else
        printf("Não é possível alocar memória\n");
    free(p);
    

    return (0);
}