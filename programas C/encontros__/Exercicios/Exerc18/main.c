#include <stdio.h>
#include <stdlib.h>

/*Elabore um algoritmo que construa três vetores de 10 elementos e crie uma matriz [10,3] com esses vetores,
 sendo a primeira coluna da matriz composta pelos valores do primeiro vetor, 
a segunda coluna composta pelo segundo vetor e a terceira coluna composta pelo terceiro vetor. */

int main(int argc, char *argv[]) {
	int vetor_1[10], vetor_2[10], vetor_3[10];
	int matriz[10][3];
	int i, j;
	
	// princhendo o primeiro vetor
	printf("Informe os valores do primeiro vetor \n");
	for(i = 0; i < 10; i++){
		printf("informe o valor de vetor[%d]: ",i);
		scanf("%d",&vetor_1[i]);
	}
	
	// princhendo o segundo vetor
	printf("Informe os valores do segundo vetor \n");
	for(i = 0; i < 10; i++){
		printf("informe o valor de vetor[%d]",i);
		scanf("%d",&vetor_2[i]);
	}
	
	// princhendo o terceiro vetor
	printf("Informe os valores do terceiro vetor \n");
	for(i = 0; i < 10; i++){
		printf("informe o valor de vetor[%d]",i);
		scanf("%d",&vetor_3[i]);
	}
	
	//prienchendo a matriz com os vetores 1, 2, e 3.
	for(i = 0; i < 10; i++){
		for(j = 0; j < 3; j++){
			
			if(j == 0){
				matriz[i][j] = vetor_1[i];
			}else if(j == 1){
				matriz[i][j] = vetor_2[i];
			}else{
				matriz[i][j] = vetor_3[i];
			}
			
		}
	}
	
	// imprimindo o vetor 1
	printf("vetor 1:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", vetor_1[i]);
	}
	
	printf("\n");
	
	// imprimindo o vetor 2
	printf("vetor 2:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", vetor_2[i]);
	}
	
	printf("\n");
	 
	// imprimindo o vetor 3
	printf("vetor 2:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", vetor_3[i]);
	}
	printf("\n");
	
	// imprimindo a matriz
	for (i = 0; i < 10; i ++){
		for ( j = 0; j < 3; j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
