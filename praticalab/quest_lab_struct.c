#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_VAGAS 3
#define MAX_TURMAS 2

typedef struct aluno
{
    int mat;
    char nome[81];
    float notas[3];
    float media;
} Aluno;

typedef struct turma
{
    char id;   /* caractere que identifica a turma, por exemplo, A ou B */
    int vagas; /* números de vagas disponíveis para fechar a turma */
    Aluno *alunos[MAX_VAGAS];
} Turma;

Turma *turmas[MAX_TURMAS];

void print_menu()
{
    printf("MENU: \n");
    printf("1 : Criar turma \n");
    printf("2 : Matricular aluno \n");
    printf("3 : Listar turmas \n");
    printf("4 : Lancar notas \n");
    printf("5 : Listar alunos \n");
    printf("6 : Sair \n");
}

// Funcao de criar as turmas
Turma *cria_turma(char id)
{
    int i;
    for (i = 0; i < MAX_TURMAS; i++)
    {
        if (turmas[i] == NULL)
        {
            printf("Criando Turma... \n");
            turmas[i] = (Turma *)malloc(sizeof(Turma));
            turmas[i]->id = id;
            turmas[i]->vagas = MAX_VAGAS;
            printf("Turma criada com sucesso. \n");
            return turmas[i];
        }
    }
    printf("Numero maximo de turmas atingido. \n");
    return NULL;
}

void matricula_aluno(Turma *turma, int mat, char *nome)
{
    int i;
    if (turma == NULL)
    {
        printf("Turma nao existe. \n");
        return;
    }

    if (turma->vagas == 0)
    {
        printf("Nao tem vagas disponiveis na turma %c. \n", turma->id);
        return;
    }

    for (i = 0; i < MAX_VAGAS; i++)
    {
        if (turma->alunos[i] == NULL)
        {
            printf("Matriculando aluno... \n");
            turma->alunos[i] = (Aluno *)malloc(sizeof(Aluno));
            turma->alunos[i]->mat = mat;
            strcpy(turma->alunos[i]->nome, nome);
            printf("Matricula foi realizada com sucesso. \n");
            turma->vagas--;
            return;
        }
    }
}

void lanca_notas(Turma *turma)
{
    int i, j;

    if (turma == NULL)
    {
        printf("Turma nao existe. \n");
        return;
    }

    for (i = 0; i < MAX_VAGAS; i++)
    {
        if (turma->alunos[i] != NULL)
        {
            printf("Aluno: %s \n", turma->alunos[i]->nome);
            for (j = 0; j < 3; j++)
            {
                printf("Digite a nota %d: ", j + 1);
                scanf("%f", &turma->alunos[i]->notas[j]);
            }
            turma->alunos[i]->media = (turma->alunos[i]->notas[0] + turma->alunos[i]->notas[1] + turma->alunos[i]->notas[2]) / 3;
        }
    }
}

void imprime_alunos(Turma *turma)
{
    int i;

    if (turma == NULL)
    {
        printf("Turma nao existe. \n");
        return;
    }

    for (i = 0; i < MAX_VAGAS; i++)
    {
        if (turma->alunos[i] != NULL)
        {
            printf("O aluno: %s \n", turma->alunos[i]->nome);
            printf("Matricula: %d  \n", turma->alunos[i]->mat);
            printf("Media: %f  \n\n", turma->alunos[i]->media);
        }
    }
}

void imprime_turmas()
{
    int i;

    for (i = 0; i < MAX_TURMAS; i++)
    {
        if (turmas[i] != NULL)
        {
            printf("Turma %c : %d vagas disponíveis \n", turmas[i]->id, turmas[i]->vagas);
        }
    }
}

int main(void)
{
    char id, nome[81];
    int opcao, mat, n = 0;

    do
    {
        print_menu();
        printf("DIGITE A OPCAO DESEJADA \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o id da turma que deseja criar \n");
            scanf(" %c", &id);
            cria_turma(id);
            break;
        case 2:
            printf("Digite o nome do aluno \n");
            scanf(" %[^\n]", nome);
            printf("Digite a matricula \n");
            scanf("%d", &mat);
            matricula_aluno(turmas[n], mat, nome);
            break;
        case 3:
            imprime_turmas();
            break;
        case 4:
            printf("Digite o ID da turma \n");
            scanf(" %c", &id);
            for (n = 0; n < MAX_TURMAS; n++)
            {
                if (turmas[n]->id == id)
                {
                    lanca_notas(turmas[n]);
                    break;
                }
            }
            break;
        case 5:
            printf("Digite o ID da turma \n");
            scanf(" %c", &id);
            for (n = 0; n < MAX_TURMAS; n++)
            {
                if (turmas[n] != NULL && turmas[n]->id == id)
                {
                    imprime_alunos(turmas[n]);
                    break;
                }
            }
            break;
        case 6:
            printf("PROGRAMA ENCERRADO \n\n");
            break;
        default:
            printf("Entrada invalida. Tente novamente. \n");
            break;
        }
    } while (opcao != 6);

    // Libere a memória alocada para os alunos e turmas antes de sair do programa
    for (n = 0; n < MAX_TURMAS; n++)
    {
        if (turmas[n] != NULL)
        {
            int i;
            for (i = 0; i < MAX_VAGAS; i++)
            {
                if (turmas[n]->alunos[i] != NULL)
                {
                    free(turmas[n]->alunos[i]);
                }
            }
            free(turmas[n]);
        }
    }

    return 0;
}
