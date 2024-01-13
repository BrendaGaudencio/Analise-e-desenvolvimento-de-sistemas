/*5. Faça um programa que leia um número e imprima seu
sucessor e antecessor.*/

#include <stdio.h>

int main() {
    int n1 = 0;
    int soma;
    int subtracao;


    printf("Digite o numero:\n");
    scanf("%d", &n1);

    subtracao = n1 - 1;
    printf("Antecessor: %d\n", subtracao);

    soma = n1 + 1;
    printf("Sucessorr: %d\n", soma);

    return 0;
}