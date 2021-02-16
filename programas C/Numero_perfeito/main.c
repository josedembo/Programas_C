#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero;
	int i, soma_div;
	
	printf("---------------Este progrma verifica se o numero informado he um numero perfeito----------------\n\n");
	
	printf("digite um numero\nR:");
	scanf("%d",&numero);
	
	soma_div=0;
	for(i=1;i<numero;i++){
		if(numero%i==0){
			soma_div = soma_div +i;
			printf("divisores de %d =%d \n",numero,i);
		}
	
	}
	
	if(soma_div==numero){
		printf("O numero %d he um numero perfeito",numero);
	}else{
		printf("O numero %d nao he um numero perfeito",numero);
	}
	
	return 0;
}
