#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maximo 100

int main(void) {
    int quant_pessoas, *vetor, contador;
    char **matriz;

    printf("Informe a quantidade de pessoas que deseja armazenar:\n");
    scanf("%d", &quant_pessoas);

    if (quant_pessoas > maximo) {
        printf("Quantidade inválida.\n");
        exit(1);
    }

    matriz = (char **)calloc(quant_pessoas, sizeof(char *));
    if (matriz == NULL) {
        printf("Erro de alocação.\n");
        exit(1);
    }

    for (contador = 0; contador < quant_pessoas; contador++) {
        matriz[contador] = (char *)calloc(maximo, sizeof(char));
        printf("Informe o nome completo da %dª pessoa:\n", contador + 1);
        scanf(" %[^\n]", matriz[contador]);
    }

    vetor = (int *)calloc(quant_pessoas, sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocação.\n");
        exit(1);
    }

    for (contador = 0; contador < quant_pessoas; contador++) {
        printf("Informe a idade da %dª pessoa:\n", contador + 1);
        scanf("%d", &vetor[contador]);
    }

    printf("\nNomes:\n");
    for (contador = 0; contador < quant_pessoas; contador++) {
        printf("%s\n", matriz[contador]);
    }

    for (contador = 0; contador < quant_pessoas; contador++) {
        free(matriz[contador]);
    }
    free(matriz);
    free(vetor);

    return 0;
}
