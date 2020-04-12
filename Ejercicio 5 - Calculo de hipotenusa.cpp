//La relación entre los lados (a, b) de un triángulo rectángulo y la hipotenusa (h) viene dada por la fórmula a2 + b2 = h2. Escribir un programa que lea la longitud de los lados y calcule la hipotenusa.
//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Main
int main(void){
	
	
//Variables

	int a,b,h;

//Ingreso de datos

	printf("Calculo de hipotenusa\n");
	printf("Ingrese el primer lado del tri%cngulo: ",160);
	scanf("%d",&a);
	fflush(stdin);
	printf("\nIngrese el segundo lado del tri%cngulo: ",160);
	scanf("%d",&b);
	fflush(stdin);
	
//Proceso

	h=pow(a,2)+pow(b,2);
	
//Salida de datos

	printf("\nLa hipotenusa del tri%cngulo es: %d",160,h);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
