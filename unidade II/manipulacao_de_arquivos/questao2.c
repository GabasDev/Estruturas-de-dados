#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vetor[10];
    int i;
    int menor, maior;
    double media = 0.0;

    FILE *entrada;
    FILE *saida;

    entrada = fopen("entradaq2.txt", "r"); // o nome do arquivo de entrada
    if (entrada == NULL)
    {
        printf("Erro ao abrir o arquivo de entrada\n");
        exit(1);
    }
    //ver qual e o menor e o maior elemento 
    for (i = 0; i < 10; i++)
    {
        fscanf(entrada, "%d", &vetor[i]);
    }

    fclose(entrada);

    menor = vetor[0];
    maior = vetor[0];

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        media += vetor[i];
    }

    media /= 10.0;

    saida = fopen("saida.txt", "w");//o nome do arquivo de saída
    if (saida == NULL)
    {
        printf("Erro ao abrir o arquivo de saída\n");
        exit(1);
    }
    // imprimir os resultados no arquivo de saida
    fprintf(saida, "Menor elemento: %d\n", menor);
    fprintf(saida, "Maior elemento: %d\n", maior);
    fprintf(saida, "Média dos elementos: %.2lf\n", media);
    
    fclose(saida);

    return 0;
}