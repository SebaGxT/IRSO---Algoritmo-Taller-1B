//Cargar una matriz de enteros de 7x7 con valores no positivos, luego mostrar la matriz.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	const int FIL=7,COL=7;
	int f,c,mat[FIL][COL];

//Ingreso de datos	
	
	printf("Carga de matriz con valores negativos.\n\n");
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){

//Proceso
			
			do{
				
				printf("\nIngrese un valor negativo fila %d columna %d: ",f+1,c+1);
				scanf("%d",&mat[f][c]);
				fflush(stdin);
				
				if(mat[f][c]>=0){
					
					printf("\n\nDebe ingresar n%cmeros negativos por favor.\n\n",163);
					
				}
				
			}while(mat[f][c]>=0);
			
		}
				
	}
		
//Salida de datos
	
	printf("\n\n");
	printf("\t");
	
	for(c=0;c<COL;c++){
		
		printf("Columna %d\t",c+1);
		
	}
		
	for(f=0;f<FIL;f++){
		
		printf("\nFila %d: ",f+1);
		
		for(c=0;c<COL;c++){
		
			printf("%5d \t\t",mat[f][c]);
			
		}
			
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
