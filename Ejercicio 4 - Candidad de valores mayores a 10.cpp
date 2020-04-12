//Ingresar 100 enteros y luego mostrar la cantidad de valores ingresados mayores a 10.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int i,num1,cont=0;
	const int N=100;

//Ingreso de datos

	printf("Ingresar n%cmeros enteros, se mostrara la cantidad mayores a 10\n\n",163);
	

//Proceso

	for(i=1;i<=N;i++){
		
		printf("\nIngrese un valor: ");
		scanf("%d",&num1);
		fflush(stdin);
		if(num1>10){
			
			cont++;
			
		}
			
	}

//Salida de datos
	
	printf("\nCantidad de n%cmeros mayores a 10 es: %d",163,num1);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
