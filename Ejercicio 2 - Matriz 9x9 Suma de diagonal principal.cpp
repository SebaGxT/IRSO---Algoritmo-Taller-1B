//Cargar una matriz de enteros de 9x9, sumar todos los elementos de su diagonal y mostrar el resultado. 
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Main
int main(void){
	
	//Números aleatorios
	srand(time(NULL));
	
//Variables

	const int FIL=9,COL=9;
	int f,c,mat[FIL][COL],sum;
	
	sum=0;
	
//Ingreso de datos
	
	printf("Se mostrara la suma de la diagonal de la matriz.\n\n");
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			//Carga en matriz
			mat[f][c]=rand()%1000;
			
		}
		
	}
	
//Proceso
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			if(f==c){
				
				sum+=mat[f][c];
				
			}
			
		}
		
	}

//Salida de datos

	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			printf("%d \t",mat[f][c]);
			
		}
		printf("\n");
	}
	
	printf("\n\nLa suma de los valores diagonal de la matriz es: %d",sum);
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
