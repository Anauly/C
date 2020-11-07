//ejercicios dias segundos

#include<stdio.h>

int main(){
	//Declaracion de variables
	int dias;
	float resultado;
	//Instrucciones para el usuario
	printf("Ingresa un numero de dias para calcular los segundos que tiene: ");
	
	//Leemos la variable dias
	scanf("%d",&dias);
	resultado = dias * (24 * 60 *60);
	printf("\tEn %d dias hay %0.2f segundos.\n", dias, resultado);
	
	
	return 0;
}
