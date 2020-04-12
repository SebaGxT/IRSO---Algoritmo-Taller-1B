//Leer 100 números enteros e imprimir la suma de ellos.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int sum=0,i;
	const int N=100;

//Ingreso de datos

	printf("Se lee n%cmeros y se muestra su suma\n\n",163);


//Proceso
	
	for(i=1;i<=N;i++){
		
		sum+=i;
		
	}
	
//Salida de datos

	printf("La suma de los n%cmeros es: %d",163,sum);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
