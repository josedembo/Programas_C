#include <stdio.h>
#include <stdlib.h>

/*Elabore uma fun��o que receba um n�mero inteiro, 
calcule e retorne o algarismo da casa das unidades desse n�mero. 
Elabore tamb�m um programa principal para mostrar no v�deo o retorno da fun��o.

1278 986  12

986/10
98/10
9/10
0

*/

 int algarismoUnidade(int k){
 	
 	int algarismo;
 	
 	while( k > 0){
 		
 		if( k/10 == 0 ){
 			algarismo = k;
 			break;
		 }
		
		k = k/10;
		 
	 }
	 
	 return algarismo;
 }
 
int main(int argc, char *argv[]) {
	int numero, result;
	
	printf("informe o numero: ");
	scanf("%d", &numero);
	
	result = algarismoUnidade(numero);
	
	printf("Algarismo unidade: %d", result);
	
	return 0;
}
