#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,quant_Termos, Sinal;
	float numerador,denominador,s;
	
	printf("informe quantidade de termos");
	scanf("%d",&quant_Termos);
	
	numerador =1;
	denominador =2;
	Sinal = 1;
	s =0;
	
	for(i=1;i<=quant_Termos;i++){
		s = s + ((numerador/denominador)*(Sinal));
		Sinal = Sinal *(-1);
		
		numerador+=1;
		denominador+=1;
	}
	
    printf("s = %f",s);
	
	return 0;
}
