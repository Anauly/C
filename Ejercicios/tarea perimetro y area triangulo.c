//perimetro y area de un triangulo equilatero a dos decimales

#include<stdio.h>
#include<math.h>

int main (){
	
	float a,b,c,Perimetro,Semiperimetro,Area=0;
	
	printf("Introduce el valor a: \n");
	scanf("%f", &a);
	printf("Introduce el valor b: \n");
	scanf("%f", &b);
	printf("Introduce el valor c: \n");
	scanf("%f", &c);
	
	Perimetro = a+b+c;
	Semiperimetro = Perimetro/2;
	Area=sqrt((Semiperimetro)*(Semiperimetro-a)*(Semiperimetro-b)*(Semiperimetro-c)); 
	
	printf("El Perimetro de un triangulo equilatero es: %0.2f metros\n",Perimetro);
	printf("El Area de un triangulo equilatero es: %0.2f metros cuadrados\n", Area);
	
	
	return 0;
}
