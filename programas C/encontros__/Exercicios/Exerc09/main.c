#include <stdio.h>
#include <stdlib.h>

/*Elabore um algoritmo que preencha um vetor de números inteiros e o decomponha em dois outros vetores,
 um contendo os elementos de valor ímpar e o outro contendo os elementos de valor par. Por exemplo,
  se o vetor dado for (3, 5, 6, 8, 1, 4, 2, 3, 7) 
 o algoritmo deve gerar os vetores (3, 5, 1, 3, 7) e (6, 8, 4, 2).*/
 
 
int main(int argc, char *argv[]) {
	/*
	int vetor_mae[9] = {3, 5, 6, 8, 1, 4, 2, 3, 7};
	                //  0  1  2  3  4  5  6  7  8
	                
	*/           
	int tamanho, i;
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int vetor_mae[tamanho], cont_par, cont_impar;
	
	// prienchendo o vetor mae
	for ( i = 0; i < 9; i++  ){
		printf("informe o elemento %d: ", i+1);
		scanf("%d", &vetor_mae[i]);
	} 
	
	cont_par = 0;
	cont_impar = 0;
	// conta os pares e impares contidos no vetor mae
	for (i = 0; i < 9; i++){
		
		if( vetor_mae[i] % 2 ==0 ){
			cont_par += 1; // cont_par = cont_par +1; 
		}else{
			
			cont_impar += 1; // cont_impar = cont_impar +1;
		}
	}
	
	int vetor_filho1[cont_par], vetor_filho2[cont_impar], f1, f2;
	
	f1 = 0;
	f2 = 0;
	// prienchendo os vetores filhos com valores pares(filho1) e impares(filho2)
	for (i = 0; i < 9; i++){
		if( vetor_mae[i] % 2 ==0 ){
			vetor_filho1[f1] = vetor_mae[i];
			f1 +=1;
		}else{
			vetor_filho2[f2] = vetor_mae[i];
			f2 +=1;
		}
	}
	
	// imprimindo o vetor mae
	printf("Vetor mae\n");
	for ( i = 0; i < tamanho; i++ ){
		printf("%d ", vetor_mae[i]);
	}
	
	printf("\n");
	
	// imprimindo o vetor filho1
	printf("Vetor filho1\n");
	for ( i = 0; i < cont_par; i++ ){
		printf("%d ", vetor_filho1[i]);
	}
	
	printf("\n");
	
	// imprimindo o vetor filho2
	printf("Vetor filho2\n");
	for ( i = 0; i < cont_impar; i++ ){
		printf("%d ", vetor_filho2[i]);
	}
	
	
	for ( i = 0; i < tamanho; i++){
		scanf("%d", &vetor[i]);
		printf("%d ", vetor[i]);
	}
	
	for( i = 0; i < tamanho_linha; i++ ){
		
		for( j = 0; j < tamanho_ coluna; j++){
			
			scanf("%d", matriz[i,j]);
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
