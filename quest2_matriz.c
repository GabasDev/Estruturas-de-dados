#include <stdio.h>
#include <stdlib.h>

// Funcao para alocar dinamicamente a matriz
int** alocarMatriz(int linhas, int colunas) {
    int** matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }
    return matriz;
}

// Funcao para liberar a memória alocada para a matriz
void liberarMatriz(int** matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

// Funcao para preencher a matriz com valores fornecidos pelo usuario
void preencherMatriz(int** matriz, int linhas, int colunas) {
    printf("Insira os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Funcao para imprimir a matriz
void imprimirMatriz(int** matriz, int linhas, int colunas) {
    printf("Matriz original:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Funcao para imprimir a matriz transposta
void imprimirMatrizTransposta(int** matriz, int linhas, int colunas) {
    printf("Matriz transposta:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    // Aloca memoria para a matriz
    int** matriz = alocarMatriz(linhas, colunas);

    // Preenche a matriz com valores fornecidos pelo usuario
    preencherMatriz(matriz, linhas, colunas);

    // Imprime a matriz original
    imprimirMatriz(matriz, linhas, colunas);

    // Imprime a matriz transposta
    imprimirMatrizTransposta(matriz, linhas, colunas);

    // Libera a memoria alocada para a matriz
    liberarMatriz(matriz, linhas);

    return 0;
}
