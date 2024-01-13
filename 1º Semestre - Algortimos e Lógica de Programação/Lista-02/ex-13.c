/*13. Ler 5 números e imprimir o maior e o menor.*/

#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;

    printf("Digite um numero:\n");
    scanf(" %d", &num1);

    printf("Digite um numero:\n");
    scanf(" %d", &num2);

    printf("Digite um numero:\n");
    scanf(" %d", &num3);

    printf("Digite um numero:\n");
    scanf(" %d", &num4);

    printf("Digite um numero:\n");
    scanf(" %d", &num5);


    if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
    {
        printf("O numero maior eh: %d", num1);
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
    {
        printf("O numero maior eh: %d", num2);
    }
    else if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
    {
        printf("O numero maior eh: %d", num3);
    }
    else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
    {
        printf("O numero maior eh: %d", num4);
    }
    else if(num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4)
    {
        printf("O numero maior eh: %d", num5);
    }


    printf("\n");


    if(num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
    {
        printf("O menor eh: %d", num1);
    }
    else if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
    {
        printf("O numero menor eh: %d", num2);
    }
    else if(num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
    {
        printf("O numero menor eh: %d", num3);
    }
    else if(num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
    {
        printf("O numero menor eh: %d", num4);
    }
    else if(num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
    {
        printf("O numero menor eh: %d", num5);
    }

    printf("\n");
    return 0;
}
