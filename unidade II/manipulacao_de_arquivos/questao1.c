/*) Escreva um programa em C que leia de um arquivo as notas dos alunos de uma
turma e escreva em outro arquivo o nome e a média de cada aluno, bem como a sua situação
(aprovado (média >= 7.0) ou reprovado). Tanto no arquivo de entrada quanto no de saída,
considere que os dados em cada linha estão separados por um caractere de tabulação ‘\t’. Para a
execução do programa com o arquivo de entrada “entrada_q3.txt”, deverá ser criado o arquivo
de saída “saída_q3.txt”, como ilustrado a seguir*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char nome[50];
    FILE *entrada;
    FILE *saida;
    float nota1, nota2, nota3, media;

    entrada = fopen("entrada_q3.txt", "r"); // o nome do arquivo de entrada
    if (entrada == NULL)
    {
        printf("Erro ao abrir o arquivo de entrada\n");
        exit(1);
    }

    saida = fopen("saida_q3.txt", "w"); //o nome do arquivo de saída
    if (saida == NULL)
    {
        printf("Erro ao abrir o arquivo de saida\n");
        exit(1);
    }

    while (fscanf(entrada, "%[^\t]%f\t%f\t%f", nome, &nota1, &nota2, &nota3) == 4) // Verifica se foram lidos 4 valores
    {
        media = (nota1 + nota2 + nota3) / 3;
        fprintf(saida, "%s\t%.2f\t", nome, media); // Escreve nome e media no arquivo de saída

        if (media >= 7.0)
        {
            fprintf(saida, "Aprovado\n"); // Escreve "Aprovado" se a media for maior ou igual a 7.0
        }
        else
        {
            fprintf(saida, "Reprovado\n"); // Caso contrário, escreve "Reprovado"
        }
    }

    fclose(entrada);
    fclose(saida);
    return 0;
}