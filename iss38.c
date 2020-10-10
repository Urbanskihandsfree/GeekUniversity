#include <stdio.h>

int main(){
	//Variaveis
	int numero, p = 0, i = 0;

	//Entrada
	printf("Informe um número: ");
	scanf("%d", &numero);

	//Processamento
	if(numero % 2 == 0){
		p= numero;
		printf("O %d número é par.", numero);
	}else{
		i = numero;
		printf("O %d número é impar.", numero);
	}
}
