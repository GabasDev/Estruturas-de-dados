#include <stdlib.h>
#include <string.h>

char* concatenarStrings(const char* string1, const char* string2) {
    // Calcula o tamanho necessario para a nova string
    size_t tamanho_total = strlen(string1) + strlen(string2);
    // Aloca memoria para a nova string
    char* resultado = (char*)malloc((tamanho_total + 1) * sizeof(char)); // +1 para o caractere nulo de terminacao
    if (resultado == NULL) {
        exit(1); // Tratamento de erro para falha na alocação de memória
    }
    // Copia a primeira string para o resultado
    strcpy(resultado, string1);
    // Concatena a segunda string ao final do resultado
    strcat(resultado, string2);
    return resultado;
}