#include "pilha.h"
#include "lista.c"

struct pilha
{
    Lista *primeiro;
};

Pilha *pilha_cria(void)
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->primeiro = NULL;
    return p;
}

void pilha_push(Pilha *p, float v)
{
    Lista *n = (Lista *)malloc(sizeof(Lista));
    n->info = v;
    n->prox = p->primeiro;
    p->primeiro = n;
}

float pilha_pop(Pilha *p)
{
    Lista *t;
    float v;
    if (pilha_vazia(p))
    {
        printf("Pilha Vazia.\n");
        exit(1);
    }

    t = p->primeiro;
    v = t->info;
    p->primeiro = t->prox;
    free(t);
    return v;
}

int pilha_vazia(Pilha *p)
{
    return (p->primeiro == NULL);
}

void pilha_libera(Pilha *p)
{
    Pilha *t = p;
    lst_libera(t->primeiro);

    free(t);
}

void pilha_imprime(Pilha *p)
{
    lst_imprime(p->primeiro);
}