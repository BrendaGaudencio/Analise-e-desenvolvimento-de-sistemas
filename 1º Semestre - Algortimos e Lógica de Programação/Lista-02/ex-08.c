/*8. Entrar com dois números e imprimir o maior*/

#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("Digite um numero: \n");
    scanf("%d", &num1);

    printf("Digite outro numero: \n");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        printf("O numero maior eh: %d", num1);
    }
    else
    {
        printf("O numero maior eh: %d", num2);
    }
    return 0;
}
