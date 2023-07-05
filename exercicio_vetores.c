#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo, int pessoas,  i, opniao, M, F;
    printf("qual a quantidade de pessoas");
    scanf("%i", &pessoas);
    printf("Qual o seu sexo? M para masculino e F para feminino");
    scanf("%c", &sexo);
    printf("sua opiniao sobre?gostou/nao gostou");
    scanf("% c", &opniao);
    void *vetor = (char *)malloc(sexo * sezeof(char));
    if (vetor)
    {
        printf("memoria alocada com sucesso! \n");
        printf("vetor: %d\n", *vetor);
        *vetor = 10;
        printf("vetor: %d\n", *vetor);
    }
    else
    {
        printf("erro de memoria");
    }

    for (i = 0; i < pessoas; i++)

        if sexo == (M)
        {
            vetor = i++;
        }
    if sexo == (F)
    {
        vetor = i++;
    }
    void *vetor2 = (char *)malloc(opniao * sezeof(char));
    if (vetor2)
    {
        printf("memoria alocada com sucesso! \n");
        printf("vetor2: %d\n", *vetor2);
        *vetor = 10;
        printf("vetor2: %d\n", *vetor2);
    }
    else
    {
        printf("erro de memoria");
    }
    for (i = 0; i == pessoas; i++)

        if opniao = (naogostei)
        {
            vetor2 = i++;
        }
    if opniao == (gostei)
    {
        vetor2 = i++;
    }
    
}
