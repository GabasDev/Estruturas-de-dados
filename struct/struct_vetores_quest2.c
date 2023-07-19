#include<stdio.h>
#include<stdlib.h>

typedef struct pessoa {
    char nome[20];
    int numero_do_documento;
    int idade;
} Pessoa;

//  funcao que receba como parametro o endereco de uma estrutura do tipo Funcionarioe imprima os valores dos seus campos.

void registrar_pessoa(Pessoa *pessoa){
    printf ("digite seu nome: \n");
    scanf (" %[^\n]", pessoa->nome);

    printf ("digite o numero do documento: \n");
    scanf ("%d", &pessoa->numero_do_documento);

    printf ("digite sua idade: \n");
    scanf ("%d", &pessoa->idade);

}
// uma funcao que receba como parametro o endereco de uma estrutura tipo do Funcionario e imprima os valores dos seus campos.
void imprimir_valores( Pessoa *pessoa){
    printf ("Nome : %s\n",pessoa->nome );
    printf ("numero do identificador : %d\n",pessoa->numero_do_documento );
    printf ("Sua idade : %d\n",pessoa->idade );
}
//   funcao para realizar uma alteracao no salario de uma estrutura do tipo Funcionario.
void alteracao_valores (Pessoa *pessoa){
    int nova_idade;
    printf ("insira o novo salario \n");
    scanf ("%d", &nova_idade);
    pessoa->idade = nova_idade;
}
// Escreva uma funcao que receba como parametro um vetor de estruturas do tipo Funcionario e imprima o cargo e salario do Funcionario com maior salario e o cargo e salario do funcionario com o menor salario.
void mais_velha_idade (Pessoa *pessoa, int tamanho){
    Pessoa *maiorIdade=&pessoa[0];
    Pessoa *menorIdade=&pessoa[0]; 
 int i;
    for (i = 1; i < tamanho; i++ ){
        if (pessoa[i].idade > menorIdade->idade){
            maiorIdade = &pessoa[i];
        }
        if (pessoa[i].idade < maiorIdade->idade){
            menorIdade = &pessoa[i];
        }
    }
    printf ("Pessoa de maior idade: %d %s \n", maiorIdade->idade, maiorIdade->nome );
    printf ("Pessoa de menor idade: %d %s \n", menorIdade->idade, menorIdade->nome );
}


int main(void) {
    Pessoa dados_pessoa[2];
    int i;
    for (i=0; i < 2; i++){
        registrar_pessoa(&dados_pessoa[i]);
        printf ("\n-------------------------\n");
    }
       alteracao_valores(&dados_pessoa[0]);
       
    for (i=0; i < 2; i++){
        imprimir_valores(&dados_pessoa[i]);
        printf ("\n-------------------------\n");
    }
    mais_velha_idade(dados_pessoa,2);
 
    return 0;
}    