#include <stdio.h>
#include <stdlib.h>

/* Elabore uma fun��o que receba 3 (tr�s) valores num�ricos,
 calcule e retorne a m�dia aritm�tica destes valores. 
Elabore tamb�m um programa principal para mostrar no v�deo o retorno da fun��o. */

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
