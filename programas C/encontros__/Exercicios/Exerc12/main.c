#include <stdio.h>
#include <stdlib.h>

/* A amplitude de uma relação de números reais é a diferença entre o maior e o menor valor da relação.
 Por exemplo, a amplitude de 5, 7, 15, 2, 23, 21, 3, 6 é 23-2=21. 
Elabore um algoritmo recebe uma relação de números e forneça a sua amplitude. */

int main(int argc, char *argv[]) {
	int qtd_numeros, i, maior_numero, menor_numero, amplitude ;
	printf("informe quantos numeros tem na relacao: ");
	scanf("%d",&qtd_numeros);
	
	int relacao[qtd_numeros]; // inicializando o vetor reslacao com o tamanho igual a quantidade de numero(qtd_numros)
	
	// prienchendo o vetor relacao com os seus valores
	for ( i = 0; i < qtd_numeros; i++ ){
		printf("Informe o %d valor da relacao: ", i+1);
		scanf("%d",&relacao[i]);
	}
	
	maior_numero = relacao[0];
	menor_numero = relacao[0];
	
	// encontrando o maior  numero e p menor numero
	for ( i = 0; i < qtd_numeros; i++ ){
		
		if(maior_numero < relacao[i]){
			
			maior_numero = relacao[i]; // captando o maior numero
			
		}else{
			
			if(menor_numero > relacao[i]){
				
				menor_numero = relacao[i]; // captando o menor numero
				
			}
		}
	}
	
	amplitude = maior_numero - menor_numero;
	
	printf("Amplitude = %d ", amplitude);
	
	return 0;
}
