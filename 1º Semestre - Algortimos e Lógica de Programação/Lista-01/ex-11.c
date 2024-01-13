/*11. Sabendo que 100 quilowatts de energia custa um sétimo de
um salário mínimo, faça um programa que receba o valor do
salário mínimo e a quantidade de quilowatts gasta em uma
residência e imprima:
▪ O valor em Reais do quilowatt
▪ O valor em Reais a ser pago
▪ O valor a ser pago com 10% de desconto*/

#include <stdio.h>

int main() {
    float salario = 0;
    float desconto;
    int quilowattsMes = 0;
    float valorQuilowatt;
    float valorReais;
    float valorDesconto;


    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite quantos quilowatts usados no mes: ");
    scanf("%d", &quilowattsMes);

    valorQuilowatt = salario / 7 / 100;
    printf("Valor em reais do quilowatts: %.2f\n", valorQuilowatt);

    valorReais = quilowattsMes * valorQuilowatt;
    printf("Valor em reais a ser pago: %.2f\n", valorReais);

    desconto = 0.90;
    valorDesconto = valorReais * desconto;
    printf("Valor com desconto: %.2f\n", valorDesconto);

    return 0;
}