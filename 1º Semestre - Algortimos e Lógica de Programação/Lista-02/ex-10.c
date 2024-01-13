/*10. Ler três números e imprimir o maior.*/

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

    if(num1 > num2)
    {
        printf("O numero maior eh: %d", num1);
    }
    else if(num2 > num3)
    {
        printf("O numero maior eh: %d", num2);
    }
    else
    {
        printf("O numero maior eh: %d", num3);
    }
    return 0;
}