/*20. Um restaurante cobra de seus clientes 10% da conta como
gorjeta para o garçom. Faça um programa que receba o valor
dos gastos, calcule a gorjeta e mostre na tela o valor inicial, a
gorjeta e o valor total da conta.*/

#include <stdio.h>

int main() {
    float taxaGarçom;
    float valor;
    float valorFinal;
    float gorjeta;

    printf("Digite o valor da conta:");
    scanf("%f", &valor);

    taxaGarçom = 0.10;
    gorjeta = valor * taxaGarçom;
    valorFinal = valor + gorjeta;

    printf("Valor inicial: R$%.2f\n", valor);
    printf("Gorjeta: R$%.2f\n", gorjeta);
    printf("Valor final da conta: R$%.2f", valorFinal);
    return 0;
}