//Desarrollar un programa que lea 40 números y a continuación muestre el mayor de los 40.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int i,num1,may;
	const int N=40;
	
//Ingreso de datos

	printf("Ingresar valores, se mostrara el mayor ingresado\n\n");
	

//Proceso

	for(i=1;i<=N;i++){
		
		printf("\nIngrese un valor: ");
		scanf("%d",&num1);
		fflush(stdin);
		if(num1>may){
			
			may=num1;
			
		}
		
	}
	
//Salida de datos
	
	printf("\nEl mayor n%cmero ingresado es: %d",163,may);
	


//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
