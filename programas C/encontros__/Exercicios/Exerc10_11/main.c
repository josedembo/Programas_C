#include <stdio.h>
#include <stdlib.h>

/* Elabore um algoritmo que preencha um vetor de números inteiros e o decomponha em dois outros vetores, 
um contendo os elementos de valor ímpar e o outro contendo os elementos de valor par. 
Por exemplo, se o vetor dado for (3, 5, 6, 8, 1, 4, 2, 3, 7) o algoritmo deve gerar os vetores (3, 5, 1, 3, 7) e (6, 8, 4, 2). */

int main(int argc, char *argv[]) {
	int vetor_mae[9] = {3, 5, 6, 8, 1, 4, 2, 3, 7};
	int i, cont_par, cont_impar, f1,f2;
	cont_par = 0;
	cont_impar = 0;
	
	//contando os numeros pares e impares contidos no vetor mae
	for ( i = 0;i < 9;i++){
		if( vetor_mae[i] % 2 == 0 ){
			cont_par += 1;     // contando numero pares
		}else{
			cont_impar += 1;  // contando numeros impares 
		}
	}
	
	int vetor_filho1[cont_par], vetor_filho2[cont_impar]; // declarando as vetores filhos com os respetivos  tamanhos 
	
	f1 = 0;
	f2 = 0;
	// prienchendo os vetores filhos( par e impar)
	for (i = 0; i < 9; i++){
		if( vetor_mae[i] % 2 == 0 ){
			vetor_filho1[f1] = vetor_mae[i]; // prienchendo o vetor filho1(par)
			f1 += 1;
		}else{
			vetor_filho2[f2] = vetor_mae[i]; // prienchendo o vetor filho2(impar)
			f2+= 1;
		}
	} 
	
	// imprimindo o vetor filho1
	printf("vetor par: \n");
	for ( i = 0; i < cont_par; i++){
		printf("%d ",vetor_filho1[i]);
	}
	printf("\n");
	
	// imprimindo o vetor filho2
	printf("vetor impar: \n");
	for ( i = 0; i < cont_impar; i++){
		printf("%d ",vetor_filho2[i]);
	}
	return 0;
}
