#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct fruta {
    char nome;
    char cor;
    char sabor;
    int quantidade;
}Fruta;

void cadastrar_fruta (){
printf ("cadastre sua fruta: ");

printf ("insira o nome da fruta: ");
scanf (" %[^\n]", fruta->nome);

printf ("insira o nome da cor: ");
scanf (" %[^\n]", fruta->cor);

printf ("insira o nome do sabor: ");
scanf (" %[^\n]", fruta->sabor);

printf ("insira a quantidade: ");
scanf (" %d", fruta->quantidade);
}

void listar_fruta (){
    printf ("a fruta cadastrada foi: %s ",fruta->nome );
    printf ("a cor cadastrada foi: %s ",fruta->cor );
    printf ("o sabor cadastrado foi: %s ",fruta->sabor );
    printf ("a quantidade: %d ", fruta->quantidade );
}

void buscar_fruta_por_nome (){

}