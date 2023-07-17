#include<stdio.h>
//struct que armazena os dados do funcionario
typedef struct funcionario {
    char nome[20];
    char senha[20];
    int salario;
    int identificador;
    char cargo[20];
} Funcionario;

//  funcao que receba como parametro o endereco de uma estrutura do tipo Funcionarioe imprima os valores dos seus campos.

void registrar_funcionario(Funcionario *funcionario){
    printf ("digite seu nome: \n");
    scanf ("%s", funcionario->nome);

    printf ("digite sua senha: \n");
    scanf ("%s", funcionario->senha);

    printf ("digite seu salario: \n");
    scanf ("%d", &funcionario->salario);

    printf ("digite seu indentificador: \n ");
    scanf ("%d", &funcionario->identificador);

    printf ("digite seu cargo: \n");
    scanf ("%s", funcionario->cargo);

}
// uma funcao que receba como parametro o endereco de uma estrutura tipo do Funcionario e imprima os valores dos seus campos.
void imprimir_valores( Funcionario *funcionario){
    printf ("Nome : %s\n",funcionario->nome );
    printf ("Senha : %s\n",funcionario->senha );
    printf ("Salario : %d\n",funcionario->salario );
    printf ("Identificador : %d\n",funcionario->identificador );
    printf ("Cargo : %s\n",funcionario->cargo );
}
//   funcao para realizar uma alteracao no salario de uma estrutura do tipo Funcionario.
void alteracao_valores (Funcionario * funcionario){
    int novo_salario;
    printf ("insira o novo salario \n");
    scanf ("%d", &novo_salario);
    funcionario->salario = novo_salario;
}
// Escreva uma funcao que receba como parametro um vetor de estruturas do tipo Funcionario e imprima o cargo e salario do Funcionario com maior salario e o cargo e salario do funcionario com o menor salario.
void maior_menor_salario (Funcionario *funcionarios, int tamanho){
    Funcionario *maiorSalario=&funcionarios[0];
    Funcionario *menorSalario=&funcionarios[0]; 
 int i;
    for (i = 1; i < tamanho; i++ ){
        if (funcionarios[i].salario > menorSalario->salario){
            maiorSalario = &funcionarios[i];
        }
        if (funcionarios[i].salario < maiorSalario->salario){
            menorSalario = &funcionarios[i];
        }
    }
    printf ("Funcionario de maior salario: %d %s \n", maiorSalario->salario, maiorSalario->cargo );
    printf ("Funcionario de menor salario: %d %s \n", menorSalario->salario, menorSalario->cargo );
}


int main(void) {
    Funcionario dados_funcionario[2];
    int i;
    for (i=0; i < 2; i++){
        registrar_funcionario(&dados_funcionario[i]);
        printf ("\n-------------------------\n");
    }
       alteracao_valores(&dados_funcionario[0]);
       
    for (i=0; i < 2; i++){
        imprimir_valores(&dados_funcionario[i]);
        printf ("\n-------------------------\n");
    }
    maior_menor_salario(dados_funcionario,2);
 
    return 0;
}    