#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int k,i, numero,numero1, cont,cont1;
	
	printf("digite a quantidade de numeros da  sequencia");
	scanf("%d",&k);
	cont=0;
	cont1 =0;
	numero =0;
	numero1=0;
	for(i=0;i<k;i++){
		
		scanf("%d",&numero);
		
		
		if(numero>numero1 && numero == numero1+1){
			cont=cont+1;
		}else{
			cont1 = cont;
			
		}
		
		if(i==k-1 && cont1>cont){
			printf("maior sequencia cont1: %d",cont1);
		}else{
			if(i==k-1)
			printf("maior sequencia cont: %d",cont);
		}
		numero1 = numero;
	
	}
	
	return 0;
}
