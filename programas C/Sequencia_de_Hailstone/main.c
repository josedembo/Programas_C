#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float saldo,deposito, saque;
	char opcao; 
	
	saldo = 0;
	do{
		
	printf("=============MENU=========\n");
	printf("=======(a)Consultar saldo\n");
	printf("=======(b)Desposito na conta\n");
	printf("=======(c)Fazer um saque na conta\n");
	printf("=======(d)Sair do programa\n");

	scanf("%s",&opcao);
	
	switch(opcao){
		
		case 'a':
			printf("saldo = %.02f\n", saldo);
			break;
		case 'b':
			printf("quanto quer depositar?\n");
			scanf("%f",&deposito);
			saldo = saldo + deposito;
			break; 
		case 'c':
			printf("quanto quer sacar?\n");
			scanf("%f",&saque);
			saldo = saldo - saque;
			break;
		case 'd':
			printf("Fim da operacao\n");
			break;
		default:
			printf("opcao nao encontrada\n");
				
	}
		
	}while(opcao!='d'); 
	
	return 0;
}
