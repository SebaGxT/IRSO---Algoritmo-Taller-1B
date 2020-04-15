//Ingresar valores enteros positivos. En el momento que se lea un valor que no cumpla con dichas condiciones deberá interrumpirse el ingreso de datos e imprimir la cantidad y la sumatoria de los valores pares ingresados. 
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int num1,cantpar=0,total=0;
	
	
//Ingreso de datos

	printf("Ingrese valores positivos\n\n");
	

//Proceso

	do{
		
		printf("\nIngrese un valor: ");
		scanf("%d",&num1);
		fflush(stdin);
		
		if(num1>0){
			
			if(num1%2==0){
				
				cantpar++;
				total+=num1;
				
			}
			
		}
		
	}while(num1>0);
	
//Salida de datos

	printf("\n\nLa cantidad de n%cmeros par ingresados es: %d",163,cantpar);
	printf("\n\nLa suma de los n%cmeros par es: %d",163,total);


//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
