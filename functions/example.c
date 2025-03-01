#include <stdio.h>
// Write a program to find whether a number is even or odd using functions.

int paridade(int num);
int main(int argc, char const *argv[])
{
    int value, flag;
    printf("Informe o valor: ");
    scanf("%d", &value);

    flag = paridade(value);

    if (flag == 1)
    {
        printf("O valor %d e um numero par\n", value);
    }
    else
    {
        printf("O valor %d e um numero ímpar\n", value);
    }
    return 0;
}

int paridade(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
