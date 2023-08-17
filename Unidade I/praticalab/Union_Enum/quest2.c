#include<stdio.h>
#include <string.h>

typedef union produto
{
    char ALIMENTO[81], BEBIDA[81], ELETRONICO[81];
}Produto;

typedef struct tipos
{
    char tipo[2];
    float preco;
}Tipos;

int main (void){

    Tipos tipos;
    Produto produto;

    printf ("----BEM VINDO----\n");
    printf ("Digite o tipo: (A)ALIMENTOS (B) PARA BEBIDA E (C) PARA ELETRONICO \n");
    scanf (" %[^\n]", tipos.tipo);
    printf ("Digite o preco do produto\n");
    scanf ("%f", &tipos.preco);
    if (strcmp(tipos.tipo, "a")==0){
        printf ("Digite o nome do alimento \n");
        scanf (" %[^\n]s", produto.ALIMENTO);
        printf ("O NOME DO PRODUTO: %s O TIPO: ALIMENTO O PRECO %.2f \n", produto.ALIMENTO, tipos.preco );
    }if (strcmp(tipos.tipo,"b")==0){
        printf ("Digite o nome da bebida \n");
        scanf (" %[^\n]s", produto.BEBIDA);
        printf ("O NOME DO PRODUTO: %s O TIPO: BEBIDA O PRECO %.2f \n", produto.BEBIDA,  tipos.preco );
    }if (strcmp(tipos.tipo,"c")==0){
        printf ("Digite o nome do eletronico \n");
        scanf (" %[^\n]s", produto.ELETRONICO);
        printf ("O NOME DO PRODUTO: %s O TIPO: ELETRONICO O PRECO %.2f \n", produto.ELETRONICO, tipos.preco );
    }return 0;
}


