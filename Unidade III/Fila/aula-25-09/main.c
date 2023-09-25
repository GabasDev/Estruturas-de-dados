#include "fila.c"

int main (){
    Fila *q = CriaFila(200);

    InsereFila (q, 10);
    InsereFila(q, 5);
    InsereFila(q, 11);
    InsereFila(q, 14);

    imprimir_Fila(q);

    Destruir_fila(&q);
    return 0;
}