#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite o numero de pessoas entrevistadas: ");
    scanf("%d", &n);

    char *sexo = (char *)malloc(n * sizeof(char));
    char *opiniao = (char *)malloc(n * sizeof(char));

    for (int i = 0; i < n; i++)
    {
        printf("Resposta %d:\n", i+1);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[i]);

        printf("Opiniao (gostou/nao gostou): ");
        scanf(" %c", &opiniao[i]);

        printf("\n");
    }

    int totalFeminino = 0;
    int totalMasculino = 0;
    int gostaramFeminino = 0;
    int naoGostaramMasculino = 0;

    // contagem das respostas
    for (int i = 0; i < n; i++)
    {
        if (sexo[i] == 'F')
        {
            totalFeminino++;
            if (opiniao[i] == 'G')
                gostaramFeminino++;
        }
        else if (sexo[i] == 'M')
        {
            totalMasculino++;
            if (opiniao[i] == 'N')
                naoGostaramMasculino++;
        }
    }

    // calculo das porcentagens
    float porcentGostaramFeminino = gostaramFeminino / totalFeminino * 100;
    float porcentNaogostaramMasculino = naoGostaramMasculino / totalMasculino * 100;

    printf("Porcentagem de mulheres que gostaram do produto: %.2f\n", porcentGostaramFeminino);
    printf("Porcentagem de homens que nao gostaram do produto: %.2f\n", porcentNaogostaramMasculino);

    // liberacao da memoria
    free(sexo);
    free(opiniao);

    return 0;
}
