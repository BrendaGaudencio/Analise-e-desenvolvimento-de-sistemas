/*13. Criar um programa aonde você seja capaz de digitar números
e tenha o fatorial deste número calculado e impresso. O
programa termina quando um valor menor do que 1 é digitado.*/

#include <stdio.h>

int main() {
    int numero;
    int resultado;
    int i;

    do{
        printf("Digite um numero ou um numero menor que 1 para sair do programa:\n");
        scanf(" %d", &numero);

        resultado = 1;

        for(i = 1; i < numero; i++)
        {
            resultado = resultado + (resultado * i);
        }
        printf("O fatorial e %d \n", resultado);
    }while (resultado > 1);

    return 0;
}