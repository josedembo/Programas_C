#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x = 18.94745;
    printf("%.2f\n", (((int)(x * 100)) / 100.0));
    return 0;
}
