#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char ** frutas = (char**) malloc (4*sizeof(char*));
    int cont;
    for (cont = 0; cont < 4; cont++)
    {
        frutas[cont] = (char *)malloc(sizeof(char) * 10);
    }

    strcpy(frutas[0], "maca");
    strcpy(frutas[1], "abacate");
    strcpy(frutas[2], "uva");
    strcpy(frutas[3], "laranja");

    for (cont = 0; cont < 4; cont++)
    {
        printf("%s", frutas[cont]);
    }
    return 0;
}