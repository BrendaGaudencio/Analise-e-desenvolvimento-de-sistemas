/*6. Faça um programa aonde você entre com 10 números e no
final imprima qual foi o maior e qual foi o menor.*/

#include <stdio.h>

int main() {
    int numero[10];
    int maior, menor;
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("Digite um numero:");
        scanf(" %d", &numero[i]);

    }

    menor = numero[0];
    for(i = 0; i < 10; i++)
    {
        if(numero[i] >= maior)
        {
            maior = numero[i];
        }
        if(numero[i] <= menor)
        {
            menor = numero[i];
        }
    }
    printf("O maior eh: %d \n", maior);
    printf("O menor eh: %d \n", menor);
    return 0;
}