#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas;
    printf("Digite a quantidade de linhas: \n");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas: \n");
    scanf("%d", &colunas);

    int **matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL)
    {
        exit(1);
    }

    int **matrizt = (int **)malloc(colunas * sizeof(int *));
    if (matrizt == NULL)
    {
        exit(1);
    }

    int contador;
    for (contador = 0; contador < linhas; contador++)
    {
        matriz[contador] = (int *)malloc(colunas * sizeof(int));
        if (matriz[contador] == NULL)
        {
            // Libera a memória alocada anteriormente
            for (int i = 0; i < contador; i++)
                free(matriz[i]);
            free(matriz);
            exit(1);
        }
    }

    int linha, coluna;
    printf("Digite os dados da matriz:  \n");
    for (linha = 0; linha < linhas; linha++)
    {
        for (coluna = 0; coluna < colunas; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for (coluna = 0; coluna < colunas; coluna++)
    {
        matrizt[coluna] = (int *)malloc(linhas * sizeof(int));
        if (matrizt[coluna] == NULL)
        {
            // Libera a memória alocada anteriormente
            for (int i = 0; i < coluna; i++)
                free(matrizt[i]);
            free(matrizt);

            // Libera a memória da matriz
            for (linha = 0; linha < linhas; linha++)
                free(matriz[linha]);
            free(matriz);

            exit(1);
        }
    }

    for (linha = 0; linha < linhas; linha++)
    {
        for (coluna = 0; coluna < colunas; coluna++)
        {
            matrizt[coluna][linha] = matriz[linha][coluna];
        }
    }

    printf("Matriz original:\n");
    for (linha = 0; linha < linhas; linha++)
    {
        for (coluna = 0; coluna < colunas; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("Matriz transposta:\n");
    for (coluna = 0; coluna < colunas; coluna++)
    {
        for (linha = 0; linha < linhas; linha++)
        {
            printf("%d ", matrizt[coluna][linha]);
        }
        printf("\n");
    }

    // Libera a memória
    for (linha = 0; linha < linhas; linha++)
        free(matriz[linha]);
    free(matriz);

    for (coluna = 0; coluna < colunas; coluna++)
        free(matrizt[coluna]);
    free(matrizt);
return 0;
}