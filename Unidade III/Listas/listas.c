#include<stdio.h>
#include<stdlib.h>

struct retangulo {
    float b;
    float h;
};

typedef struct retangulo Retangulo;

struct listas {
    Retangulo info;
    struct listas* prox;
};

typedef struct listas Lista; 

static Lista* aloca(float b, float h) {
    Lista* p = (Lista*)malloc(sizeof(Lista)); 
    p->info.b = b;
    p->info.h = h;
    p->prox = NULL;
    return p;
}

int main() {
   
    Lista* minhaLista = aloca(5.0, 10.0);
    printf("Base: %.2f, Altura: %.2f\n", minhaLista->info.b, minhaLista->info.h);

    
    free(minhaLista);

    return 0;
}

