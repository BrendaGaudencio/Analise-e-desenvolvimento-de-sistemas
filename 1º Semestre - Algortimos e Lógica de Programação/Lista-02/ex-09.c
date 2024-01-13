/*9. Ler dois números e imprimi-los em ordem decrescente.*/

#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num1);

    printf("Digite outro numero inteiro:\n");
    scanf("%d", &num2);

    if(num2 > num1)
    {
        printf("Os numeros em ordem decrescente sao: %d, %d", num2, num1);
    }
    else
    {
        printf("Os numeros em ordem decrescente sao: %d, %d", num1, num2);
    }
    return 0;
}
