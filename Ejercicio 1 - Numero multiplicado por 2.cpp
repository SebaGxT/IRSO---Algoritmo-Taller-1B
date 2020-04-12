//Escribir un programa que lea un entero, lo multiplique por 2 y a continuación escriba el resultado en la pantalla.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	
	int num,resultado;

//Ingreso de datos

	printf("Ingrese un n%cmero entero: ",163);
	scanf("%d",&num);
	fflush(stdin);
	
//Proceso

	resultado=num*2;
	printf("\nEl resultado es: %d",resultado);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
}
