#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

int main(){
    ContaBancaria *conta1 = criaconta();
    ContaBancaria *conta2 = criaconta();

    preencheconta (conta1);
    preencheconta (conta2);

    imprimeconta (conta1);
    imprimeconta (conta2);
    
    deposita (conta1, 150.00);
    deposita (conta2, 550.00);

    saca(conta2, 50.00);

    transfere (conta1, conta2, 100.00);
    transfere (conta1, conta2, 10.00);

    free (conta1);
    free (conta2);
    return 0;
}