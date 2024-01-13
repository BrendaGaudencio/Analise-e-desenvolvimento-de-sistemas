/*12. Ler três números e guarda-los em três variáveis com os
nomes: maior, intermediário e menor.*/

#include <stdio.h>

int main() {
    int maior;
    int intermedio;
    int menor;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &maior);

    printf("Digite um numero inteiro:\n");
    scanf("%d", &intermedio);

    printf("Digite um numero inteiro:\n");
    scanf("%d", &menor);

    printf("Ordem: %d, %d, %d", maior, intermedio, menor);

    return 0;
}
