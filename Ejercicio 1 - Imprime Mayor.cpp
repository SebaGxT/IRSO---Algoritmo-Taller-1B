//Escribir un programa que lea 2 enteros e imprima el mayor.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int num1,num2;

//Ingreso de datos

	printf("Ingrese el primer valor: ");
	scanf("%d",&num1);
	fflush(stdin);
	printf("\nIngrese el segundo valor: ");
	scanf("%d",&num2);
	fflush(stdin);

//Proceso

	if(num1>num2){
		
		printf("\nEl primer valor es el mayor\n");
		printf("El valor es: %d",num1);
		
	}else if(num2>num1){
		
		printf("\nEl segundo valor es el mayor\n");
		printf("El valor es: %d",num2);
		
	}

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
