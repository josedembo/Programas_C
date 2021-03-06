#include <stdio.h>
#include <stdlib.h>

/* Trabalhando com matriz */

int main(int argc, char *argv[]) {
	int linhas, colunas, auxi;
	int i,j,a,x,y;
	int maiorNumero, q_numeros, cont;
	int rep1=0, rep2, rep_maior, num_repetido;
	
	printf("informe o numero de linhas da matriz\nR:");
	scanf("%d",&linhas);
	printf("Informe o numero de colunas da matriz\nR:");
	scanf("%d",&colunas);
	int matriz[linhas][colunas];// declarando a matriz com a sua dimensão

	// prienchendo a matriz
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("informe o valor do elemento %d.%d\nR:",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	// calculando o maior valor da matriz
	maiorNumero = matriz[0][0];
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			if(maiorNumero<matriz[i][j]){
				maiorNumero = matriz[i][j];
			}
		}
	}
	
	q_numeros = linhas * colunas;
	cont = 1;
	
		x =0;
		y = 0;
		
	// calculando repetições
	rep_maior =0;
	while(x!=linhas && y!=linhas){
		for(i=0;i<linhas;i++){
			for(j=0;j<colunas;j++){
				auxi = matriz[x][y];
				if(auxi == matriz[i][j]){
					if(i==0 && j==0){
						cont=1;
					}else{
						cont+=1;
					}
				}
			}
		}
		
		if(cont>rep1){
			rep_maior = cont;
			num_repetido =matriz[x][y];
		}
		rep1= cont;
		
		y+=1;
		if(y = colunas-1){
			x+=1;
			y=0;
		}
		
		if(x=linhas-1){
			y = colunas;
			x = colunas;
		}
	}
	
	// imprimindo a matriz
	printf("Matriz\n");
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("o maior valor da matriz he o valor %d\n", maiorNumero);
	printf("numero mais repetido:%d\ncom %d repeticoes\n",num_repetido,rep_maior);
	
	return 0;
}
