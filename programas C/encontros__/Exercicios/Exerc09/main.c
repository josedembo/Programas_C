#include <stdio.h>
#include <stdlib.h>

/*Elabore uma função que receba um número inteiro, 
calcule e retorne o algarismo da casa das unidades desse número. 
Elabore também um programa principal para mostrar no vídeo o retorno da função.

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
