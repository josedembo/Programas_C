#include <stdio.h>
// Write a program to add two integers using pointers and functions.
void add_two(int *num1, int *num2, int *total);
int main(int argc, char const *argv[])
{
    int num1, num2, sum, *ptr_num1, *ptr_num2;

    num1 = 10;
    num2 = 20;

    ptr_num1 = &num1;
    ptr_num2 = &num2;

    add_two(ptr_num1, ptr_num2, &sum);

    printf("A soma entre %d e %d e igual a %d \n", *ptr_num1, *ptr_num2, sum);

    return 0;
}

void add_two(int *num1, int *num2, int *total)
{
    *total = *num1 + *num2;
}