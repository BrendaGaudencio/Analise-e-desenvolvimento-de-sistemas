/*6. Entrar com um número e imprimir se ele é igual a 20, menor ou
maior.*/

#include <stdio.h>

int main() {
    int num1;

    printf("Digite um numero:\n");
    scanf("%d", &num1);

    if(num1 == 20)
    {
        printf("O numero eh igual a %d", num1);
    }
    else if(num1 > 20)
    {
        printf("Numero digitado: %d, eh maior que 20", num1);
    }
    else
    {
        printf("Numero digitado: %d, eh menor que 20", num1);
    }
    return 0;
}