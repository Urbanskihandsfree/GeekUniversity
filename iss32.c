#include <stdio.h>

int main(){
	//Declarando variáveis
	int num1, num2, soma;

	//entradas
	printf("Informe o primeiro número: ");
	scanf("%d", &num1);
	printf("Informe o segundo número: ");
	scanf("%d", &num2);

	//processamento
	soma = (num1 + num2);

	//saida
	printf("A soma é %d", soma);
}
