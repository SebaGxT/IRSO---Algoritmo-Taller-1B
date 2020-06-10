//Cargar una matriz de enteros de 10x10, sumar todos los elementos de su 5º columna y mostrar el resultado. 
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	const int FIL=10,COL=10;
	int f,c,sum,mat[FIL][COL];

//Ingreso de datos	
	
	printf("Carga de matriz con n%cmeros enteros.\n",163);
	printf("Se mostrara la suma de los valores de la quinta columna\n\n");
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			printf("\nIngrese un valor fila %d columna %d: ",f+1,c+1);
			scanf("%d",&mat[f][c]);
			fflush(stdin);
			
		}
		
	}
	
//Proceso
	
	for(f=0;f<FIL;f++){
		
		sum+=mat[f][4];
		
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
				
			printf("%8d\t",mat[f][c]);
			
		}
		
		printf("\n");
		
	}
	
	printf("\n\nLa suma de la quinta columna es: %d",sum);
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
