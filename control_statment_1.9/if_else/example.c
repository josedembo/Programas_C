#include <stdio.h>
// Write a program to find whether a number is even or odd.
int main(int argc, char const *argv[])
{
    /* code */
    int num;
    printf("\nInforme um numero: ");
    scanf("%d", &num);

    if ((num % 2) == 0)
    {
        printf("\nO valor informado %d é um numero par\n", num);
    }
    else
    {
        printf("O valor informado %d e um numero impar\n", num);
    }
    return 0;
}
