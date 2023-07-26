//escreva um programa que implementa uma struct Pessoa com  os campos nome, idade e genero. O genero deve ser armazenado como um enum com valores MASCULINO e FEMININO.
// O PROGRAMA DEVE LER  OS DADOS DE UMA PESSOA E IMPRIMIR OS DADOS DE UMA PESSOA
#include <stdio.h>
typedef enum genero{
    masculino, feminino
}Genero;

typedef struct pessoa
{
    char nome[20];
    int idade;
    Genero gen;
}Pessoa;

 

int main (void){
    Pessoa pessoa;
    printf ("digite um nome ");    
    scanf (" %[^\n]", pessoa.nome);
   
    printf ("Digite a idade \n ");
    scanf ("%d", &pessoa.idade);
    
    printf ("Identifique seu genero 0 para masculino e 1 para feminino ");
    scanf ("%d", &pessoa.gen);
    
    printf (" nome da pessoa : %s\n ", pessoa.nome);

    printf (" idade da pessoa : %d\n ", pessoa.idade);

    if (pessoa.gen==1){
        printf ("o genero da pessoa feminino ");
    }else{
        printf ("o genero da pessoa MASCULINO ");
    }
return 0;
}