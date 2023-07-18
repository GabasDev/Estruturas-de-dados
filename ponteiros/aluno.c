#include <stdio.h>
#define MAX 100
#include <stdlib.h>

typedef struct aluno{
    int mat;
    char nome[81];
    char end[121];
    char tel[21];
} Aluno;

void inicializa(int n, Aluno **tab)
{
    int i;
    for (i = 0; i < 0; i++)
        tab[i] = NULL;
}
void preenche(int n, Aluno **tab, int i)
{
    if (i < 0 || i >= n)
    {
        printf("indice fora do limite do vetor. \n");
        exit(1); //* aborta
    }
    if (tab[i] == NULL)
    {
        tab[i] = (Aluno *)malloc(sizeof(Aluno));
        printf(" entre com a matricula : ");
        scanf("%d", &tab[i]->mat);
        printf(" entre com nome : ");
        scanf("%c", &tab[i]->nome);
        printf(" entre com endereço : ");
        scanf("%c", &tab[i]->end);
        printf(" entre com o telefone : ");
        scanf("%c", &tab[i]->tel);
    }
    void retira(int n, Aluno **tab, int i)
    {
        if (i < 0 || i >= n)
        {
            printf("indice fora do limite do vetor \n ");
            exit(1); // aborta o programa
        }
        if (tab[i] != NULL)
        {
            free(tab[i]);
            tab[i] = NULL;
        }
        void imprime(int n, Aluno **tab, int i)
        {
            if (i < 0 || i >= n)
            {
                printf("indice fora do limite do vetor \n ");
                exit(1);
            }
            if (tab[i] != NULL)
            {
                printf("Matricula: %d\n", tab[i]->mat);
                printf("nome: %s\n", tab[i]->nome);
                printf("endereco: %s\n", tab[i]->end);
                printf("telefone: %s\n", tab[i]->tel);
            }
            void imprime_tudo(int n, Aluno **tab)
            {
                int i;
                for (i = 0; i < n; i++)
                    imprime(n, tab, i);
            }
        }
    }
}

int main(void)
{
    Aluno *tab[10];
    inicializa(10, tab);
    preenche(10, tab, 0);
    preenche(10, tab, 1);
    preenche(10, tab, 2);
    imprime_tudo(10, tab);
    retira(10, tab, 0);
    retira(10, tab, 1);
    retira(10, tab, 2);
    return 0;
}
