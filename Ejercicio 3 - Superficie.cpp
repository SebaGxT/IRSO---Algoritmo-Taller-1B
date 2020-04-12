//Escribir un programa que solicite al usuario la longitud y el ancho de una habitación y a continuación visualice su superficie con 4 decimales.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables
	
	float longitud,ancho,superficie;

//Ingreso de datos
	
	printf("Por favor ingrese los valores con coma y decimales");
	printf("\nIngrese la longitud del espacio: ");
	scanf("%f",&longitud);
	fflush(stdin);
	printf("\nIngrese el ancho del espacio: ");
	scanf("%f",&ancho);
	fflush(stdin);

//Proceso

	superficie=longitud*ancho;
	
	printf("\nLa superficie es: %.4f",superficie);
	
	
//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
