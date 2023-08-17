#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "conta.h"

struct contabancaria
{
    char titular[81];
    int numero;
    double saldo;
};

ContaBancaria* criaconta(){
    ContaBancaria *conta = (ContaBancaria *)malloc(sizeof(ContaBancaria));
    if (conta ==NULL){
        printf ("ERRO AO ALOCAR MEMORIA");
        exit (1);
    }
}

void deposita (ContaBancaria *conta, double novosaldo){
    conta->saldo += novosaldo;
    printf ("operação de deposito realizada com sucesso");
}
void saca(ContaBancaria *conta, double saque){
    double saldoatual = conta->saldo;
    if ((saldoatual - saque)< 0){
        printf ("Saldo indidsponivel!\n");
        return;
    }else{
        conta->saldo = saldoatual -saque;
        printf ("saque realizado!\n");
    }
}

void transfere (ContaBancaria *conta1, ContaBancaria *conta2, double transferir){
double saldoconta1 = conta1->saldo;
double saldoconta2 = conta2->saldo;
    if (saldoconta1 - transferir < 0){
        printf ("Saldo indisponivel para realizar operação de transferencia!\n");
        return;
    }
    else{
        saldoconta1 -= transferir;
        saldoconta2 += transferir;

        conta1->saldo=saldoconta1;
        conta2->saldo=saldoconta2;
        printf ("operacao realizada com sucesso");
    }
}

void preencheconta (ContaBancaria *usuario){
    printf ("informe os seguintes dados de usuario: \n");
    printf ("nome:");
    scanf (" %[^\n]", usuario->titular);
    printf ("\n");

    printf ("numero da conta:");
    scanf ("%d", &usuario->numero);
    printf ("\n");

    printf ("saldo:");
    scanf ("%lf", usuario->saldo);
    printf ("\n");
}
void imprimeconta (ContaBancaria *usuario){
    printf ("Dados do usuario: \n");
    printf ("nome: %s \n", usuario->titular);
    printf ("Numero da conta: %d", usuario->numero);
    printf ("saldo: %.2f R$\n\n", usuario->saldo);
}

