//Escribir un programa que lea 3 enteros y emita un mensaje que indiquen si están o no en orden numérico creciente.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int num1,num2,num3;

//Ingreso de datos

	printf("Ingrese 3 numeros enteros y se indicara si est%cn en orden creciente\n",160);
	printf("\nIngrese el primer valor: ");
	scanf("%d",&num1);
	fflush(stdin);
	printf("\nIngrese el segundo valor: ");
	scanf("%d",&num2);
	fflush(stdin);
	printf("\nIngrese el tercer valor: ");
	scanf("%d",&num3);
	fflush(stdin);

//Proceso

	if(num3>num2 && num2>num1){
		
		printf("\nLos valores est%cn ordenados en forma creciente\n",160);
		printf("\nLos valores son: \n");
		printf("\nEl primer valor: %d",num1);
		printf("\nEl segundo valor: %d",num2);
		printf("\nEl tercer valor: %d",num3);
		
	}else{
		
		printf("\nLos valores no est%cn ordenados en forma creciente",160);
		
	}

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
