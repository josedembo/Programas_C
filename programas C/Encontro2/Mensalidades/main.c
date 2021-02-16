#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[20];
	float media,mensalidade;
	
	printf("Informe o seu nome\nR:");
	scanf("%s",&nome);
	
	printf("informe a sua media\nR:");
	scanf("%f",&media);
	
	printf("informe a sua mensalidade\nR:");
	scanf("%f",&mensalidade);
	             //250
	
	if(media>9 && media<=10){
		mensalidade = mensalidade - (mensalidade*0.15);
		              //250            250 * 0.15
		              //250   -  37.5
		   //212,5           //212,5
		              
		printf("nome: %s \n",nome);
		printf("nova mensalidade: %f",mensalidade);
		                            //212,5
		printf("Conceito: A");
		                            
	}else if(media>7.5 && media<=9.0){
		
	}else if(){
		
	}else if(){
		
	}else{
		
	}
	return 0;
}
