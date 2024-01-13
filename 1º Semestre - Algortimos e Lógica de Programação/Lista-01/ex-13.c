/*13. Escreva um programa em C que solicite um determinado
número de segundos e, em seguida, imprima quantas horas,
minutos e segundos ele representa.*/

#include <stdio.h>

int main() {
    int horas;
    int minutos;
    int numSegundos;
    int segundos;
    int resto;

    printf("De um numero de segundos: ");
    scanf("%d", &numSegundos);

    horas = numSegundos / 3600;
    resto = numSegundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d segundos sao: %d:%d:%d\n", numSegundos, horas, minutos, segundos);
    return 0;
}