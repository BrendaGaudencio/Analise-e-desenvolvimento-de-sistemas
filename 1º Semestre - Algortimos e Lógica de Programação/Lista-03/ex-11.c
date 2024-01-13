/*10. Dois alienígenas crescem indefinidamente. Zerg tem 1,50m e
cresce 2cm por ano enquanto Splim tem 1,30m e cresce 3cm
por ano. Faça um programa que calcule quantos anos serão
necessários para que Splim seja maior que Zerg.*/

#include <stdio.h>

int main() {
    int anos = 0;
    float alturaSplim, alturaZerg;

    alturaSplim = 1.30;
    alturaZerg = 1.50;

    do
    {
        anos++;
        alturaSplim = alturaSplim + 0.03;
        alturaZerg = alturaZerg + 0.02;
    } while(alturaSplim <= alturaZerg);

    printf("Serao necessarios: %d anos", anos);
    return 0;
}