//Ingresar por teclado valores enteros entre 0 y 100. En el momento que se lea un valor que no cumpla con dichas condiciones deberá interrumpirse el ingreso de datos e imprimir la sumatoria de los valores ingresados.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int num1,sum;
	
//Ingreso de datos

	printf("Ingresar valores entre 0 y 100, se mostrara la suma de valores ingresados v%clidos\n\n",160);

//Proceso

	do{
		
		printf("\nIngrese un valor: ");
		scanf("%d",&num1);
		fflush(stdin);
		
		if((num1>=0) && (num1<=100)){
			
			sum+=num1;
			
		}else{
			
			printf("\n\nFinaliza el programa.");
			printf("\n\nLa suma de los valores ingresados es: %d",sum);
			
		}
		
		
	}while((num1>=0) && (num1<=100));


//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
