#include "aluno.h"
#include <string.h>
#include <stdlib.h>
struct aluno
{
    char nome[100];
    float nota;
};

typedef struct aluno Aluno; // Adicione essa linha para definir o tipo Aluno

Aluno* aluno_cria(char *nome[100], float nota)
{
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    strcpy(aluno->nome, nome[100]);
    aluno->nota = nota;
    return aluno;
}

void aluno_libera(Aluno *a)
{
    free(a);
}

void aluno_imprime(Aluno *a)
{
    printf("Nome: %s\n", a->nome);
    printf("Nota: %.2f\n", a->nota);
}

void aluno_ordena(int n, Aluno **v)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(v[j]->nome, v[j + 1]->nome) > 0)
            {
                Aluno *temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void aluno_salva(int n, Aluno** v, const char* nome_arquivo) {
    FILE* arquivo = fopen(nome_arquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return;
    }
    
    for (int i = 0; i < n; i++) {
        fprintf(arquivo, "%s\t%.2f\n", v[i]->nome, v[i]->nota);
    }
    
    fclose(arquivo);
}