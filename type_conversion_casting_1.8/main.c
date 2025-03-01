#include <stdio.h>
/*
*/
int main(int argc, char const *argv[])
{
    /* Hieraquia da conversão de tipo
        double, float, long, int, short, and char
        Ou seja:
        double <<float << long << int <<short, << char

        Da direita para a esquerda os tipos podem ser convertidos de um para o outro sem sofrer nenhum tipo de alteração, o contrairio pode causar a perda de alguns valores
     */
    double d = 9.8874;
    float y, result;
    int x = 10;
    // Conversão de tipo
    y = x; // convertendo automaticamente o valor inteiro(x) para float(y) : 10.00
    result = d;
    x = d;

    printf("\nvalor de x= %d, valor de  y = %f", x, y);
    printf("\nvalor de result = %f\n", result);

    return 0;
}
