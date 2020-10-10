#include <stdio.h>

int main(){
	//Variaveis
	int n;

	//Entrada
	printf("Informe um número: ");
	scanf("%d", &n);

	//Processamento
	if(n > 100){
		printf("%d", n);
	}else{
		n = 0;
		printf("%d", n);
	}
}
