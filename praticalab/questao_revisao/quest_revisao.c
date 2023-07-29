#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct fruta
{
    char nome[81];
    char cor[81];
    char sabor[81];
    int quantidade;
} Fruta;

void cadastrar_fruta(Fruta **fruta)
{
    printf("Cadastre sua fruta: \n");
    *fruta = (Fruta *)malloc(sizeof(Fruta));

    printf("Insira o nome da fruta: ");
    scanf(" %[^\n]s", (*fruta)->nome);

    printf("Insira o nome da cor: ");
    scanf(" %[^\n]s", (*fruta)->cor);

    printf("Insira o nome do sabor: ");
    scanf(" %[^\n]s", (*fruta)->sabor);

    printf("Insira a quantidade: ");
    scanf(" %d", &(*fruta)->quantidade);
}

void listar_fruta(Fruta *fruta)
{
    printf("A fruta cadastrada foi: %s\n", fruta->nome);
    printf("A cor cadastrada foi: %s\n", fruta->cor);
    printf("O sabor cadastrado foi: %s\n", fruta->sabor);
    printf("A quantidade: %d\n", fruta->quantidade);
}

void buscar_fruta_por_nome(Fruta *fruta)
{
    char nome_procurado[81];
    printf("Digite o nome da fruta que deseja procurar: ");
    scanf(" %[^\n]s", nome_procurado);

    if (strcmp(fruta->nome, nome_procurado) == 0)
    {
        printf("Informações da fruta:\n");
        printf("Nome: %s\n", fruta->nome);
        printf("Cor: %s\n", fruta->cor);
        printf("Sabor: %s\n", fruta->sabor);
        printf("Quantidade: %d\n", fruta->quantidade);
    }
    else
    {
        printf("Fruta nao encontrada.\n");
    }
}

int main(void)
{
    int opcao;
    Fruta *minha_fruta = NULL;

    do
    {
        printf("---MENU DAS FRUTAS DIGITE A OPCAO DESEJADA---\n");
        printf("--1: DESEJA CADASTRAR?-- \n");
        printf("--2: DESEJA LISTAR ALGUMA FRUTA?--\n");
        printf("--3: DESEJA BUSCAR ALGUMA FRUTA?--\n");
        printf("--4: ENCERRAR PROGRAMA--\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrar_fruta(&minha_fruta);
            break;
        case 2:
            if (minha_fruta != NULL)
                listar_fruta(minha_fruta);
            else
                printf("Nenhuma fruta cadastrada ainda.\n");
            break;
        case 3:
            if (minha_fruta != NULL)
                buscar_fruta_por_nome(minha_fruta);
            else
                printf("Nenhuma fruta cadastrada ainda.\n");
            break;
        case 4:
            // Liberar memória alocada antes de encerrar o programa
            if (minha_fruta != NULL)
            {
                free(minha_fruta);
                minha_fruta = NULL;
            }
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
            break;
        }

    } while (opcao != 4);

    return 0;
}