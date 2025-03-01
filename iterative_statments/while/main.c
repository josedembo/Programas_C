#include <stdio.h>

int main(int argc, char const *argv[])
{
    short int a;
    a = 1;

    // utilizando o while loop para imprimir na tela valores de 1 - 10
    while (a <= 10)
    {
        printf("%d\n", a);
        a++; // Atualização da variabel condicionadora
    }
    return 0;
}
