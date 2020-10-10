#include <stdio.h>

int main(){
	//Variaveis
	int numero, a, b;

	//Entrada
	printf("Informe um número: ");
	scanf("%d", &numero);

	//Processamento
	if(numero > 0){
		a = numero;
		printf("O %d número é positivo.", numero);
	}else{
		b = 0;
		printf("O %d número é negativo.", numero);
	}
}
