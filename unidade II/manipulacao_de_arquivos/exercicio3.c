#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Fruta
struct Fruta {
    char nome[50];
    float preco;
};

int main() {
    // Abre o arquivo "frutas.txt" para escrita
    FILE *arquivo = fopen("frutas.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Loop para cadastro de frutas
    while (1) {
        struct Fruta fruta;

        printf("Digite o nome da fruta (ou 'fim' para encerrar): ");
        scanf("%s", fruta.nome);

        // Verifica se o usuário deseja encerrar o cadastro
        if (strcmp(fruta.nome, "fim") == 0) {
            break;
        }

        printf("Digite o preco da fruta: ");
        scanf("%f", &fruta.preco);

        // Escreve os dados no arquivo
        fprintf(arquivo, "%s,%.2f\n", fruta.nome, fruta.preco);
    }

    // Fecha o arquivo e exibe mensagem de encerramento
    fclose(arquivo);
    printf("Cadastro de frutas encerrado. Arquivo 'frutas.txt' foi atualizado.\n");

    return 0;
}