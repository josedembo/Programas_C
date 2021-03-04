#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 int sequencia(int k){
	int cont=0;
	
	if(k!=1){
		cont= cont+1;
		
		if(k%2==0){
			k = k/2;
			return (cont + sequencia(k));                      
			        
		}else{
			k = 3*k +1;
			return (cont + sequencia(k));
		}		
	}

}


// função principal 
int main(int argc, char *argv[]) {
	
	int numero, resultado;
	
	printf("informe um numero\nR:");
	scanf("%d",&numero);
	
	resultado = sequencia(numero);
	
	printf("Numero de elementos: %d", resultado);
	
	return 0;
}
