#include <stdio.h>
#include <stdlib.h>

/* Elabore um algoritmo que remova um elemento de índice dado. Por exemplo, 
se o vetor dado for (2, 5, 7, 10, 12, 13) e o elemento a ser removido for o de índice 4, 
o algoritmo deve fornecer o vetor (2, 5, 7, 12, 13).*/

void removaElemento(int vetor[], int indice, int tamanho){
	int i, j, novo_vetor[tamanho-1], cont;
	
	cont = 0;
	
	for (i = 0; i<tamanho; i++){
		if (i == indice){
			continue;
		}else{
			novo_vetor[cont] = vetor[i];
		}
		cont += 1;
	}
	
	for(j = 0; j < tamanho - 1; j++){
		printf("%d ", novo_vetor[j]);
	
	}
	
	
}


int main(int argc, char *argv[]) {
	int i, tam, ind;
	printf("digite o tamanho do vetor: \n");
	scanf("%d", &tam);
	
	int vet[tam];
	int cont_i = 0;
	
	while(cont_i<tam){
	printf("Digite o proximo  elemento %d do vetor: ", i+1);
	scanf("%d",&vet[cont_i]);
	cont_i+=1;
	}


	// aqui mostra o vetor como está
	printf("Vetor actual\n");
	for ( i = 0; i < tam; i++  ){
		printf("%d ", vet[i]);
	}
	
	printf("\nDigite o indice que deseja apagar: \n");
	scanf("%d", &ind);
	
	printf("Vetor alterado\n");
	removaElemento(vet, ind, tam);

	return 0;
}
