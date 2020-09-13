/*Cargar una matriz de enteros de ocho por ocho. Luego poner en un vector la sumatoria de las filas, y en otro vector la sumatoria de las columnas. Calcular también la suma total de todos los valores ingresados.
Por último, mostrar los vectores y el total de la suma.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define F 8
#define C 8


void cargarmat(int mat[][C]){
		
		srand(time(NULL));
		
		int i,j;
		
		for(i=0;i<F;i++){
			
			for(j=0;j<C;j++){
				
				mat[i][j]=rand()%100;
				
			}
			
		}
			
}

void imprimir(int mat[][C]){
	
	int i,j;
	
	for(i=0;i<F;i++){
		
		for(j=0;j<C;j++){
			
			printf("%d\t",mat[i][j]);
			
		}
		
		printf("\n");
		
	}
	
}

void sumfilmat(int mat[][C]){
	
	int i,j,fil;
	
	for(i=0;i<F;i++){
		
		fil=0;
		
		for(j=0;j<C;j++){
			
			fil+=mat[i][j];
			
		}
		
		printf("\nLa suma de la fila %d es: %d",i+1,fil);
		
	}
	
}

void sumcolmat(int mat[][C]){
	
	int i,j,col[C];
	
	for(j=0;j<C;j++){
		
		col[j]=0;
		
	}
	
	for(i=0;i<F;i++){
		
		for(j=0;j<C;j++){
			
			col[j]+=mat[i][j];	
			
		}	
					
	}
	
	for(j=0;j<C;j++){
		
		printf("\nLa suma de la columna %d es: %d",j+1,col[j]);
		
	}
	
	
}

void sumtotmat(int mat[][C]){
	
	int f,c,total=0;
	
	for(f=0;f<F;f++){
		
		for(c=0;c<C;c++){
			
			total+=mat[f][c];
			
		}
		
	}
	
	printf("\nLa suma total es: %d",total);
	
}


//Main
int main(){

//Variables
	
	const int FILAS=8,COLUMNAS=8;
	int f,c,mat[FILAS][COLUMNAS];

//Ingreso de datos
	
	printf("Se carga la matriz, se mostrara la suma del total, de las filas y las columnas.\n\n");

	cargarmat(mat);
	

//Salida de datos
	
	imprimir(mat);
	sumfilmat(mat);
	sumcolmat(mat);
	sumtotmat(mat);
	

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}


