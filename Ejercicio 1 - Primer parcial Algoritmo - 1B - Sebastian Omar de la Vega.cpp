//1.	Realizar un programa en el cual se ingresen valores enteros. En el momento que se ingrese un 0 (cero) deberá interrumpirse el ingreso de datos y mostrar por pantalla la suma de los valores pares ingresados. 
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){

//Variables

	int num1,sum;
	bool valid=true;

//Ingreso de datos

	printf("Ingrese valores enteros, se mostrara la suma de los valores par.\n\n");
	printf("El ingreso de valores finaliza al ingresar 0.\n\n");

//Proceso

	do{
		
		printf("\n\nIngrese un valor: ");
		scanf("%d",&num1);
		fflush(stdin);
		
		if(num1==0){
			
			valid=false;
			
		}
		
		if(num1%2==0){
			
			sum+=num1;
			
		}
		
	}while(valid);


//Salida de datos

	printf("\n\nLa suma de los valores par es: %d",sum);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
