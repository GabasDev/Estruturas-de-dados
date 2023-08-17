//funcao de alocação com a soma de um  ovo vetor 
int * soma (int * vetor1, int * vetor2, int tamanho ){
    int * vetor_soma = (int *) malloc (tamanho*sizeof(int));
    if (vetor_soma==NULL){
        exit (1);
    }
    int contador;
    for (contador=0; contador < tamanho; contador++){
        vetor_soma[contador]=vetor1[contador]+vetor2[contador];
    }
    return (vetor_soma);
}