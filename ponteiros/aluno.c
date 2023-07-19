#include <stdio.h>
#include <stdlib.h>
#define MAX [100]
//inicio da struct declaracao de variaveis 
struct aluno{
    int mat;
    char nome[81];
    char end[121];
    char tel[21];
};
typedef struct aluno Aluno;
 
//funcao para inicializar
void inicializa(int n, Aluno ** tab){
    int i;
    for (i = 0; i < n; i++)
        tab[i] = NULL;
}
void preenche(int n, Aluno ** tab, int i){
    if (i < 0 || i >= n){
        printf("indice fora do limite do vetor. \n");
        exit(1); //* aborta
    }

    if (tab[i] == NULL){
        tab[i] = (Aluno *)malloc(sizeof(Aluno));
        
    }
    printf("Entre com a matricula: ");
    scanf("%d", &tab[i]->mat);
    printf("Entre com nome: ");
    scanf(" %80[^\n]", tab[i]->nome);
    printf("Entre com endereco: ");
    scanf(" %120[^\n]", tab[i]->end);
    printf("Entre com o telefone: ");
    scanf(" %20[^\n]", tab[i]->tel);
    
}
void retira (int n, Aluno ** tab, int i){
    if (i < 0 || i >= n){
        printf("indice fora do limite do vetor. \n ");
        exit(1); // aborta o programa
    }
    if (tab[i] != NULL){
        free(tab[i]);
        tab[i] = NULL; //indica que na posicao nao mais existe dado
    }
}    
void imprime(int n, Aluno **tab, int i){
    if (i < 0 || i >= n){
        printf("indice fora do limite do vetor. \n ");
        exit(1);
    }
    if (tab[i] != NULL){
        printf("Matricula: %d\n", tab[i]->mat);
        printf("nome: %s\n", tab[i]->nome);
        printf("endereco: %s\n", tab[i]->end);
        printf("telefone: %s\n", tab[i]->tel);
    }
}
    //funcao para imprimir tudo
void imprime_tudo(int n, Aluno **tab){
    int i;
    for (i = 0; i < n; i++){
        imprime(n, tab, i);
    }
}
    //colocar todas as funcoes feitas na main
int main (void) {
    Aluno* tab[10];
    inicializa(10, tab);
    preenche(10, tab, 0);
    preenche(10, tab, 1);
    preenche(10, tab, 2);
    imprime_tudo(10, tab);
    retira(10, tab, 0);
    retira(10, tab, 1);
    retira(10, tab, 2);
    return 0;

}
