/*17. Pesquise a função sqrt da biblioteca math.h. Faça um programa
que leia três variáveis (a, b,e c) e resolva uma equação do
segundo grau.*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float equacao2Grau;
    float x1, x2;

    printf("Atribua um numero para a:\n");
    scanf(" %f", &a);

    printf("Atribua um numero para b:\n");
    scanf(" %f", &b);

    printf("Atribua um numero para c:\n");
    scanf(" %f", &c);

    equacao2Grau = b * b - 4 * a * c;

    if(equacao2Grau > 0)
    {
        x1 = (-b + sqrt(equacao2Grau)) / (2 * a);
        x2 = (-b - sqrt(equacao2Grau)) / (2 * a);
        printf("O resultado do x1: %.2f, resultado x2: %.2f", x1, x2);
    }
    else if(equacao2Grau == 0)
    {
        x1 = x2 = -b / (2 * a);
        printf("Resultado do x1: %.2f", x1);
    }
    else
    {
        printf("Nao eh possivel calcular uma raiz negativa!\n");
    }

    return 0;
}