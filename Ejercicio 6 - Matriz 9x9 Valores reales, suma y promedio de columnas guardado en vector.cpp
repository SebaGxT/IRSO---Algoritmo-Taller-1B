//Cargar en un vector V de dimensión 9 el promedio de las columnas de una matriz de 9x9, previamente cargada con reales. 
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	
	const int FIL=9,COL=9;
	int f,c;
	float mat[FIL][COL],vec[COL],promedio[COL];
	
//Ingreso de datos	
	
	printf("Promedio de valores reales por columna\n\n");
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			printf("\nIngrese un valor real fila %d columna %d: ",f+1,c+1);
			scanf("%f",&mat[f][c]);
			fflush(stdin);
			
		}
		
	}
	
//Proceso

	for(c=0;c<COL;c++){
		
		//Establece vector en 0 para acumular
		vec[c]=0.0;
		
	}
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
		
		//Suma de columnas y asignación en vector	
		vec[c]+=mat[f][c];	
			
		}
		
	}
	
	for(c=0;c<COL;c++){
		
		//Saca promedio por cantidad de filas
		promedio[c]=vec[c]/FIL;
		
	}
	
//Salida de datos

	printf("\n");
	
	//Número de columna
	for(c=0;c<COL;c++){
		
		printf("\t  Columna %d",c+1);
		
	}
	
	for(f=0;f<FIL;f++){
		
		printf("\nFila %d:\t",f+1);
		
		for(c=0;c<COL;c++){
				
			printf("%8.2f\t",mat[f][c]);
			
		}
		
		printf("\n");
		
	}
	
	printf("\n\nPromedio:");
	
	//Resultado de promedio de cada columna
	for(c=0;c<COL;c++){
		
		printf("%8.2f\t",promedio[c]);
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
