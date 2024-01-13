/*6. Ler dois números inteiros e imprimir a soma deles.*/

#include <stdio.h>

int main() {
    int n1 = 0;
    int n2 = 0;
    int soma;

    printf("Digite um numero:\n");
    scanf("%d", &n1);

    printf("Digite outro numero:\n");
    scanf("%d", &n2);

    soma = n1 + n2;
    printf("O resultado da soma eh: %d", soma);
    return 0;
}