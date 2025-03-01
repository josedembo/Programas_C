#include <stdio.h>

int main(int arg, char args[])
{

    int age;

    printf("\nInforme a idade: ");
    scanf("%d", &age);

    if (age < 12)
    {
        printf("\nTrata-se de uma crianca\n");
    }
    else if (age < 18)
    {
        printf("Trata-se de um adolescente\n");
    }
    else
    {
        printf("Trata-se de um adulto\n");
    }

    return 0;
}