#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 10, *ptr = NULL;
    ptr = &x;
    printf("valor da variavel x antes da alateração = %d\n", x);
    *ptr = 70; // Alterando o valor da variavel x de forma indireta
    printf("Imprimindo o valor da variavel x depois da alteração = %d\n", x);
    printf("O endereco da variavel x e = %p\n", &x);
    printf("O valor da varaivel ponteiro ptr= %p\n", ptr);

    return 0;
}
