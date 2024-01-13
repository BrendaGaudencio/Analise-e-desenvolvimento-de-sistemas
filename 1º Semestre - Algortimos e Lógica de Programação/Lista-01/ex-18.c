/*18. Leia dois valores para as variáveis A e B, efetuar a troca dos
valores de forma que A passe a ter o valor de B e B passe a ter
o valor de A.*/

#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Valor para A:");
    scanf("%d", &a);
    printf("Valor para B:");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("A: %d \n", a);
    printf("B: %d", b);
    return 0;
}