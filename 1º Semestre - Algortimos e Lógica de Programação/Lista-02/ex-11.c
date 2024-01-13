/*11. Ler três números e imprimi-los em ordem crescente.*/

#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;

    printf("Digite um numero: \n");
    scanf("%d", &num1);

    printf("Digite outro numero: \n");
    scanf("%d", &num2);

    printf("Digite mais um numero: \n");
    scanf("%d", &num3);

    if(num1 < num2)
    {
        printf("A ordem eh: %d, %d, %d", num1, num2, num3);
    }
    else if(num2 < num3)
    {
        printf("A ordem eh: %d, %d, %d", num2, num3, num1);
    }
    else if (num3 > num1)
    {
        printf("A ordem eh: %d, %d, %d", num3, num1, num2);
    }
    return 0;
}
