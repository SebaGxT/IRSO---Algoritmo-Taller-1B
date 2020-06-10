//Cargar una matriz de reales de 12x8, sumar todos los elementos de su 3º fila y mostrar el resultado. 
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	const int FIL=12,COL=8;
	int c,f;
	float mat[FIL][COL],sum;
	
	sum=0.0;

//Ingreso de datos	
	
	printf("Carga de matriz con n%cmeros reales.\n",163);
	printf("Se mostrara la suma de los valores de la tercer fila\n\n");
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			printf("\nIngrese un valor fila %d columna %d: ",f+1,c+1);
			scanf("%f",&mat[f][c]);
			fflush(stdin);
				
		}
		
	}
	
//Proceso
	
	for(c=0;c<COL;c++){
		
		sum+=mat[2][c];
		
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
	
	printf("\n\nLa suma de la tercer fila es: %.2f",sum);
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
