#include <stdio.h>

typedef struct pessoa {
    char nome[20];
    char senha[20];
    int agencia;
    int numeroconta;
    float saldo;
} Pessoa;

int main(void) {
    
    int quant_pessoas;
    int indice;

    printf("informe a quantidade de pessoas: ");
    scanf("%d", &quant_pessoas);

    Pessoa var_pessoa[quant_pessoas];

    for (indice = 0; indice < quant_pessoas; indice++) {
        printf("Digite o nome: ");
        scanf(" %[^\n]", var_pessoa[indice].nome);

        printf("Digite a senha: ");
        scanf(" %[^\n]", var_pessoa[indice].senha);

        printf("Digite a agencia: ");
        scanf("%d", &var_pessoa[indice].agencia);

        printf("Digite o numero da conta: ");
        scanf("%d", &var_pessoa[indice].numeroconta);

        printf("Digite o saldo: \n");
        scanf("%f", &var_pessoa[indice].saldo);

        printf ("----------------------------\n");
    }

        // exibir os dados 
    for (indice = 0; indice < quant_pessoas; indice++) {
        printf("Dados informados da pessoa %d:\n ", indice + 1);
        printf("Nome: %s\n", var_pessoa[indice].nome);
        printf("Senha: %s\n", var_pessoa[indice].senha);
        printf("Agencia: %d\n", var_pessoa[indice].agencia);
        printf("Numero da conta: %d\n", var_pessoa[indice].numeroconta);
        printf("Saldo: %.2f\n", var_pessoa[indice].saldo);
        printf("\n");
    }
    return 0;
}
