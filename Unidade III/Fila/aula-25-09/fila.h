#ifndef FILA_H
#define FILA_H
#include "fila.h"

typedef struct _fila{
    int ini, fim;
    int qtde;
    int MAX_SIZE;
    int *val;
}Fila;

Fila *q;

Fila *CriaFila(int MAX_SIZE);

void Destruir_fila (Fila **Q);

int FilaVazia(Fila *Q);

int FilaCheia(Fila *Q);

int InsereFila(Fila * Q, int elem);

int ConsultaFila(Fila *Q, int *elem);

void imprimir_Fila (Fila *Q);

#endif //FILA_H