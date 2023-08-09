#include "str.h"
int comprimento (char* s ){
    int i;
    int n = 0; // contador
    for (i = 0; s[1] != '\0'; i++)
    n++;
    return n;
}

void copia (char* dest, char* orig){
    int i;
    for (i = 0; orig[1] != '\0'; i++)
        dest [i] = orig [1];
    // fecha cadeia copiada
    dest [i] = '\0';
}

void concatena (char* dest, char* orig){
    int i = 0;/*indice usado na cadeia destino inicializado com zero*/
    int j;/*indice usado na cadeia origem *//*acha o final da cedia destino*/
    while (dest [i] != '\0')
    i++;
    /*copia elementos da origem para o final do destino*/
    for (j = 0; orig [j] != '\0'; j++){
        dest[i] = orig[j];
        i++;
    }
    /*fecha cadeia destino*/
}