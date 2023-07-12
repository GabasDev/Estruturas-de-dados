#include<stdio.h>
typedef struct pessoa{
    char nome[20];
    int idade;
    int RG;
    float altura;
}Pessoa;

    int main (void){
    


    Pessoa var_pessoa[2];
    
    int indice;

    for (indice=0; indice <2; indice++){

    

    printf ("Digite o nome: ");
    scanf (" %[^\n]", var_pessoa[indice].nome);

    printf ("Digite idade: \n");
    scanf ("%d", &var_pessoa[indice].idade);

    printf ("Digite o RG: \n");
    scanf ("%d", &var_pessoa[indice].RG);

    printf ("Digite a altura: \n");
    scanf ("%f", &var_pessoa[indice].altura);

    //printf ("os dados informados: \n Nome: %s \t Idade: %d \t  RG: %d \t altura: %.2f ", var_pessoa.nome, var_pessoa.idade, var_pessoa.RG, var_pessoa.altura);

    }   


    

    
    


return 0;
}