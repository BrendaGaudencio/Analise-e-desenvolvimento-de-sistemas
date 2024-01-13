/*7. Fazer um programa que leia dois números e imprima se eles
são iguais ou diferentes.*/

#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("Digite um numero: \n");
    scanf("%d", &num1);

    printf("Digite um numero: \n");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("Numeros digitados sao iguais");
    }
    else
    {
        printf("Numeros digitados sao diferentes");
    }
    return 0;
}