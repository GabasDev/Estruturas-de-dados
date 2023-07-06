#include <stdio.h>
void incrementa(int * ponteiro){
    /*
    int * ponteiro: ponteiro para variavél do tipo int
    realiza o incremento do conteudo do ponteiro
    */
    (*ponteiro)++;
}
int main(void){
    int var = 2;
    printf("Antes da chamada da função: %d\n", var);
    
    incrementa(&var);
    
    printf("Depois da chamada da função: %d\n", var);

    return 0;
}
