#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, j, soma;
	int matriz_1[4][3], matriz_2[4][3];
	int matriz_soma[4][3];
	
	printf("Priencha a primeira matriz\n");
	for ( i = 0; i < 4; i++ ){
		
		for( j = 0; j < 3; j++ ){
			
			printf("informe o valor %d.%d: ", i+1, j+1);
			scanf("%d", &matriz_1[i][j]);
		}
	}
	
	printf("Priencha a segunda matriz\n");
	for ( i = 0; i < 4; i++ ){
		
		for( j = 0; j < 3; j++ ){
			
			printf("informe o valor %d.%d: ",i+1, j+1);
			scanf("%d", &matriz_2[i][j]);
		}
	}	
	
	soma = 0;
	for (i = 0; i < 4; i++ ){
		for(j = 0; j < 3; j++){
			soma = matriz_1[i][j] + matriz_2[i][j];
			matriz_soma[i][j] = soma;
			soma = 0;
		}	
	}
	
	printf("Matriz 1\n");
	for (i = 0; i < 4; i++ ){
		for(j = 0; j < 3; j++){
			printf("%d ",matriz_1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("Matriz 2\n");
	for (i = 0; i < 4; i++ ){
		for(j = 0; j < 3; j++){
			printf("%d ",matriz_2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("Matriz soma\n");
	for (i = 0; i < 4; i++ ){
		for(j = 0; j < 3; j++){
			printf("%d ",matriz_soma[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
