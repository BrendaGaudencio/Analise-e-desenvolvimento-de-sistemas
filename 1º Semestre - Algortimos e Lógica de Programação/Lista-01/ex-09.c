/*9. Faça um programa que você entra com o saldo de uma
aplicação e o sistema calcula e imprime o novo saldo para um
rendimento de 3,5%.*/

#include <stdio.h>

int main() {
    float saldo = 0;
    float novoSaldo;
    float rendimento;

    printf("Entre com um saldo: ");
    scanf("%f", &saldo);

    rendimento = 1.035;

    novoSaldo = saldo * rendimento;
    printf("Saldo com 3.5%% de rendimento eh: %.2f\n", novoSaldo);

    return 0;
}