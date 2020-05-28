//Cargar un vector de enteros de dimensión 150, ordenarlo en forma ascendente e imprimir el resultado.
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Main
int main(void){
	
//Variables
	
	const int N=150;
	int i,k,vec[N],aux;

//Carga de valores aleatorios
	srand(time(NULL));

//Ingreso de datos	
	
	printf("Se mostraran 150 n%cmeros enteros aleatorios en forma ascendente.\n\n",163);
	
	//Asignación de valores aleatorios
	for(i=0;i<N;i++){

		vec[i]=rand();
		
	}
	
//Proceso

	//Ordenamiento de valores en vector
	for(i=0;i<N;i++){
		
		for(k=0;k<N;k++){
			
			if(vec[k]>vec[k+1]){
				
				aux=vec[k];
				vec[k]=vec[k+1];
				vec[k+1]=aux;
				
			}
			
		}
			
	}	
	
//Salida de datos

	for(i=0;i<N;i++){
		
		printf("%d \n",vec[i]);
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
