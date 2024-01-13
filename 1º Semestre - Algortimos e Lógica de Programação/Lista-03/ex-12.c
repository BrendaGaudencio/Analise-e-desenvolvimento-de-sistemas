/*12. Faça um programa que calcula a raiz quadrada de um número
a ser digitado. O programa deve proteger a digitação deste
número não aceitando números negativos.*/

#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    float resultado;

    do{
        printf("Digite um numero inteiro positivo:");
        scanf(" %d", &numero);
    }while(numero < 1);

    resultado = sqrt((float)numero);

    printf("O resultado eh: %.2f", resultado);
    return 0;
}