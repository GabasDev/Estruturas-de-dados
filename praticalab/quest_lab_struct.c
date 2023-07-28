#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_VAGAS 3
#define MAX_TURMAS 2

typedef struct aluno {
    int mat;
    char nome[81];
    float notas[3];
    float media;
} Aluno;

typedef struct turma {
    char id;   /* caractere que identifica a turma, por exemplo, A ou B */
    int vagas; /* números de vagas disponíveis para fechar a turma */
    Aluno* alunos[MAX_VAGAS];
} Turma;

Turma* turmas[MAX_TURMAS];

void print_menu (){
    printf("MENU: \n");
    printf("1 : Criar turma \n");
    printf("2 : Matricular aluno \n");
    printf("3 : Listar turmas \n");
    printf("4 : Lancar notas \n");
    printf("5 : Listar alunos \n");
    printf("6 : Sair \n");
   
}

//funcao de criar as turmas
Turma* cria_turma(char id){
    int i,cont=0;
    for (i=0; i < MAX_TURMAS; i++){
        if (turmas[i]!=NULL){
            cont++;
        } if (cont==MAX_TURMAS){
            printf ("numero maximo de vagas atingido \n");
        }else if(turmas[i]==NULL){
            printf ("Criando Turma... \n");
            scanf  ("%c", &id);
            printf ("Turma criada com sucesso. \n");
            turmas[i]->id=id;
            turmas[i]->vagas=MAX_VAGAS; 
            return turmas[i]; 
        }
    }
    return(NULL);
}
void matricula_aluno(Turma *turma, int mat, char *nome)
{
    int i, j;
    char id;
    printf("em qual turma voce deseja matricular \n");
    scanf("%c", &id);
    for (j = 0; j < MAX_TURMAS; j++)
    {
        if (id == turma[j].id)
        {

            for (i = 0; i < MAX_VAGAS; i++)
            {
                if (turma[j].alunos[i] == NULL)
                {
                    printf("Tem vagas \n");
                    turma[j].alunos[i]->notas[0] = 0;
                    turma[j].alunos[i]->mat = mat;
                    strcpy (turma[j].alunos[i]->nome, nome);
                    printf("Matricula foi realizada com sucesso \n");
                    turma[j].vagas--;
                    break;
                    }
                    else
                    {
                        printf("nao tem vagas \n");                   
                }
            }
        }
    }
}
void lanca_notas(Turma *turma)
{
    int i, j, n;
    char id;
    printf("digite o ID da turma \n");
    scanf("%c", &id);
    for (n = 0; n < MAX_TURMAS; n++)
    {
        if (id == turma[n].id)
        {
            for (i = 0; i < MAX_VAGAS; i++)
            {
                printf("Aluno: %s ", turma[n].alunos[i]->nome);
                for (j = 0; j < 3; j++)
                {
                    printf("Digite a nota: %d \n", j + 1);
                    scanf("%f", &turma[n].alunos[i]->notas[j]);
                }
                turma[n].alunos[i]->media = turma[n].alunos[i]->notas[0] + turma[n].alunos[i]->notas[1] + turma[n].alunos[i]->notas[2] / 3;
            }
        }
    }
}
void imprime_alunos(Turma *turma)
{
    int i, n;
    char id;
    printf("digite o ID da turma \n");
    scanf("%c", &id);
    for (n = 0; n < MAX_TURMAS; n++)
    {
        if (id == turma[n].id)
        {
            for (i = 0; i < MAX_VAGAS; i++)
            {
                printf("O aluno : %s \n", turma[n].alunos[i]->nome);
                printf("matricula : %d  \n", turma[n].alunos[i]->mat);
                printf("A madia: %f  \n\n", turma[n].alunos[i]->media);
            }
        }
    }
}
    void imprime_turmas(Turma **turmas, int n)
    {
      for (n = 0; n < MAX_TURMAS; n++){
        printf ("Turma %c – %d vagas disponíveis \n", turmas[n]->id, turmas[n]->vagas);
        }
    }

int main(void)
{
    char id, nome[81];
    int opcao, mat, n = 0;
    Turma * turma = (Turma *)malloc(sizeof(Turma));
        do{
        print_menu();
        printf("DIGITE A OPCAO DESEJADA \n" );
        scanf ("%d", &opcao);
        switch (opcao){
            case 1:
                printf("Digite o id da turma que deseja criar \n");
                scanf(" %[^\n]c", &id);
                turma = cria_turma(id);
                break;
            case 2:
                printf("Digite o nome do aluno \n");
                scanf(" %[^\n]s", nome);
                printf("Digite a matricula \n");
                scanf("%d", &mat);
                matricula_aluno(turma, mat, nome);
                break;
            case 3:
                imprime_turmas(turmas, n);
                break;
            case 4:
                lanca_notas(turma);
                break;
            case 5:
                imprime_alunos(turma);
                break;
            case 6:
                printf("PROGRAMA ENCERADO \n\n");
                break;
            default:
                printf("entrada invalida");
                break;
            }
        }while (opcao != 6);

   return 0;
}

