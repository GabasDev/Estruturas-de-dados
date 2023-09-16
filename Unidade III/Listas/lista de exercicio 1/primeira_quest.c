#include <stdio.h>
#include <stdlib.h>

// Estrutura para um nó da lista encadeada
struct Node {
    int info;
    struct Node* proximo;
};

typedef struct Node Node;

// Estrutura para a lista encadeada
struct Lista {
    Node* head;
};

typedef struct Lista Lista;

// Função para criar um novo nó
Node* novoNo(int info) {
    Node* novo = (Node*)malloc(sizeof(Node));
    novo->info = info;
    novo->proximo = NULL;
    return novo;
}

// Função para inicializar uma lista vazia
void inicializarLista(Lista* l) {
    l->head = NULL;
}

// Função para inserir um nó no início da lista
void inserirNoInicio(Lista* l, int info) {
    Node* novo = novoNo(info);
    novo->proximo = l->head;
    l->head = novo;
}

// Função para contar os nós com informações maiores que n
int maiores(Lista* l, int n) {
    int contador = 0;
    Node* atual = l->head;

    while (atual != NULL) {
        if (atual->info > n) {
            contador++;
        }
        atual = atual->proximo;
    }

    return contador;
}

int main() {
    Lista minhaLista;
    inicializarLista(&minhaLista);

    inserirNoInicio(&minhaLista, 10);
    inserirNoInicio(&minhaLista, 5);
    inserirNoInicio(&minhaLista, 15);
    inserirNoInicio(&minhaLista, 7);
    inserirNoInicio(&minhaLista, 20);

    int valorN = 10;
    int resultado = maiores(&minhaLista, valorN);

    printf("Numero de nos com informacoes maiores que %d: %d\n", valorN, resultado);

    return 0;
}
