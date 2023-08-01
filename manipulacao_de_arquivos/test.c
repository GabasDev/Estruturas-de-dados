#include<stdio.h>
#include<stdlib.h>
int main (){
    FILE *fp;
    int c;
    
    fp = fopen ("nome.txt", "r");
    if (fp==NULL){
        printf ("erro ao abrir o arquivo.\n");
        return 1;
    }
    c = fgetc (fp);
    printf ("%c\n", c);
    fclose (fp);
    return 0;
}