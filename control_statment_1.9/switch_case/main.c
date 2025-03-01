#include <stdio.h>

int main(int argc, char const *argv[])
{
    int semana;
    printf("\nInforme um numero representando o dia da semana: ");
    scanf("%d", &semana);

    switch (semana)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Sefunda-Feira\n");
        break;
    case 3:
        printf("Terca-Feira\n");
        break;
    case 4:
        printf("Quarta-Feira\n");
        break;
    case 5:
        printf("Quinta-Feiraz\n");
        break;
    case 6:
        printf("Sexta-Feira\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    default:
        printf("O numero informado, não representa um dia da semana\n");
    }
    return 0;
}
