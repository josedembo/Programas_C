#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float mediaDoAluno(float nota1, float nota2){
	float media;
	media = 0;
	media = (nota1 + nota2)/2;
	
	return (media);
}

int main(int argc, char *argv[]) {
	float nota1, nota2, resultado;
	
	printf("Informe o valor da nota1: ");
	scanf("%f",&nota1);
	printf("Informe o valor da nota2: ");
	scanf("%f",&nota2);
	
	resultado = mediaDoAluno(nota1, nota2);
	printf("A media do aluno he: %.2f", resultado);
	return 0;
}
