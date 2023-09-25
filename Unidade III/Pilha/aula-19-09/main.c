#include "pilha.c"

int main(){
    Pilha *p = pilha_cria();
    
    pilha_push(p , 10);
    pilha_push(p , 15);
    pilha_push(p , 20);
    pilha_push(p , 25);

    pilha_imprime(p);
    printf("Removendo o ultimo elemento da pilha...\n");
    pilha_pop(p);

    pilha_imprime(p);

    pilha_libera(p);

    return 0;
}