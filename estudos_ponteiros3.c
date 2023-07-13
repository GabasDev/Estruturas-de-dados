//'p2' é inicializado e recebe o endereço da variável 'a'
//'p3' é inicializado e recebe o e endereço da variável 'c'
//'p1' recebe o valor de 'p3'
//o valor que 'p2' aponta é alterado para '10'
// depois é feita uma declaração de ponteiro para ponteiro
//o ponteiro rece o endereço de 'p1'
//a endereço que 'p3' aponta é atribuido com valor que 'pp' aponta
//é declarado um ponteiro de inteiro que é inicializado com endereço de 'd'
//p4 recebe o valor de 'b'(20) e soma com o valor de 'p1'(10) e depois 'p1' é incrementado
#include <stdio.h>
int main(void) {
 int a, b, c, d;
 int *p1;
 int *p2 = &a;
 int *p3 = &c;
 p1 = p2;
 *p2 = 10;
 b = 20;
 int **pp;
 pp = &p1;
 *p3 = **pp;
 int *p4 = &d;
 *p4 = b + (*p1)++;
 printf("%d\t%d\t%d\t%d\n", a, b, c, d);
 return 0;
}
