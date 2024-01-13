/*9. Entrar com números e imprimir o triplo de cada um deles. O
programa termina quando digitar -999.*/

#include <stdio.h>

int main() {
    int numeros, resultado;
    int i = 0;

    do {
        i = i + 1;
        printf("Para fechar o programa, digite -999\n");
        printf("Digite um numero: ");
        scanf(" %d", &numeros);
        resultado = numeros * 3;

        if(numeros != -999)
        {
            printf("O resultado eh: %d\n", resultado);
        }
        else
        {

        }
    } while(numeros != -999);
    return 0;
}