#include<stdio.h>
#include<stdlib.h>

int main (void){
    FILE * arquivo = fopen("entrada.txt","wt");//abrir
    if (arquivo==NULL){
        printf ("nao foi possivel acessar o arquivo\n");
        exit (1);
    }
    else{ printf("Arquivo criado");}
    if (!fclose (arquivo))// fechar arquivo aberto
    {
        printf ("arquivo fechado com sucesso");
    };
    return 0;
}