#include <stdio.h>
#include <stdlib.h>

/* 2367  12  987
987 / 10
98/10
9/10
0
*/

int algarismoUnidade(int k){
	int algarismo;
	while(k>0){
		
		if(k/10 == 0 ){
			algarismo = k;
			break;
		}
		
		k = k / 10;
	}
	
	return algarismo;
}


int main(int argc, char *argv[]) {
	
	int numero, result;
	
	printf("Informe o um numero inteiro: ");
	scanf("%d", &numero);
	
	result = algarismoUnidade(numero);
	
	printf("unidade = %d", result);
	return 0;
}
