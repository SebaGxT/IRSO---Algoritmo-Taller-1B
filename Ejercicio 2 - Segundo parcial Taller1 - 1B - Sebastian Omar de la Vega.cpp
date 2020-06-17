/*Cargar una matriz de enteros de ocho por ocho. Luego poner en un vector la sumatoria de las filas, y en otro vector la sumatoria de las columnas. Calcular también la suma total de todos los valores ingresados.
Por último, mostrar los vectores y el total de la suma.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Main
int main(){

	srand(time(NULL));
	
//Variables
	
	const int FILAS=8,COLUMNAS=8;
	int f,c,mat[FILAS][COLUMNAS],filas[FILAS],columnas[COLUMNAS],total;
	
//Iniciación de variables en 0
	
	for(f=0;f<FILAS;f++){
		
		filas[f]=0;
		
	}
	
	for(c=0;c<COLUMNAS;c++){
		
		columnas[c]=0;
		
	}
	
	total=0;

//Ingreso de datos
	
	printf("Se carga la matriz, se mostrara la suma del total, de las filas y las columnas.\n\n");

	for(f=0;f<FILAS;f++){
		
		for(c=0;c<COLUMNAS;c++){
			
			mat[f][c]=rand()%10;
			
		}
		
	}
	
//Proceso
	
	for(f=0;f<FILAS;f++){
		
		for(c=0;c<COLUMNAS;c++){
			
			total+=mat[f][c];
			filas[f]+=mat[f][c];
			columnas[c]+=mat[f][c];
			
		}
		
	}
	

//Salida de datos
	
	for(f=0;f<FILAS;f++){
		
		for(c=0;c<COLUMNAS;c++){
			
			printf("%d\t",mat[f][c]);
			
		}
		
		printf("\n");
		
	}
	
	for(f=0;f<FILAS;f++){
		
		printf("\nLa suma de la fila %d es: %d",f+1,filas[f]);
		
	}
	
	for(c=0;c<COLUMNAS;c++){
		
		printf("\nLa suma de la columna %d es: %d",c+1,columnas[c]);
		
	}
	
	printf("\nLa suma total es: %d",total);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
