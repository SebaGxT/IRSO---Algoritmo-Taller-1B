//Cargar un vector con los primeros 100 números naturales y luego mostrarlo por pantalla.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	const int N=100;
	int i;
	int vec[N];

//Ingreso de datos	
	
	for(i=0;i<N;i++){
		
		vec[i]=i+1;
		
	}
	
//Proceso y Salida de datos
	
	printf("Los primeros 100 n%cmeros naturales\n\n",163);
	
	for(i=0;i<N;i++){
		
		printf("%d\t",vec[i]);
		
	}
	
	
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
