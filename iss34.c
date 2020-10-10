#include <stdio.h>

int main(){
	//Declarando as variáveis
	float valor_por_hora, salario;
	int horas_trabalhadas;

	//entradas
	printf("Qual valor você ganha por hora? ");
	scanf("%f", &valor_por_hora);

	printf("Quantas horas você trabalhou neste mês? ");
	scanf("%d", &horas_trabalhadas);

	//Processamento
	salario = (horas_trabalhadas * valor_por_hora);

	//saida
	printf("Neste mês você vai receber R$ %.2f", salario);


}
