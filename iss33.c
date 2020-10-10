#include <stdio.h>

int main(){
	//declarando variaveis
	int metros, centimetros;

	//entrada
	printf("Informe o valor em metros: ");
	scanf("%d", &metros);

	//Processsamento
	centimetros = (metros * 100);

	//saida
	printf("%d metros em centimetros é %d", metros, centimetros);
}
