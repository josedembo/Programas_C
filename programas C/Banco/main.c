#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float saldo, deposito, saque;
	int n;
	char opcao, decisao;
	
	
	n =1;
	saldo =0;
	
	
		
	while(n!=0){
		
		printf("-----------MENU-------------------\n");
		printf("(a)----Consultar saldo\n");
		printf("(b)----Fazer deposito na conta\n");
		printf("(c)----Fazer um saque na conta\n");
		printf("(d)----Sair do programa\n");
		printf("Escolha uma opcao no menu acima\nR:");
		scanf("%s",&opcao);
		
		switch(opcao){
			
			case 'a':
				printf("Saldo:= %.02f\n",saldo);
				break;
			case 'b':
				printf("Quanto pretende depositar?\nR:");
				scanf("%f",&deposito);
				saldo = saldo +deposito;s
				break;
			case 'c':
				printf("Quanto pretende sacar?\nR:");
				scanf("%f",&saque);
				saldo= saldo -saque;
				break;	
			case 'd':
				n=0;
				break;
			default:
				printf("Opcao nao encontrada\n");		
			
		}
			
	}
	
	return 0;
}
