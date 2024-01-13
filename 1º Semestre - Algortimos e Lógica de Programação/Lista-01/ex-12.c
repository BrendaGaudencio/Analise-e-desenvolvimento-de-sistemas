/*12. Faça um programa que entre com o valor de um produto e uma
porcentagem de desconto e imprima o valor com desconto.*/

#include <stdio.h>

int main() {
    float valorProduto;
    float valorPorcentagem;
    float taxaPorcentagem;
    float valorFinal;

    printf("Digite o valor: \n");
    scanf("%f", &valorProduto);

    printf("Digite o valor da porcentagem: \n");
    scanf("%f", &valorPorcentagem);

    taxaPorcentagem = valorProduto / 100;
    valorFinal = valorProduto - taxaPorcentagem * valorPorcentagem;

    printf("O valor final eh: %.2f \n", valorFinal);
    return 0;
}