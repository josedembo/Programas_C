#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int x,y,z;
z =2;
for(x=0;x<10;x++){
	x++;
	z=z+x;
	y=z%2;
}

printf("x = %d \n y = %d \n z= %d\n", x,y,z);
    return 0;
}
