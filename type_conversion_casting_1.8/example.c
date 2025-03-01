#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int i_num;
    float f_num;

    printf("Informe um valor do tipo inteiro: ");
    scanf("%d", &i_num);

    f_num = (int)i_num;

    printf("\nValor do numero digitado %d convertido  para o tipo float = %f\n", i_num, f_num);

    return 0;
}
