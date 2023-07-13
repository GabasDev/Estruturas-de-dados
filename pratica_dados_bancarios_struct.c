#include <stdio.h>

typedef struct pessoa {
    char nome[20];
    char senha[20];
    int agencia;
    int numeroconta;
    float saldo;
} Pessoa;

int main(void) {
    Pessoa var_pessoa[2];
    
    int indice;

    for (indice = 0; indice < 2; indice++) {
        printf("Digite o nome: ");
        scanf(" %[^\n]", var_pessoa[indice].nome);

        printf("Digite a senha: ");
        scanf(" %[^\n]", var_pessoa[indice].senha);

        printf("Digite a agencia: ");
        scanf("%d", &var_pessoa[indice].agencia);

        printf("Digite o numero da conta: ");
        scanf("%d", &var_pessoa[indice].numeroconta);

        printf("Digite o saldo: ");
        scanf("%f", &var_pessoa[indice].saldo);
    }

    // exibir os dados 
    for (indice = 0; indice < 2; indice++) {
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
