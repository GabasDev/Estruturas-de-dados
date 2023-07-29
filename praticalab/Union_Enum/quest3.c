#include<stdio.h>

typedef enum meses{
JANEIRO=1, FEVEREIRO, MARCO, ABRIL, MAIO,JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO , DEZEMBRO
}Meses;

int dia,mes,ano;
int main (void){
    printf ("INSIRA O DIA");
    scanf ("%d", &dia);
    printf ("INSIRA O MES");
    scanf ("%d", &mes);
    printf ("INSIRA O ANO");
    scanf ("%d", &ano);
    switch (mes)
    {
    case JANEIRO: 
        printf ("%d /01/ %d \n", dia, ano);
        break;
    case FEVEREIRO: 
        printf ("%d /02/ %d \n", dia, ano);
        break;
    case MARCO: 
        printf ("%d /03/ %d \n", dia, ano);
        break;
    case ABRIL: 
        printf ("%d /04/ %d \n", dia, ano);
        break;
    case MAIO: 
        printf ("%d /05/ %d \n", dia, ano);
        break;
    case JULHO: 
        printf (" %d /06 /%d \n", dia, ano);
        break;
    case JUNHO: 
        printf ("%d /07/ %d \n", dia, ano);
        break;
    case AGOSTO: 
        printf ("%d /08/ %d \n", dia, ano);
        break;
    case SETEMBRO: 
        printf ("%d /09/ %d \n", dia, ano);
        break;
    case OUTUBRO: 
        printf ("%d /10/ %d \n", dia, ano);
        break;
    case NOVEMBRO: 
        printf ("%d /11/ %d \n", dia, ano);
        break;
    case DEZEMBRO: 
        printf ("%d /12/ %d \n", dia, ano);
        break;
    default:
        break;
    }
    return 0;
}
