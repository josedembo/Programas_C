#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, j, soma;
	int matriz_1[2][2] = {{2,4},{1,3}};
	int matriz_2[2][2] = {{5,8},{2,4}};
	int matriz_soma[2][2];
	
	soma = 0;
	for (i = 0; i < 2; i++ ){
		for(j = 0; j < 2; j++){
			soma = matriz_1[i][j] + matriz_2[i][j];
			matriz_soma[i][j] = soma;
			soma = 0;
		}	
	}
	
	printf("Matriz 1\n");
	for (i = 0; i < 2; i++ ){
		for(j = 0; j < 2; j++){
			printf("%d ",matriz_1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("Matriz 2\n");
	for (i = 0; i < 2; i++ ){
		for(j = 0; j < 2; j++){
			printf("%d ",matriz_2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("Matriz soma\n");
	for (i = 0; i < 2; i++ ){
		for(j = 0; j < 2; j++){
			printf("%d ",matriz_soma[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
