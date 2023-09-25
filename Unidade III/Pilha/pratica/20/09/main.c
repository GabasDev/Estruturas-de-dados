#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main(void){

Pilha * p = pilha_cria();
pilha_push(p, 5.0);
pilha_push(p, 2.0);

Pilha * q = pilha_cria();
pilha_push(q, 3.0);
pilha_push(q, 7.0);

concatena(p,q);
imprime(p);
Pilha * c = copia_pilha(p);
imprime(c);

return 0;
}