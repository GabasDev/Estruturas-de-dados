#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _fila{
    int ini, fim;
    int qtde;
    int MAX_SIZE;
    int *val;
}Fila;


Fila *CriaFila(int MAX_SIZE){
    Fila *Q= (Fila*) calloc(1, sizeof(Fila));
        Q->val = (int*)calloc(MAX_SIZE, sizeof(int));
        Q->MAX_SIZE = MAX_SIZE;
        Q->qtde = 0;
        Q->ini = Q->fim = 0;
        return Q;
}

void Destruir_fila (Fila **Q){
    Fila *Qaux = *Q;
    free(Qaux->val);
    free(Qaux);
    *Q = NULL;
}

int FilaVazia(Fila *Q){
    return(Q->qtde == 0);
}

int FilaCheia(Fila *Q){
    return (Q->qtde == Q->MAX_SIZE);
}

int InsereFila(Fila * Q, int elem){
    if (FilaCheia(Q)){
        printf("Warning: Fila \n");
        return 0;
    }
    else{
        Q->val[Q->fim]= elem;
        Q->fim = (Q->fim+1) % Q->MAX_SIZE;
        Q->qtde++;
        return 1;
    }
}

int RemoveFila(Fila *Q){
    if (FilaVazia(Q)){
        printf("Warning: Fila esta vazia \n");
        return 0;
    }
    else{
        Q->ini = (Q->ini +1) % Q->MAX_SIZE;
        Q->qtde--;
        return 1;
    }
}

int ConsultaFila(Fila *Q, int *elem){
    if (FilaVazia(Q)){
        printf ("Warning: Fila esta vazia\n");
        return 0;
    }
    else {
        *elem = Q->val[Q->ini];
        return 1;
    }
}
void imprimir_Fila (Fila *Q){
    if (FilaVazia(Q)){
        printf ("A fila está cheia");
        return;
    }
    int i;
    for (i = 0; i<Q->qtde; i++){
        printf("%d\n", Q->val[i]);   
    }
}