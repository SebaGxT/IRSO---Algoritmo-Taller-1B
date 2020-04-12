//Escribir un programa que lea 2 valores enteros y los guarde en las variables A y B respectivamente. Permutar los valores guardados en A y B, y luego imprimir el resultado.
//Librerias
#include<stdio.h>
#include<stdlib.h>

//Main
int main(void){
	
//Variables

	int A,B,C;

//Ingreso de datos
	
	printf("Ingrese el valor de A: ");
	scanf("%d",&A);
	fflush(stdin);
	printf("\nIngrese el valor de B: ");
	scanf("%d",&B);
	fflush(stdin);

//Proceso

	C=A;
	A=B;
	B=C;
	
	printf("\nLos valores ingresados son los siguiente: ");
	printf("\nEl valor de A: %d",A);
	printf("\nEl valor de B: %d",B);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
