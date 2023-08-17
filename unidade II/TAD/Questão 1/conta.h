typedef struct contabancaria ContaBancaria;

void deposita (ContaBancaria *conta, double novosaldo);
ContaBancaria* criaconta();
void saca(ContaBancaria *conta, double saque);
void transfere (ContaBancaria *conta1, ContaBancaria *conta2, double transferir);
void preencheconta (ContaBancaria *usuario);
void imprimeconta (ContaBancaria *usuario);