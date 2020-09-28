/* Author: Marcos Antonio Urbanski 27/09/2020
 * This is a exercise from Udemy course "algoritmos-e-logica-de-programacao-essencial" by GeekUniversity.
 * This program was made to calc the average stock for the parts,
 * The variables below, receive the data of the user,
 * Minimum_quantity receive the minimum quantity of parts in the stocks,
 * Max_quantity receive the maximal quantity of parts in the stock.
 * average_stock calc the average stock of parts,
 * adding the variables minimum_quantity and max_quantity divinding per 2.
 * The result of calc is display in the output with the function printf.
 *
 */
#include <stdio.h>

int main(){
	//Declaration of variables;
	int minimum_quantity, max_quantity;
	float average_stock;

	//inputs
	printf("Inform the minimal quantity: ");
	scanf("%d", &minimum_quantity);

	printf("Inform the maximal_quantity: ");
	scanf("%d", &max_quantity);

	//calc
	average_stock = (minimum_quantity + max_quantity)/2;

	//output of calc
	printf("The average stock is: %f", average_stock);



}
