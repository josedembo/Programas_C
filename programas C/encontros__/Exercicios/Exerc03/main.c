#include <stdio.h>
#include <stdlib.h>

/* Elabore uma função que receba o seu salário, o desconto de um funcionário;
 calcule e retorne o salário líquido do funcionário.
  Elabore também um programa principal para mostrar no vídeo o retorno da função.
Salário liquido = salário – desconto */

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
