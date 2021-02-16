#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero, cont_div;
	
	printf("informe um numero\nR:");
	scanf("%d",&numero);
	
	int i;
	cont_div =0;
	
	for(i=1;i<numero;i++){
		
		if(numero%i==0){
			cont_div= cont_div+i;
		}
	}
	
	if(cont_div == numero){
		printf("o numero %d he um numero perfeito", numero);
	}else{
		printf("o numero %d nao he um numero perfeito", numero);
	}
	return 0; 
}
