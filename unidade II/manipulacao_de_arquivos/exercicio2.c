#include <stdio.h>

typedef struct {
    char nome[50];
    float nota1, nota2, nota3;
} Aluno;

int main() {
    int N;
    printf("Digite o número de alunos: ");
    scanf("%d", &N);

    FILE *arquivo = fopen("alunos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    Aluno alunos[N];

    for (int i = 0; i < N; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome); // Lê o nome com espaços em branco
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);

        // Escreve as informações no arquivo
        fprintf(arquivo, "Aluno %d\n", i + 1);
        fprintf(arquivo, "Nome: %s\n", alunos[i].nome);
        fprintf(arquivo, "Nota 1: %.2f\n", alunos[i].nota1);
        fprintf(arquivo, "Nota 2: %.2f\n", alunos[i].nota2);
        fprintf(arquivo, "Nota 3: %.2f\n", alunos[i].nota3);
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
    printf("Informações dos alunos foram escritas no arquivo 'alunos.txt'.\n");

    return 0;
}