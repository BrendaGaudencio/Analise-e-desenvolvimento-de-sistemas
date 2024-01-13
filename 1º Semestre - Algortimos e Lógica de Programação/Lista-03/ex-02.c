/*2. Faça um programa que imprima todos os números pares entre
1 e 10.*/

#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i = i + 1)
    {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}