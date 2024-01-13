/*14. Faça um programa que efetue o cálculo de salário líquido de
um professor. O programa deve pedir a quantidade de aulas
dadas, o valor de hora aula e o percentual de desconto do
INSS.*/

#include <stdio.h>

int main() {
    int aulas;
    float valorH;
    float inss;
    float inssPorcen;
    float valorFinal;
    float resultado;

    printf("Digite a quantidade de aulas dadas:");
    scanf("%d", &aulas);

    printf("Digite o valor da hora aula: ");
    scanf("%f", &valorH);

    printf("Digite o percentual do INSS: ");
    scanf("%f", &inssPorcen);

    valorFinal = aulas * valorH;
    inss = (inssPorcen / 100) * valorFinal;
    resultado = valorFinal - inss;

    printf("O valor final eh: R$ %.2f \n", resultado);
    return 0;
}