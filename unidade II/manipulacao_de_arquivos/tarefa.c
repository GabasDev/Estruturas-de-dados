#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char funcional[10];
    char nome[50];
    char departamento;
    float salario;
} Funcionario;

// Funcao para copiar os dados do arquivo para a estrutura Funcionario
void copia_dados(FILE *p, int n, Funcionario **pessoal) {
    // Aloca memória para o vetor de funcionarios
    *pessoal = (Funcionario *)malloc(n * sizeof(Funcionario));
    
    // Le os dados do arquivo e preenche a estrutura Funcionario
    for (int i = 0; i < n; i++) {
        fscanf(p, "%s %s %c %f", (*pessoal)[i].funcional, (*pessoal)[i].nome, &(*pessoal)[i].departamento, &(*pessoal)[i].salario);
    }
}

// Funcao para imprimir a folha de pagamento
void imprime_folha_pagamento(int n, Funcionario **pessoal, char depto, FILE *saida) {
    fprintf(saida, "FOLHA DE PAGAMENTO  DEPTO %c\n", depto);
    fprintf(saida, "%-10s%-15s%-7s%-10s\n", "FUNCIONAL", "NOME", "DEPTO", "SALARIO");
    
    // Variavel que vai armazenar o total gasto com o departamento
    float totalGasto = 0.0;
    
    // Percorre a lista de funcionarios e imprime os dados de cada um
    for (int i = 0; i < n; i++) {
        if ((*pessoal)[i].departamento == depto) {
            fprintf(saida, "%-10s%-15s%-7c%-10.2f\n", (*pessoal)[i].funcional, (*pessoal)[i].nome, (*pessoal)[i].departamento, (*pessoal)[i].salario);
            // Calcula o total
            totalGasto += (*pessoal)[i].salario;
        }
    }
    
    fprintf(saida, "\nVALOR TOTAL %c: R$ %.2f\n\n", depto, totalGasto);
}

int main() {
    // Abre o arquivo com os dados dos funcionarios
    FILE *arquivo = fopen("entradatarefa.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    // Le o numero de funcionarios 
    int num_func;
    fscanf(arquivo, "%d", &num_func);

    Funcionario *pessoal;
    copia_dados(arquivo, num_func, &pessoal);

    fclose(arquivo);

    // Abre o arquivo de saida para escrita
    FILE *saida = fopen("saidatarefa.txt", "w");
    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saída\n");
        free(pessoal);
        return 1;
    }

    // Imprime a folha de pagamento nos departamentos A, B e C no arquivo de saida
    imprime_folha_pagamento(num_func, &pessoal, 'A', saida);
    imprime_folha_pagamento(num_func, &pessoal, 'B', saida);
    imprime_folha_pagamento(num_func, &pessoal, 'C', saida);

    // Fecha o arquivo de saida
    fclose(saida);
    
    free(pessoal);

    return 0;
}