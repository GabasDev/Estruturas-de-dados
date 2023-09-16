#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct frutas
{
    double preco;
    char nome[10];
    struct frutas *proxima;
} Frutas;

Frutas *insere(Frutas *fruta, char *nome)
{
    Frutas *nova_fruta = (Frutas *)malloc(sizeof(Frutas));
    strcpy(nova_fruta->nome, nome);
    nova_fruta->proxima = fruta;
    return nova_fruta;
}

int main()
{
    Frutas *listas = NULL;
    listas = insere(listas, "maca");
    listas = insere(listas, "uva");
    listas = insere(listas, "abacate");
    Frutas *p;
    for (p= listas; p!=NULL; p= p->proxima){
        printf ("%s\tR$ %2.f\n", p->nome,p->preco);
    }
    free(listas);
    return 0;
}
