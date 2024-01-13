/*10. Ler vários número e quando terminar mostrar quantos foram
entre 100 e 200. O programa termina quando número for zero.*/

#include <stdio.h>

int main() {
    int cont = 0;
    int num;
    int i;

    while(num != 0)
    {
        i = 0;
        i++;
        printf("Digite um numero ou 0 para sair:");
        scanf(" %d", &num);

        if(num >= 100 && num <= 200)
        {
            cont++;
        }
    }
    printf("Total: %d\n", cont);
    return 0;
}