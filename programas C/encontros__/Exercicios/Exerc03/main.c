#include <stdio.h>
#include <stdlib.h>

/* Elabore uma fun��o que receba o seu sal�rio, o desconto de um funcion�rio;
 calcule e retorne o sal�rio l�quido do funcion�rio.
  Elabore tamb�m um programa principal para mostrar no v�deo o retorno da fun��o.
Sal�rio liquido = sal�rio � desconto */

float calculaSalarioLiquido(float salario, float desconto){
	float sal_liquido;
	sal_liquido = salario - desconto;
	
	return sal_liquido;
}
int main(int argc, char *argv[]) {
	float salario, desconto, result;
	
	printf("Informe o salario: ");
	scanf("%f", &salario);
	
	printf("Informe o desconto: ");
	scanf("%f", &desconto);	
	
	result  = calculaSalarioLiquido(salario, desconto);
	
	printf("Salario liquido: %.2f", result);
	return 0;
}
