#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matriz.h"


struct matriz {
    int lin;
    int col;
    float** v;
};


Matriz* mat_cria(int i, int j)
{
    Matriz *mat = (Matriz* )malloc(sizeof(Matriz));
    if (mat == NULL){
        printf ("ERRO\n");
        exit (1);
    }
    mat->lin = i;
    mat->col = j;
    mat-> v = (float **)malloc(mat->col * sizeof(float *));
    int x;
    if (mat->v ==NULL){
        printf ("Erro\n");
        exit (1);
    }
    for (x = 0; x < mat ->col; x++){
        mat->v[x] = (float *)malloc(sizeof(float));
        if (mat->v[x]== NULL){
            printf ("Erro\n");
            exit (1);
        }
    }
    printf ("Matriz criado com sucesso \n");
    return mat;
}
