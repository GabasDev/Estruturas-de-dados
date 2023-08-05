#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;
    char *nome_arquivo[20];
    printf("informe o nome do arquivo:\n");
    scanf(" %[^\n]", nome_arquivo); // exemplo de aquivo

    FILE *arquivo = fopen(nome_arquivo, "wt");
    if (arquivo == NULL)
    {
        printf("erro ao abrir arquivo");
        return 1;
    }
    else
    {
        printf("arquivo criado com sucesso");
    }
    fputc ('A', arquivo);
    fputs ('\n HELLO WORLD GABAS', arquivo);
    fprintf (arquivo, "\n algoritmos e estruturas de dados 1: %f \n",5.6);
    fclose(arquivo); // fecha arquivo
    return 0;
}