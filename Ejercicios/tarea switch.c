#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//tarea switchcase.c
/*Hacer que el usuario ingrese los valores que se operarán más adelante
Cambiar las variables enteras a flotantes
Agregar las operaciones de Mulltiplicación, División, Potencia, Raíz cuadrada y Salir
*/
int main()
{
	int opcion;
	float a, b;
	int c;
		
	printf("\nDame el primer numero: ");
	scanf("%f", &a);
	printf("\nDame el segundo numero: ");
	scanf("%f", &b);	
	
    printf("\nValor de a es: %f", a); 
	
	printf("\n\nElige una opcion:\n");
	printf("\t 1.- Suma:\n");
	printf("\t 2.- Resta:\n");
	printf("\t 3.- Multiplicacion:\n");
	printf("\t 4.- Division:\n");
	printf("\t 5.- Potencia:\n");
	printf("\t 6.- Raiz cuadrada:\n");
	printf("\t 7.- Salir:\n");
	scanf("%d",&opcion);
	switch(opcion){ //vamos a recibir un parametro llamado opcion

		case 1: 
			c= a +b;
			printf("La suma es: %f", c);
		break; //Es para romper la estructura de control
		case 2:
			c= a - b;
			printf("La resta es: %f", c); 
		break;
		case 3: 
			c= a * b;
			printf("La multiplicacion es: %f", c);
		break; //Es para romper la estructura de control
		case 4:
			if(b == 0){
				printf("No esta definida la division entre 0\n");
			}else{
			c= a / b;
			printf("La division es: %0.2f", c); 
			}
		break; //salgo del switch
		case 5: 
			c= pow(b,2);
			printf("La potencia de b al cuadrado es: %f", c);
		break; //Es para romper la estructura de control
		case 6: 
			c= sqrt(b);
			printf("La la raiz cuadrada es: %d", c);
		break; //Es para romper la estructura de control
		default:
			printf("No esta puesta correctamente la opcion\n");
		exit(0);
	}
	printf("\nFin de switch");
	return 0;
} 
