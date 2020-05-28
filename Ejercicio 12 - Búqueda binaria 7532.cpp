//Cargar un vector de enteros de dimensión 200, ordenarlo en forma ascendente, realizar una búsqueda binaria del valor 7532 e imprimir si se encuentra o no dicho valor.
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Main
int main(void){
	
//Variables

	const int N=200;
	int i,k,vec[N],aux,inf,sup,mitad,dato;
	bool valid=false;
	
//Carga de valores aleatorios
	srand(time(NULL));

//Ingreso de datos	
	
	printf("Se cargan 200 n%cmeros de forma ascendente, se indicara si se encuentra el valor 7532.\n\n",163);
	
	//Asignación de valores en vector
	for(i=0;i<N;i++){
		
		vec[i]=rand()%10000;
		
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
	
	//Búsqueda Binaria
	
	inf=0;
	sup=N;
	dato=7532;
	
	while(inf<=sup){
		
		mitad=(inf+sup)/2;
		
		if(vec[mitad]==dato){
			
			valid=true;
			break;
			
		}
		
		if(vec[mitad]>dato){
			
			sup=mitad;
			mitad=(inf+sup)/2;
			
			if(mitad==sup && mitad!=dato){
				
				break;
				
			}
	
		}
		
		if(vec[mitad]<dato){
			
			inf=mitad;
			mitad=(inf+sup)/2;
			
			if(mitad==inf && mitad!=dato){
				
				break;
				
			}
			
		}
		
	}
	
//Salida de datos

	if(valid){
		
		printf("\n\nSe encontro el valor 7532.\n\n");
		
	}else{
		
		printf("\n\nNo se encontro el valor 7532.\n\n");
		
	}
	
	//Muestra por pantalla el listado
	printf("Listado de n%cmeros.\n\n",163);
	
	for(i=0;i<N;i++){
		
		printf("%d \n",vec[i]);
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
