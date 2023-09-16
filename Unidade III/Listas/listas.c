#include<stdio.h>
#include<stdlib.h>

struct retangulo {
    float b;
    float h;

};
typedef struct retangulo  Retangulo;

struct listas
{
    Retangulo info;
    struct lista*prox;
};



static Lista* aloca(float b, float h){
    Lista* p = (Lista*) malloc(sizeof(lista));
    p->info.b = b;
    p->info.h = h;
    p->prox =NULL;
    return p;
}


