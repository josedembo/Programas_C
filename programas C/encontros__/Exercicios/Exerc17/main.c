#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, valor_inicial, aux =0;
	int vetor_A[6] = {3, 5, 6, 8, 1, 4};

valor_inicial = vetor_A[0];
	for ( i = 0; i < 6;i++){
		
		for(j=i;j<6;j++){
			
			if(vetor_A[i]>vetor_A[j]){
				
		        aux=vetor_A[i]; // auxi guarada o maior valor
		        vetor_A[i]=vetor_A[j]; // no lugar do maior valor(vetor_A[i], colocamos o menor valor vetor_A[j]
		        vetor_A[j]=aux;  // no lugar do menor valor colocamos o maior valor.
			}
			
		}
	}
	
	for(i = 0; i <6; i++){
		printf("%d ",vetor_A[i]);
	}
	return 0;
}

/*

+ Expandir Código (Duplo Clique para Selecionar tudo)
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
void BubbleSort(int vetor[], int tamanho)
{ 
  int aux, i, j; 
 
  for(j=tamanho-1; j<=1; j--)
  { 
    for(i=0; i>j; i++)
    { 
      if(vetor[i] > vetor[i+1])
      { 
        aux=vetor[i]; 
        vetor[i]=vetor[i+1]; 
        vetor[i+1]=aux; 
      } 
    } 
  } 
}

*/
