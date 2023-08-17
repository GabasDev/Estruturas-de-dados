#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tamanho;
    printf("Digite o tamanho do vetor ");
    scanf("%d", &tamanho);
    int *vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL)
    {
        printf("ERRO DE ALOCACAO ");
        exit(1);
    }
    else
    {
        printf("alocacao realizada com sucesso \n");
    }
    // recebe elementos inserido pelo user
    int contador;
    printf("digite os valores do vetor :");
    for (contador = 0; contador < tamanho; contador++)
    {
        scanf("%d", &vetor[contador]);
    }
     for (contador = tamanho-1; contador >= 0; contador--)
      printf ("%d",vetor[contador]);


    free(vetor);
    return 0;
}