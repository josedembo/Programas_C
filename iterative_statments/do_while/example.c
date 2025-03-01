#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0, sum = 0, i = 0;
    ;
    float avg = 0.00;

    printf("Informe a quantidade de elementos n: ");
    scanf("%d", &n);

    do
    {
        sum = sum + i;
        i = i + 1;
    } while (i <= n);
    avg = (float)sum / n;

    printf("A quantidade de elemnetos n = %d\n", n);
    printf("A soma total de 0 a n = %d\n", sum);
    printf("A media dos valores(avg) = %.2f\n", avg);
    return 0;
}
