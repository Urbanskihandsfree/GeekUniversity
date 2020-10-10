#include <stdio.h>

int main(){
	//Declarando as variáveis
	float altura, peso_ideal;

	//entradas
	printf("Qual sua altura? ");
	scanf("%f", &altura);

	//Processamento
	peso_ideal = (72 * altura) - 58;

	//saida
	printf("Seu peso ideal seria %.2f", peso_ideal);

}
