/*1. Usando estruturas de repetição, crie um programa aonde você
entra com 5 números e o programa imprima o quadrado de cada um.*/

#include <stdio.h>

int main() {
    int numero;
    int i;
    int quadrado;

    for(i = 1; i <= 5; i++)
    {
        printf("Digite um numero:");
        scanf(" %d", &numero);
        quadrado = numero * numero;
        printf("O resultado eh: %d\n", quadrado);
    }
    return 0;
}