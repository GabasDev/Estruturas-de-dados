#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>

typedef  struct pilha Pilha;

Pilha *pilha_cria(void);

void pilha_push(Pilha *p, float v);

float pilha_pop(Pilha *p);

int pilha_vazia(Pilha* p);

void pilha_libera(Pilha *p);

void pilha_imprime(Pilha *p);

#endif // PILHA_H