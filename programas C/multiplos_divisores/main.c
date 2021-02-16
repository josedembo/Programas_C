#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int numeroDeMultiplos(int n1, int n2){
	int numeroMenor, numeroMaior, i;
	int mult_menorNumero, cont_div;
	
	if(n1>n2){
		numeroMaior = n1;
		numeroMenor = n2;
	}else{
		numeroMaior = n2;
		numeroMenor = n1;
	}
	
	cont_div = 0;
	for(i=1; i<=numeroMaior;i++){
		
		if(i%numeroMenor==0){
			mult_menorNumero = i;
			if(numeroMaior%mult_menorNumero==0){
				cont_div =cont_div+1;
			}
		}
		
	}
	
	return (cont_div);
}

int main(int argc, char *argv[]) {
	int n1,n2,resultado;
	
	printf("Informe o primeiro valor\nR:");
	scanf("%d",&n1);
	printf("Informe o segundo numero\nR:");
	scanf("%d",&n2);
	
	resultado = numeroDeMultiplos(n1,n2);
	
	printf("quantidade de divisores = %d",resultado);
	
	return 0;
}
