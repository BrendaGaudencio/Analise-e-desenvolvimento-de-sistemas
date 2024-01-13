/*5. Ler um número com três dígitos e imprimir se o algarismo da
casa das centenas é par.*/

#include <stdio.h>

int main() {
    int num1;
    int divisao;
    int resultado;

    printf("Digite um numero com 3 digitos:\n");
    scanf("%d", &num1);

    divisao = num1 / 100;
    resultado = divisao % 2;

    if(resultado == 0)
    {
        printf("O numero %d eh par", divisao);
    }
    else
    {
        printf("O numero %d eh impar", divisao);
    }
    return 0;
}