#include <stdio.h>
#include <string.h>
typedef struct aluno Aluno;

Aluno* aluno_cria(char *nome[], float nota);

void aluno_libera(Aluno* a);

void aluno_imprime(Aluno* a);

void aluno_ordena(int n, Aluno**v);

void aluno_salva(int n, Aluno** v, const char* nome_arquivo);