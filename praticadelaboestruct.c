
#include<stdio.h>

struct aluno{
    char nome [20];
    int idade;
    int matricula;
};

int main (void){
    // var_aluno é coisada pelo o .


    struct aluno var_aluno;

    printf ("Digite o nome: ");
    scanf ("%[^\n]", var_aluno.nome);

    printf ("Digite idade: \n");
    scanf ("%d", &var_aluno.idade);

    printf ("Digite matricula: \n");
    scanf ("%d", &var_aluno.matricula);

    printf ("os dados informados: \n Nome: %s \t Idade: %d \t matricula: %d  ", var_aluno.nome, var_aluno.idade, var_aluno.matricula);




    

    
    


return 0;
}