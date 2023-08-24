#include <stdio.h>
#include "matriz.c"

int main()
{
    int linhas, colunas;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    Matriz *mat = mat_cria(linhas, colunas);

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            float elemento;
            scanf("%f", &elemento);
            mat_atribui(mat, i, j, elemento);
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%.2f ", mat_acessa(mat, i, j));
        }
        printf("\n");
    }

    mat_libera(mat);

    return 0;
}