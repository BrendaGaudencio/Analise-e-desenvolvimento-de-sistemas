/*8. Ler o número de termos da série (n) e imprimir o valor de H
sendo: 𝐻 = 1 + 1/2 + 1/3 + 1/4 +...+ 1/𝑛*/

#include <stdio.h>

int main() {
    float n;
    int cont;
    float h;

    printf("Digite o numero do termo n:\n");
    scanf("%f", &n);

    for(cont = 1; cont <= n; cont++)
    {
        h = h + (1/(float)cont);
    }
    printf("Resultado eh: %.2f", h);
    return 0;
}