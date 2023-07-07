#include <stdio.h>
#include <stdlib.h>

int main()
{

    int alunos = 10;
    int questoes;
    int **turma;

    printf("Quantas questoes ");
    scanf("%d", &questoes);

    int gabarito[questoes];
    float valor = 10 / questoes;
    float notaFinal;
    // aloca um vetor de LIN ponteiros para linhas
    turma = malloc(alunos * sizeof(int *));

    // aloca cada uma das linhas (vetores de COL inteiros)
    for (int i = 0; i < alunos; i++)
    {
        turma[i] = malloc(questoes * sizeof(int));
    }
    // gabarito
    printf("Gabarito : \n");
    for (int j = 0; j < questoes; j++)
    {

        scanf("%d", &gabarito[j]);
    }

    // resultados /verificar se ta certo
    int cont = 0;
    int cont2 = 0;

    for (int ii = 0; ii < alunos; ii++)
    {
        notaFinal = 0;
        printf("insira as respostas do aluno de indice %d: ", ii + 1);
        for (int jj = 0; jj < questoes; jj++)
        {
            scanf("%d", &turma[ii][jj]);
            if (gabarito[jj] == turma[ii][jj])
            {
                cont++;
            }
        }
        notaFinal = cont * valor;
        printf("Nota final do aluno %d: %.2f\n", ii, notaFinal);
        cont = 0;
        if (notaFinal >= 6)
        {
            printf("aprovado: \n");
            cont2++;
        }
        else
        {
            printf("reprovado: \n");
        }
    }
    float porcent = (((float)cont2 / 10) * 100);
    printf("Porcentagem de alunos aprovados: %.2f\n", porcent);

    // liberar memoria

    for (int i = 0; i < alunos; i++)
    {
        free(turma[i]);
    }

    return 0;
}