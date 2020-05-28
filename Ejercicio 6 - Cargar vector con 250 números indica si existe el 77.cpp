//Cargar un vector de enteros de dimensión 250 y luego verificar si se cargó el valor 77. Mostrar el resultado.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	const int V=250;
	int i,vec[V];

//Ingreso de datos	
	
	printf("Ingreso de valores.\n\n");
	
	for(i=0;i<V;i++){
		
		vec[i]=i;
		
	}
	
//Proceso
	
	for(i=0;i<V;i++){
		
		printf("%d \n",vec[i]);
		
	}
	
	
//Salida de datos

	for(i=0;i<V;i++){
		
		if(vec[i]==77){
			
			printf("\n\nEl valor 77 fue cargado\n\n");
			
		}
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
