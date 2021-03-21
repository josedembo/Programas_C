#include <stdio.h>
#include <stdlib.h>

/* Elabore uma função que receba a idade de um adulto e a de uma criança,
 calcule e retorne a diferença de idade em anos entre o adulto a criança. 
Elabore também um programa principal para mostrar no vídeo o retorno da função. */

int recebaIdades(int idade_adulto, int idade_crianca){
	int dif_idade;
	
	dif_idade = idade_adulto - idade_crianca;
	
	return dif_idade; 
}

int main(int argc, char *argv[]) {
	int idade_adulto, idade_crianca, dif;
	
	printf("informe a idade do adulto: ");
	scanf("%d",&idade_adulto);
	
	printf("Informe a idade da crianca: ");
	scanf("%d", &idade_crianca);
	
	dif = recebaIdades(idade_adulto, idade_crianca);
	
	printf("diferenca de idade: %d ", dif);
	return 0;
}
