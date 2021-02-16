#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Um programa que calcula a media de dois valores inteiros, e imprime a resultado na tela*/

int main(int argc, char *argv[]) {
	float nota1, nota2, nota3,soma;
	
	float media;
	
	
	printf("informe o valor da nota1\nR:");
	scanf("%f",&nota1);
	
	printf("informe o valor da nota2\nR:");
	scanf("%f",&nota2);
	
	printf("informe o valor da nota3\nR:");
	scanf("%f",&nota3);
	
	//n1=89;
	//n2= 100;
	soma=0;
	
	soma = nota1 + nota2 +nota3;
	
    //media = (nota1 + nota2 + nota3) /3
	media = soma/3;
		
	if(media>=7.0){
		printf("Aluno aprovado\n");
		printf("media = %.02f",media);
	}else if(media>=4 && media<=6.9){
		printf("Aluno em AF\n");
		printf("Media = %.02f",media);
	}else{
		printf("aluno reprovado\n");
		printf("media = %.02f",media);
	}
	
	
	/*
	if(media>=7.0){
		printf("Aluno aprovado\n");
		printf("media = %.02f",media);
	}else{
		if(media>=4 && media<=6.9){
			printf("Aluno em AF\n");
			printf("Media = %.02f",media);
		}else{
			printf("aluno reprovado\n");
			printf("media = %.02f",media);
		}
	}
	
	*/
	
	return 0;
}
