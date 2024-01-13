/*10. Sabendo que o perímetro de um círculo é calculado pela
fórmula: 2 × 𝜋 × 𝑟𝑎𝑖𝑜, e a área pela fórmula 𝜋 × 𝑟𝑎𝑖𝑜2, faça
um programa que dado o raio de um círculo ele calcule o
perímetro e a área deste.*/

#include <stdio.h>

int main() {
    float raio = 0;
    float pi = 3.14;
    float perimetro;
    float area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    perimetro = (2 * pi) * raio;
    printf("O perimetro eh: %.2f \n", perimetro);

    area = pi * (raio * raio);
    printf("A area eh: %.2f \n", area);
    return 0;
}