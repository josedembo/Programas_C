#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char opcao;
	/*
	
	do{
	printf("==============menu===============\n");
	printf("1: cadastrar\n");
	printf("2: listar\n");
	printf("3: atualizar");
	printf("4: remover\n");
	printf("q: sair do programa\n");
	printf("==============menu============\n");
	scanf("%s",&opcao);
	
 	} while(opcao!='q');
	*/
	 

 	printf("==============menu============\n");
	printf("1: cadastrar\n");
	printf("2: listar\n");
	printf("3: atualizar");
	printf("4: remover\n");
	printf("q: sair do programa\n");
	printf("==============menu============\n");
	
	scanf("%s",&opcao);
 	
 	while(opcao!='q'){
 	printf("==============menu============\n");
	printf("1: cadastrar\n");
	printf("2: listar\n");
	printf("3: atualizar");
	printf("4: remover\n");
	printf("q: sair do programa\n");
	printf("==============menu============\n");
	scanf("%s",&opcao);
	 }
	 
	
	system("pause");
	return 0;
}
