#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char opcao[5];
	int questao[5];
	int cont, cont2;
	
	cont = 0;
	while(cont < 5){
	
	printf("Infrome o numero da questao: ");
	scanf("%d", &questao[cont]);
	
	printf("Informe a opcao correta: ");
	scanf("%s", &opcao[cont]);
	cont += 1;
	}
	
	cont2 = 0;
	while(cont2 < 5){
		switch (questao[cont2]){
			case 1 :
				if(opcao[cont2] == 'a'){
					printf("questao %d: resposta correta = %c, PARABENS\n", questao[cont2], opcao[cont2]);
					break;
				}else{
					printf("questao %d: resposta Incorreta, correta = a   \n", questao[cont2]);
					break;
				}
			case 2 :
				if(opcao[cont2] == 'c'){
					printf("questao %d: resposta correta = %c, PARABENS\n", questao[cont2], opcao[cont2]);
					break;
				}else{
					printf("questao %d: resposta Incorreta, correta = a   \n", questao[cont2]);
					break;
				}
			case 3 :
				if(opcao[cont2] == 'd'){
					printf("questao %d: resposta correta = %c, PARABENS\n", questao[cont2], opcao[cont2]);
					break;
				}else{
					printf("questao %d: resposta Incorreta, correta = a  \n", questao[cont2]);
					break;
				}
			case 4 :
				if(opcao[cont2] == 'a'){
					printf("questao %d: resposta correta = %c, PARABENS\n", questao[cont2], opcao[cont2]);
					break;
				}else{
					printf("questao %d: resposta Incorreta, correta = a   \n", questao[cont2]);
					break;
				}
			case 5 :
				if(opcao[cont2] == 'e'){
					printf("questao %d: resposta correta = %c, PARABENS\n", questao[cont2], opcao[cont2]);
					break;
				}else{
					printf("questao %d: resposta Incorreta, correta = a   \n", questao[cont2]);
					break;
				}
		}
		cont2 += 1;
	}
	return 0;
}
