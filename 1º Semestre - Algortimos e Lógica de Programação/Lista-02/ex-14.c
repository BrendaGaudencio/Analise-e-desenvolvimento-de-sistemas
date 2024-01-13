/*14. Ler três números e verificar se eles podem representar os
lados de um triângulo. A regra é que um lado deve ser menor
que a soma dos outros dois lados.*/

#include <stdio.h>

int main() {
    int num1, num2, num3, soma1, soma2, soma3;

    printf("Digite o valor de um lado do triangulo:\n");
    scanf(" %d", &num1);

    printf("Digite o valor de outro lado do triangulo:\n");
    scanf(" %d", &num2);

    printf("Digite o valor do ultimo lado do triangulo:\n");
    scanf(" %d", &num3);

    soma1 = num2 + num3;
    soma2 = num1 + num3;
    soma3 = num2 + num1;

    if(num1 < soma1 || num2 < soma2 || num3 < soma3)
    {
        printf("Eh um triangulo! c:\n");
    }
    else if(num1 == num2 && num3 == num2)
    {
        printf("Nao eh um triangulo! :c\n");
    }


    return 0;
}