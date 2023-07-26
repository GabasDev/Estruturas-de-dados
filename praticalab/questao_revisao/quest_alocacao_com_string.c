#include <string.h>
char * soma (char * vetor1, char * vetor2, int tamanho ){
    char * vetor_soma = (char *) malloc (tamanho*sizeof(char));
    if (vetor_soma==NULL){
        exit (1);
    }
    int contador;
    for (contador=0; contador < tamanho; contador++){
        vetor_soma[contador]=vetor1[contador]+vetor2[contador];
    }
    return (vetor_soma);
}