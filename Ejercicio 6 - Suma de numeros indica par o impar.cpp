//Escribir un programa que lea cuatro números enteros, los sume y aclare si esa suma es par o impar.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int num1,num2,num3,num4, resultado;

//Ingreso de datos

	printf("Se indicara si el resultado del proceso es n%cmero par o impar\n",163);
	printf("Ingrese el primer valor: ");
	scanf("%d",&num1);
	fflush(stdin);
	printf("\nIngrese el segundo valor: ");
	scanf("%d",&num2);
	fflush(stdin);
	printf("\nIngrese el tercer valor: ");
	scanf("%d",&num3);
	fflush(stdin);
	printf("\nIngrese el cuarto valor: ");
	scanf("%d",&num4);
	fflush(stdin);
	
//Proceso

	resultado=num1+num2+num3+num4;
	if(resultado%2==0){
		
		printf("\nEl resultado es n%cmero par",163);
		
	}else{
		
		printf("\nEl resultado es n%cmero impar",163);
		
	}

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
