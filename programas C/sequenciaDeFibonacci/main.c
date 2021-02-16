#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n1=0;
    int n2 =1;
    int quantNum;
    int auxi;

    printf("Informe a quantidade de numeros da sequencia:\nR:");
    scanf("%d",&quantNum);

    for(i=0;i<quantNum;i++){

        printf("%d ",n1);

        auxi = n1 + n2;
        n1= n2;
        n2 = auxi;

    }


    return 0;
}
