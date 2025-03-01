#include <stdio.h>

// Write a program to determine whether a given number is a prime or a composite number.
int main(int argc, char const *argv[])
{
    int flag = 0, num, i;

    printf("Informe o valor de n: ");
    scanf("%d", &num);

    for (int i = 2; i < num / 2; i++)
    {

        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("O numero %d e um numero composto\n", num);
    }
    else
    {
        printf("O numero %d e um numero primo\n", num);
    }

    return 0;
}
