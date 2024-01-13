/*4. A prefeitura de uma cidade resolveu criar uma linha de crédito
aos seus servidores. A regra é que a prestação não pode
ultrapassar 30% do salário bruto. Faça um programa que
recebe o valor do salário bruto e o valor da prestação e indique
se é ou não possível o empréstimo.*/

#include <stdio.h>

int main() {
    float salario, emprestimo, porcentagem;
    float valor;
    int opcao;


    printf("Digite o salario:\n");
    scanf(" %f", &salario);

    printf("Digite o valor do emprestimo:\n");
    scanf(" %f", &emprestimo);

    porcentagem = (salario / 100) * 30;

    if(emprestimo > porcentagem)
    {
        printf("Emprestimo nao aprovado!\n");
    }
    else
    {
        printf("Emprestimo em andamento\n");
        printf("Digite a quantidade de parcelas para pagamento:\n");
        printf("1 - 12 parcelas\n");
        printf("2 - 24 parcelas\n");
        printf("3 - 36 parcelas\n");
        printf("4 - 48 parcelas\n");
        printf("5 - Sair\n");
        scanf(" %d", &opcao);

        switch(opcao)
        {
            case 1:
                valor = emprestimo / 12;
                printf("Valor das prestacoes: %.2f", valor);
                break;
            case 2:
                valor = emprestimo / 24;
                printf("Valor das prestacoes: %.2f", valor);
                break;
            case 3:
                valor = emprestimo / 36;
                printf("Valor das prestacoes: %.2f", valor);
                break;
            case 4:
                valor = emprestimo / 48;
                printf("Valor das prestacoes: %.2f", valor);
                break;
            case 5:
                break;
            default:
                printf("Opcao invalida");
        }
    }




    return 0;
}
