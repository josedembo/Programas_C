#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* 
   # 0 0 0 0 
   2 # 0 0 0
   4 7 # 0 0
   3 4 5 # 0
   2 3 4 5 6
   
	for (i = 0; i < 5; i++ ){
		for(j = 0; j < 5; j++){
			printf("%d ",matrizQuadrada[i][j]);
		}
		printf("\n");
	}
*/

int main(int argc, char *argv[]) {
	int matrizQuadrada[5][5];
	int i, j;
	int auxi;
	
	for (i = 0; i < 5; i++ ){
		for(j = 0; j < 5; j++){
			printf("informe o elemento %d.%d \nR:", (i+1),(j+1));
			scanf("%d", &matrizQuadrada[i][j]);
		}
	}
	
	bool triangular = false;
	auxi = 1;
	for (i = 0; i < 5; i++ ){
		for(j = 0; j < 5; j++)
		{
			// verifica na primeira linha
			if(i == 0 && j >= 1){
				if(matrizQuadrada[i][j] == 0){
					
					triangular = true;
				}else{
					triangular = false;
					auxi = 0;
				}
			}
			
			// verifica na segunda linha
			if(i == 1 && j >= 2){
				if(matrizQuadrada[i][j] == 0){
					
					triangular = true;
				}else{
					triangular = false;
					auxi = 0;
				}
			}
			
			// verifica na terceira linha
			if(i == 2 && j >= 3){
				if(matrizQuadrada[i][j] == 0){
					
					triangular = true;
				}else{
					triangular = false;
					auxi = 0;
				}
			}
			
			// verifica na quarta linha
			if(i == 3 && j >= 4){
				if(matrizQuadrada[i][j] == 0){
					
					triangular = true;
				}else{
					triangular = false;
					auxi = 0;
				}
			}	
		}

	}
	
	// Mostra a matriz
	for (i = 0; i < 5; i++ ){
		for(j = 0; j < 5; j++){
			printf("%d ",matrizQuadrada[i][j]);
		}
		printf("\n");
	}
	
	if(triangular == true && auxi != 0){
		printf("A matriz he triangular");
	}else{
		printf("A matriz nao he triangular");
	}
	
	return 0;
}


