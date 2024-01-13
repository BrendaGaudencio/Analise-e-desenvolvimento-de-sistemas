/*4. Faça um programa que leia dois inteiros e os imprime na tela.*/

#include <stdio.h>

int main() {
    int n1 = 0;
    int n2 = 0;

    printf("Digite um numero:\n");
    scanf("%d", &n1);

    printf("Digite outro numero:\n");
    scanf("%d", &n2);

    printf("Os numeros digitados sao: %d e %d\n", n1, n2 );
    return 0;
}