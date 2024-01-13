/*17. Efetuar o cálculo de uma prestação em atraso usando a 
seguinte fórmula: 𝑝𝑟𝑒𝑠𝑡𝑎çã𝑜 = 𝑣𝑎𝑙𝑜𝑟 + (𝑣𝑎𝑙𝑜𝑟 × 𝑡𝑎𝑥𝑎/100 × 𝑡𝑒𝑚𝑝𝑜)*/

#include <stdio.h>

int main() {
    float prestacao;
    float valor;
    float taxa;
    int tempo;

    printf("Valor da prestacao:");
    scanf("%f", &valor);
    printf("Tempo de atraso em dias:");
    scanf("%d", &tempo);
    printf("Taxa de juros por dia:");
    scanf("%f", &taxa);

    prestacao = valor + (valor * taxa / 100 * tempo);
    printf("Valor final da prestacao com juros: R$%.2f\n", prestacao);

    return 0;
}