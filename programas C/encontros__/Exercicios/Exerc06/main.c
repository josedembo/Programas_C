#include <stdio.h>
#include <stdlib.h>

/* Elabore uma fun��o que receba um valor inteiro representando a hora (1,2,3�24) de um rel�gio,
 calcule e retorne a hora recebida em minutos utilizando a formula abaixo. 
 Elabore tamb�m um programa principal para mostrar no v�deo o retorno da fun��o.
Minutos = hora * 60 */

int converteHora_minuto(int hora){
	int minuto;
	minuto = hora * 60;
	
	return minuto;
}

int main(int argc, char *argv[]) {
	int result, hora;
	
	printf("informe a hora do relogio: ");
	scanf("%d", &hora);
	
	result = converteHora_minuto(hora);
	printf("%d hora equivale %d minutos",hora, result);
	return 0;
}
