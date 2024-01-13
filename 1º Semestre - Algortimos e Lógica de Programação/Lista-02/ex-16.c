/*16. Acontecerá um campeonato de natação e devemos verificar em
qual categoria o atleta se encaixa. Ler a idade e decidir a
categoria conforme a regra:
▪ Infantil A – 5 a 7 anos
▪ Infantil B – 8 a 10 anos
▪ Juvenil A – 11 a 13 anos
▪ Juvenil B – 14 a 17 anos
▪ Sênior – 18 anos ou mais*/

#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade:\n");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
    {
        printf("Infantil A");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Infantil B");
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("Juvenil A");
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("Juvenil B");
    }
    else if (idade >= 18 && idade <= 100)
    {
        printf("Senior");
    }

    return 0;
}
