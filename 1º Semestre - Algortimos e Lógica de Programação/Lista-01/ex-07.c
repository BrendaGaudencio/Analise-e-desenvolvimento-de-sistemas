/*7. Ler um número real e imprimir a terça parte dele.*/

#include <stdio.h>

int main() {
    float n1 = 0;
    int terco = 3;
    float divisao = 0;

    printf("Digite um numero: \n");
    scanf("%f", &n1);

    divisao = n1 / terco;
    printf("O resultado eh: \n%.2f", divisao);

    return 0;
}