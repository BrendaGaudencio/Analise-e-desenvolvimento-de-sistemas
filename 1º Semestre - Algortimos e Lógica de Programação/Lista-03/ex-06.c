/* 6. Crie um programa que receba o ponto inicial, o final e o
incremento e imprima os números de acordo com esta informação.
Por exemplo: inicial = 5, final = 10, intervalo = 2, resultado: 5 7 9 */

#include <stdio.h>

int main() {

    int n1;
    int n2;
    int intervalo;
    int result;
    int cont;
    int cont2;

    printf("Digite o valor do primeiro numero:");
    scanf("%d", &n1);
    printf("Digite o valor do segundo numero:");
    scanf("%d", &n2);
    printf("Digite o intervalo que deseja entre os numeros:");
    scanf("%d", &intervalo);


    cont = n1;
    cont2 = cont;
    for (cont; cont <= n2; cont++)
    {
        if(cont == cont2)
        {
            result = cont2;
            printf("%d\n", result);
            cont2 = cont2 + intervalo;
        }
    }
    return 0;
}