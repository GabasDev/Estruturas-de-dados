#include "calc.h"
#include"pilha.h"

struct calc
{
    char f [21];
    Pilha* p;
}Calc;

Calc* calc_cria(char* formato){
        calc* c = (Calc*) malloc(sizeof(calc));
        strcpy(c->f, formato);
        c->p= pilha_cria();
        return c;
    }

void calc_operando(Calc* c , float v){
    pilha_push(c->p,v);
    printf (c->f,v);
}

void calc_operador(Calc* c, char op){
    
}

