/*15. Para se calcular o volume de um cilindro usamos a seguinte
fórmula: 𝜋 × 𝑟𝑎𝑖𝑜2 × 𝑎𝑙𝑡𝑢𝑟𝑎, faça um programa que dado a
altura de uma lata e seu raio, calcule seu volume.*/

#include <stdio.h>

int main() {
    float raio;
    float altura;
    float pi;
    float resultado;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o raio: ");
    scanf("%f", &raio);

    pi = 3.14;
    resultado = pi * (raio * raio) * altura;

    printf("O volume do cilindro eh: %.2f \n", resultado);
    return 0;
}