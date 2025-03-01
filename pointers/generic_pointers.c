#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    char gender;
    void *ptr = NULL;

    age = 10;
    gender = 'M';

    ptr = &gender;
    printf("ponteiro apontando para a variavel gender = %c\n", *(char *)ptr);
    ptr = &age;
    printf("Ponteiro apontando para a variavel age = %d\n", *(int *)ptr);

    return 0;
}
