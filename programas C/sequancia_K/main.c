#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, i;
    int contador1,contador2;
    scanf("%d",&k);

    for(contador1=1;contador1<=k;contador1++){
            i =contador1;
        for(contador2=1;contador2<=contador1;contador2++){
            printf("* ",contador2);
        }
        printf("\n");
    }
    return 0;
}
