#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char funcional[10];
    char nome[50];
    char departamento;
    float salario;
} Funcionario;

// funcao para copiar os dados do arquivo para a estrutura funcionario
void copia_dados(FILE *p, int n, Funcionario **pessoal)
{
    // aloca memoria para o vetor funcionarios
    *pessoal = (Funcionario *)malloc(n * sizeof(Funcionario));
    // le os dados do arquivo e preenche a estrutura funcionario
    for (int i = 0; i < n; i++)
    {
        fscanf(p, "%s %s %c %f", (*pessoal)[i].funcional, (*pessoal)[i].nome, &(*pessoal)[i].departamento, &(*pessoal)[i].salario);
    }
}
// funcao para imprimir a folha de pagamento
void imprime_folha_pagamento(int n, Funcionario **pessoal, char depto)
{
    printf("FOLHA DE PAGAMENTO  DEPTO %c\n", depto);
    printf("%-10s%-15s%-7s%-10s\n", "FUNCIONAL", "NOME", "DEPTO", "SALARIO");
    // variavel que vai armazenar o total gasto com o departamento
    float totalgasto = 0.0;
    // percorre a lista de funcionarios e imprime os dados de cada
    for (int i = 0; i < n; i++)
    {
        if ((*pessoal)[i].departamento == depto)
        {
            printf("%-10s%-15s%-7c%-10.2f\n", (*pessoal)[i].funcional, (*pessoal)[i].nome, (*pessoal)[i].departamento, (*pessoal)[i].salario);
            // calcula o total
            totalgasto += (*pessoal)[i].salario;
        }
    }
    printf("\nVALOR TOTAL %c: R$ %.2f\n", depto, totalgasto);
}

int main()
{
    // abre o aquivo com os dados dos funcionarios
    FILE *arquivo = fopen("entradatarefa.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    // lê o numero de funcionarios
    int num_func;
    fscanf(arquivo, "%d", &num_func);

    Funcionario *pessoal;
    copia_dados(arquivo, num_func, &pessoal);

    fclose(arquivo);

    imprime_folha_pagamento(num_func, &pessoal, 'A');
    imprime_folha_pagamento(num_func, &pessoal, 'B');
    imprime_folha_pagamento(num_func, &pessoal, 'C');

    free(pessoal);

    return 0;
}