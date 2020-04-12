//Desarrollar un programa que imprima los números naturales del 1 al 100.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	const int N=100;
	int i;

//Ingreso de datos

	printf("Tabla de n%cmeros naturales del 1 al 100\n\n",163);
	

//Proceso
	
	for(i=1;i<=N;i++){
		
		printf("%d \t",i);
		
	}

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
