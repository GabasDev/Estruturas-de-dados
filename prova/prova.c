#inlcude<stdio.h>
#include <stdlib.h>

typdef struct professor{
    char nome[81], disci;
    int horas;
}Professor;

void preenche (Professor *professor){
    printf ("insira seu nome");
    scanf (" %[^]c", &nome);
    printf ("insira sua disciplina")
    scanf (" %[^]c", &disci);
    printf ("insira seu regime de trabalho");
    scanf ("%f", &horas);
}

void imprime (Professor *professor){
    printf ("o nome %c", Professor->nome);
    printf ("disciplina %c", Professor->disci);
    printf ("regime de trabalho %d", Professor->horas);
}

void altera (Professor *professor){
    printf ("digite o novo regime de trabalho");
    scanf ("%d", &horas);
}
int main(){
    int opcao;
    Professor *professor==NULL;
    do {
        printf ("O QUE DESEJA FAZER?");
        printf ("1-PREENCHER");
        printf ("2-IMPRIMIR");
        printf ("3-ALTERAR");
        scanf ("%d", &opcao);
        switch (opcao){
            case 1:
            preenche(&professor);
            break;
            case 2: 
            imprime(*professor);
            break;
            case 3:
            altera(&professor);
            break;
        } 
    }while (opcao!=3);
    return 0; 

}