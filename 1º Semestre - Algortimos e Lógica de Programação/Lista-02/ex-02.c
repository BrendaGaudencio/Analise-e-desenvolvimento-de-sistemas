/*4.Ler um número e imprimir se ele é positivo, negativo ou nulo.*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero:\n");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("O numero eh positivo\n");
    }
    else if (numero < 0)
    {
        printf("O numero eh negativo\n");
    }
    else if (numero == 0)
    {
        printf("O numero eh nulo\n");
    }

    return 0;
}