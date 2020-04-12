/*Escribir un programa que lea una temperatura en grados Centígrados y obtenga la temperatura Fahrenheit equivalente. 
Una temperatura en grados centígrados (Cº) puede ser convertida en a una temperatura en grados Fahrenheit (Fº) formula: F = (C*9.0/5.0)+32.0 */
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	float farenheit,celsius;

//Ingreso de datos

	printf("Conversi%cn Celsius a Farenheit\n\n",162);
	printf("Ingrese la temperatura C%c: ",248);
	scanf("%f",&celsius);
	fflush(stdin);

//Proceso

	farenheit=(celsius*9.0/5.0)+32.0;
	
	printf("\nLa temperatura en grados Farenheit es: %.2f",farenheit);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
