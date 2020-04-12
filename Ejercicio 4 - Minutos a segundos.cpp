//Escribir un programa que solicite al usuario un número de minutos y lo convierta a su equivalente en segundos, para luego visualizarlo.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int min,seg;

//Ingreso de datos

	printf("Ingrese la cantidad de minutos que desea convertir en segundos\n");
	printf("\nMinutos: ");
	scanf("%d",&min);
	fflush(stdin);

//Proceso

	seg=min*60;
	printf("\nLa cantidad de segundos es: %d",seg);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
