#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario
{
    char nome[91];
    float salario;
    int id;
}Funcionario;

int main (void)
{
    FILE* saida;
    saida = fopen ("funcionaria.txt", "w");
    Funcionario funcionario;

    printf ("Informe os seguintes campos\n");
    printf ("ID:\n ");
    scanf ("%d", &funcionario.id);
    printf ("Nome :");
    scanf (" %[^\n]", funcionario.nome);
    printf ("Salario:");
    scanf ("%f", &funcionario.salario);

    fprintf (saida, "ID:%d\t Nome:%s\t Salario:%2.f",funcionario.id,funcionario.nome,funcionario.salario );
    fclose (saida);
    return 0;
}