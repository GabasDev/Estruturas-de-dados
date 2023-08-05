#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // função toupper

int main(void) {
    int c;
    char entrada[121];
    char saida[121];
    FILE *e;
    FILE *s;

    printf("Digite o nome do arquivo de entrada:\n");
    scanf("%120s", entrada);
    printf("Digite o arquivo de saída:\n");
    scanf("%120s", saida);

    /* abre arquivos para leitura e escrita */
    e = fopen(entrada, "rt");
    if (e == NULL) {
        printf("Não foi possivel abrir o arquivo de entrada:\n");
        exit(1);
    }
    s = fopen(saida, "wt");
    if (s == NULL) {
        printf("Não foi possivel abrir o arquivo de saida:\n");
        exit(1);
    }
    /* lê da entrada e escreve na saída */
    while ((c = fgetc(e)) != EOF) {
        fputc(toupper(c), s);
    }

    fclose(e);
    fclose(s);
    return 0;
}
