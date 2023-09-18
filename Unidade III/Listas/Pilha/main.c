#include"pilha.h"

int main (void){
   Pilha* p = pilha_cria(); 
    pilha_push(p, 1.0);
    pilha_push(p, 2.0);
    pilha_push(p, 3.0);

    printf("Valores na pilha:\n");
    pilha_imprime(p);
    pilha_libera(p);

    return 0;
}
    
