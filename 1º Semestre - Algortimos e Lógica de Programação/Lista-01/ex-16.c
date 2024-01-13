/*16. Efetuar o cálculo da quantidade de litros de combustível gastos
em uma viagem, sabendo-se que o carro faz 12km por litro.
Deverão ser fornecidos o tempo gasto na viagem e a
velocidade média.
▪ Distância = 𝑡𝑒𝑚𝑝𝑜 × 𝑣𝑒𝑙𝑜𝑐𝑖𝑑𝑎𝑑𝑒
▪ Litros = 𝑑𝑖𝑠𝑡â𝑛𝑐𝑖𝑎 ÷ 12*/

#include <stdio.h>

int main() {
    int tempo;
    int velocidade;
    float distancia;
    float resultado;

    printf("Digite o tempo de viagem em horas:");
    scanf("%d", &tempo);

    printf("Digite a velocidade media em km/h:");
    scanf("%d", &velocidade);

    distancia = tempo * velocidade;
    resultado = distancia / 12;

    printf("A quantidade de litros eh: %.2f\n", resultado);
    return 0;
}