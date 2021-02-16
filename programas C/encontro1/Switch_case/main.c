#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Um programa que recebe do ususario as opcoes a,b,c,d, sendo que para a impra ola, para b, imprima bom dia, para c imprima boa tarde e para d imprima  icerrar o programa*/

int main(int argc, char *argv[]) {
	char opcao;
	
	printf("informe a opcao\nR:");
	scanf("%s",&opcao);
	
	switch(opcao){
		case 'a':
			printf("ola");
			break;
		case 'b':
			printf("bom dia");
			break;
		case 'c':
			printf("boa tarde");
			break;
		case 'd':
			printf("incerrar programa");
			break;
		default:
			printf("opcao nao valida");
	}
	
	return 0;
}
