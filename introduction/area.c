#include<stdio.h> /*Input Output, introducir y recuperar elemenmtos por medio
de la terminal de la salida standard*/
#include<math.h> // librería de matematicas
#define PI 3.1416 /* Definiendo una constante, define, algo y un valor*/

int main(){
	float area, radio; // Declarando variables de tipo flotante
	radio = 5; // Asignando valor a variable radio
	area = PI * pow(5,2); // Asignando resultado de la operación a variable área
	printf("Area\n"); // Imprimiendo un titulo (una etiqueta)
	// Imprimiendo un resultado
	printf("Area de Circulo con radio 5: %f", area);
	/* Para imprimir una etiqueta se puede hacer de muchas formas
	printf("%s%f\n\n", "Area de un circulo con radio 5:", area);*/
}
