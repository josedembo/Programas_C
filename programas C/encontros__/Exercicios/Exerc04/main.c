#include <stdio.h>
#include <stdlib.h>

/* Elabore uma função que receba 3 (três) valores numéricos,
 calcule e retorne a média aritmética destes valores. 
Elabore também um programa principal para mostrar no vídeo o retorno da função. */

float calculaMedia(float valor1, float valor2, float valor3){
	float media = 0;
	media = ( valor1 + valor2 + valor3 ) / 3;
	
	return media;
}
int main(int argc, char *argv[]) {
	float n1, n2, n3;
	float media = 0;
	
	printf("Informe o primeiro valor: ");
	scanf("%f", &n1);
	
	printf("Informe o segundo valor: ");
	scanf("%f", &n2);

	printf("Informe o terceiro valor: ");
	scanf("%f", &n3);
	
	media = calculaMedia(n1, n2, n3);
	
	printf("media = %.2f", media);
	return 0;
}
