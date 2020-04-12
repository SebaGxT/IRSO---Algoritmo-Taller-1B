/*Escribir un programa que lea un entero x y lo clasifique en una de las siguientes categorías y escriba un mensaje adecuado:
x < 0 o bien 0 <= x <= 100 o bien x > 100 */
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int x;

//Ingreso de datos

	printf("Ingrese el valor de x:");
	scanf("%d",&x);
	fflush(stdin);

//Proceso

	if(x<0){
		
		printf("\nPrimer categoria");
		
	}else if(x>=0 && x<=100){
		
		printf("\nSegunda categoria");
		
	}else{
		
		printf("\nTercer categoria");
		
	}

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
