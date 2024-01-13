/*14. Faça um programa aonde você digite vários números e no final
imprima quantos foram digitados, a soma deles, a média, o
maior e o menor. O programa termina quando for digitado zero.*/

#include <stdio.h>
#include <limits.h>

int main() {
    int num = -1;
    int quant = -1;
    float media = 0;
    int soma = 0;
    int maior = 0;
    int menor = INT_MAX;

    while(num != 0)
    {
        printf("Digite o numero: ");
        scanf("%d", &num);
        soma += num;
        quant++;

        if (num >= maior)
        {
            maior = num;
        }
        if (num <= menor && num != 0)
        {
            menor = num;
        }

    }
    if(num == 0)
    {
        media += soma / quant;
    }

    printf("Quantidade de numeros digitados: %d\nSoma: %d\nMedia: %.2f\n", quant, soma, media);
    printf("Maior: %d\nMenor: %d", maior, menor);
    return 0;
}