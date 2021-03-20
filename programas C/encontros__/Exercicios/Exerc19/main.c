#include <stdio.h>
#include <stdlib.h>

/*Elabore um algoritmo que gere uma matriz identidade de ordem 10. Matriz identidade é
aquela que possui todos os elementos da diagonal principal iguais a 1 e os demais elementos
iguais a 0. Exemplo: */

int main(int argc, char *argv[]) {
	int matriz[10][10];
	int i, j;
	
	for (i = 0; i < 10; i++){	
		for(j = 0; j < 10; j++){
			if(i == j ){
				matriz[i][j] = 1;
			}else{
				matriz[i][j] = 0;
			}
		}
	}
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
