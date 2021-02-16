#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,Ntermos;
	float s,num,den;
	
	printf("informe um numero");
	scanf("%d",&Ntermos);
	s=0;
	num=1;
	den=1;
	for(i=1;i<=Ntermos;i++){
		s =s + (num/den);
		num +=1;
		den+=2;
	}
	
	printf("Soma = %f",s);
	return 0;
}
