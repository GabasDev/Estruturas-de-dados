#include<stdio.h>
#include<math.h>
//criei a funcao de calcular o hexagono
void calcula_hexagono (float l, float *area, float *perimetro){
    *area=(3*pow(l,2)*sqrt(3))/2;
    *perimetro=6*l;
}
// na main declarei as variaveis e chamei a funcao com os argumentos
int main (void){
    float a;
    float p;    
    float l=3;
    calcula_hexagono(l,&a,&p);
    printf ("o valor da area %.2f e o do perimetro %.2f", a,p);        
}
