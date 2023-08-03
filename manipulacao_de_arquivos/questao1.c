/*) Escreva um programa em C que leia de um arquivo as notas dos alunos de uma
turma e escreva em outro arquivo o nome e a média de cada aluno, bem como a sua situação
(aprovado (média >= 7.0) ou reprovado). Tanto no arquivo de entrada quanto no de saída,
considere que os dados em cada linha estão separados por um caractere de tabulação ‘\t’. Para a
execução do programa com o arquivo de entrada “entrada_q3.txt”, deverá ser criado o arquivo
de saída “saída_q3.txt”, como ilustrado a seguir*/
#include<stdio.h>
#include<stdlib.h>

int main (void){
    int c;
    FILE *entrada;
    FILE *saida;
    float nota1, nota2, nota3;
    entrada = fopen("entrada.txt", "rt");
    if (entrada==NULL){
        printf ("Erro ao abrir o arquivo de entrada");
        exit (1);
    }
    saida - fopen("saida.txt", "wt");
    if (saida == NULL){
        printf ("Erro ao abrir o arquivo de saida");
        exit (1);
    }
    while ((c = fgetc(entrada)) != EOF){
        sscanf ((entrada,"%s\t%f\t%f\t%f", nome,&nota1, &nota2,&nota3));
    }
    
    fclose (entrada);
    fclose (saida);
    return 0;

}