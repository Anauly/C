#include<stdio.h> //Input Output
#include<math.h>
#define PI 3.1416 // Definiendo una constante

int main(){
	float area, radio; // Declarando variables de tipo flotante
	radio = 5; // Asignando valor a variable radio
	area = PI * pow(5,2); // Asignando resultado de la operación a variable área
	printf("Area\n"); // Imprimiendo un titulo
	// Imprimiendo un resultado
	printf("Area de Circulo con radio 5: %f", area);
}
