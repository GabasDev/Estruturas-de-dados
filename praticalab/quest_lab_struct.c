#include <stdio.h>
#include <stdlib.h>
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
    printf("MENU: ");
    printf("1 – Criar turma");
    printf("2 – Listar turmas");
    printf("3 – Matricular aluno");
    printf("4 – Lancar notas");
    printf("5 – Listar alunos");
    printf("6 – Sair");

}

//funcao de criar as turmas
Turma* cria_turma(char id){
    int i,cont=0;
    for (i=0; i < MAX_TURMAS; i++){
        if (turmas[i]!=NULL){
            cont++;
        }else if (cont==MAX_TURMAS){
            printf ("numero maximo de vagas atingido");
        }else if(turmas[i]==NULL){
            printf ("Criando Turma...");
            scanf  ("%c", &id);
            printf ("Turma criada com sucesso. ");
            turmas[i]->id=id; 
            return turmas[i]; 
        }
    }
    return(NULL);
}
void matricula_aluno(Turma* turma, int mat, char* nome){
    int i,j;
    char id;
    printf ("em qual turma voce deseja matricular \n");
    scanf ("%c", &id );
    for (j=0; j < MAX_TURMAS; j++){
        if (id==turma[j].id);
            
        for (i=0; i < MAX_VAGAS; i++){
            if (turma[j].alunos[i]!=NULL){
                printf("nao vagas \n");
            }
            else{
                printf ("Tem vagas \n");
                turma[j].alunos[i]->notas[0]=0;
                turma[j].alunos[i]->mat=mat;
                turma[j].alunos[i]->nome[81]=nome;
                printf("Matricula foi realizada com sucesso \n");
            } 
        } 
    }
}
void lanca_notas(Turma* turma){
    int i,j;
    for (i=0; i < turma->alunos; i++){
        printf("Aluno: %c ", turma->alunos[i]->nome);
        for (j=0; j < turma->alunos[i]->notas; j++){
            printf ("Digite a nota %d", j+1);
            scanf ("%d", &turma->alunos[i]->notas[j]);
        }
        turma->alunos[10]->media= turma->alunos[i]->notas[0] + turma->alunos[i]->notas[1]+ turma->alunos[i]->notas[2]/3;
    }
}
void imprime_alunos(Turma* turma){
    int i;
    for (i=0; i < turma->alunos; i++ ){
      printf("Aluno: %c ", turma->alunos[i]->nome);
      printf("Media: %f ", turma->alunos[i]->media);
    }
}
void imprime_turmas(Turma** turmas, int n){
    int i;
    for (i=0; i < turmas->alunos; i++){
        printf ("Digite o id da turma: %C", turmas->alunos->id);
    }     
}


int main(void) {
  
    if (turmas == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Inicializa o array de ponteiros de ponteiros turmas
    for (int i = 0; i < MAX_TURMAS; i++) {
        turmas[i] = (Turma*)malloc(sizeof(Turma));
        // Certifique-se de verificar se a alocação de memória foi bem-sucedida
        if (turmas[i] == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }
        // Inicializa o array de ponteiros de alunos para cada turma como NULL
        for (int j = 0; j < MAX_VAGAS; j++) {
            turmas[i]->alunos[j] = NULL;
        }
    }
    

    int loop=1;

    while (loop==1) {
    print_menu ();
    int opcao;
       switch (opcao)
       {
       case /* constant-expression */:
        /* code */
        break;
       
       default:
        break;
       }

    }
    
    // Libere a memória alocada
    for (int i = 0; i < MAX_TURMAS; i++) {
        free(turmas[i]);
    }
    free(turmas);

    return 0;
}
