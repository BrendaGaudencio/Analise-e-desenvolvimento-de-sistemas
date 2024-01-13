/*8. Ler dois números reais e imprimir a média aritmética deles.*/

#include <stdio.h>

int main() {
    float n1 = 0;
    float n2 = 0;
    float media = 2;
    float resultado;

    printf("Digite um numero real: \n");
    scanf("%f", &n1);

    printf("Digite outro numero real: \n");
    scanf("%f", &n2);

    resultado = (n1 + n2) / media;
    printf("O resultado da media eh:\n %.2f", resultado);
    return 0;
}