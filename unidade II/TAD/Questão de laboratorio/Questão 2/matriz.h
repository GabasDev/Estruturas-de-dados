#include <stdio.h>
#include <string.h>

typedef struct matriz Matriz;

Matriz* mat_cria(int i, int j);

void mat_libera(Matriz* mat);

float mat_acessa(Matriz* mat, int i, int j, float v);

void mat_atribui(Matriz* mat);

int mat_colunas(Matriz* mat);

