#include <stdio.h>
#include <stdlib.h>

typedef struct professor
{
    char nome[81], disci[81];
    int horas;
} Professor;

void preenche(Professor **professor)
{
    *professor = (Professor *)malloc(sizeof(Professor));

    printf("insira seu nome\n");
    scanf(" %[^\n]", (*professor)->nome);

    printf("insira sua disciplina\n");
    scanf(" %[^\n]", (*professor)->disci);

    printf("insira seu regime de trabalho\n");
    scanf("%d", &((*professor)->horas));
}

void imprime(Professor *professor)
{
    printf("o nome: %s\n", professor->nome);
    printf("disciplina: %s\n", professor->disci);
    printf("regime de trabalho: %d\n", professor->horas);
}

void altera(Professor *professor)
{
    printf("digite o novo regime de trabalho: ");
    scanf("%d", &(professor->horas));
}

int main()
{
    int opcao;
    Professor *professor = NULL;

    do
    {
        printf("O QUE DESEJA FAZER?\n");
        printf("1-PREENCHER\n");
        printf("2-IMPRIMIR\n");
        printf("3-ALTERAR\n");
        printf("4-SAIR\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            preenche(&professor);
            break;
        case 2:
            if (professor != NULL)
            {
                imprime(professor);
            }
            else
            {
                printf("Professor não preenchido ainda!\n");
            }
            break;
        case 3:
            if (professor != NULL)
            {
                altera(professor);
            }
            else
            {
                printf("Professor não preenchido ainda!\n");
            }
            break;
        case 4:
            // sai do loop e encera o programa
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }

    } while (opcao != 4);

    // libera memoria
    free(professor);

    return 0;
}
