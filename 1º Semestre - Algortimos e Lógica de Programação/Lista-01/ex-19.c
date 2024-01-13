/*19. Faça um programa que leia o numerador e o denominador de
uma fração e calcule seu valor decimal.*/

#include <stdio.h>

int main() {
    double numerador;
    double denominador;
    double resultado;

    printf("Numerador:");
    scanf("%lf", &numerador);

    printf("Denominador:");
    scanf("%lf", &denominador);

    resultado = numerador / denominador;

    printf("O resultado eh: %.2f\n", resultado);
    return 0;
}