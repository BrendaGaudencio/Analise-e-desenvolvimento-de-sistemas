/*3. Crie um programa que imprima a média aritmética entre os
números 8, 9 e 7.*/

#include <stdio.h>

int main() {
    int n1 = 8;
    int n2 = 9;
    int n3 = 7;
    int resultado;

    resultado = (n1 + n2 + n3) / 3;

    printf("A media aritmetica entre 8, 9 e 7 eh: %d\n", resultado);
    return 0;
}