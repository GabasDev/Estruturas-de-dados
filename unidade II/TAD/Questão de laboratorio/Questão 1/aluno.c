#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

struct aluno
{
    char *nome;
    float nota;
};

Aluno *aluno_cria(char *nome, float nota)
{
    Aluno *novo_aluno = (Aluno *)malloc(sizeof(Aluno));
    if (novo_aluno == NULL)
    {
        fprintf(stderr, "Erro: falha na alocação de memória.\n");
        exit(EXIT_FAILURE);
    }

    novo_aluno->nome = strdup(nome); // Copia o nome para a estrutura
    novo_aluno->nota = nota;

    return novo_aluno;
}

void aluno_libera(Aluno *a)
{
    free(a->nome);
    free(a);
}

void aluno_imprime(Aluno *a)
{
    printf("Nome: %s\nNota: %.2f\n", a->nome, a->nota);
}

int comparador(const void *a, const void *b)
{
    Aluno *aluno_a = *(Aluno **)a;
    Aluno *aluno_b = *(Aluno **)b;
    return strcmp(aluno_a->nome, aluno_b->nome);
}

void aluno_ordena(int n, Aluno **v)
{
    qsort(v, n, sizeof(Aluno *), comparador);
}

void aluno_salva(FILE *fp, int n, Aluno **v)
{
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%s\t%.2f\n", v[i]->nome, v[i]->nota);
    }
}