#include "aluno.c"
#include <stdlib.h>
#include <string.h>

int main()
{
    Aluno *alunos[5];

    alunos[0] = aluno_cria("Alice", 9.5);
    alunos[1] = aluno_cria("Bob", 7.8);
    alunos[2] = aluno_cria("Carol", 6.2);
    alunos[3] = aluno_cria("David", 8.9);
    alunos[4] = aluno_cria("Eve", 5.4);

    printf("Dados dos alunos: \n");
    for (int i = 0; i < 5; i++)
    {
        aluno_imprime(alunos[i]);
    }

    aluno_ordena(5, alunos);

    FILE *fp = fopen("alunos.txt", "w");
    if (fp == NULL)
    {
        fprintf(stderr, "Erro: não foi possível abrir o arquivo.\n");
        return 1;
    }

    aluno_salva(fp, 5, alunos);
    fclose(fp);

    for (int i = 0; i < 5; i++)
    {
        aluno_libera(alunos[i]);
    }

    return 0;
}