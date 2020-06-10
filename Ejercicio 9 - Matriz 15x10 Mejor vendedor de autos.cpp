/*Una agencia de venta de vehículos distribuye 15 modelos diferentes y tiene en su
plantilla 10 vendedores. Desarrollar un programa que luego de ingresar la cantidad de
ventas por modelo y por vendedor muestre un informe completo de las ventas, así como
el número de vehículos vendido por cada vendedor y el número total de cada modelo
vendido. Asimismo, para entregar el premio al mejor vendedor se necesita saber cuál es
el vendedor que más automóviles ha vendido.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	
	const int FIL=15,COL=10;
	int f,c,mat[FIL][COL],ventasmod[FIL],ventasvend[COL],aux,mayor;
	
	//Inicio en 0
	for(f=0;f<FIL;f++){
		
		ventasmod[f]=0;
		
	}
	
	for(c=0;c<COL;c++){
		
		ventasvend[c]=0;
		
	}
	
	mayor=0;

//Ingreso de datos	

	printf("Agencia de ventas - Ventas del mes\n\n");
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			do{
				
				printf("\nIngrese ventas del vendedor %d modelo de auto %d: ",c+1,f+1);
				scanf("%d",&mat[f][c]);
				fflush(stdin);
				
				if(mat[f][c]<0){
					
					printf("\n\nIngrese un valor positivo.");
					
				}				
				
			}while(mat[f][c]<0);
			
		}
		
	}
	
//Proceso
	
	//Ventas total de cada modelo de automovil - ventas total de cada vendedor
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			ventasmod[f]+=mat[f][c];
			ventasvend[c]+=mat[f][c];
			
		}
		
	}
	
	for(c=0;c<COL;c++){
		
		if(ventasvend[c]>mayor){
			
			mayor=c;
			
		}
				
	}
			
//Salida de datos

	//ventas
	printf("\n\n");
	printf("\t\t\t");
	
	for(c=0;c<COL;c++){
		
		printf("Vendedor %d  ",c+1);
		
	}
	
	printf("\n");
	
	for(f=0;f<FIL;f++){
		
		printf("\nModelos Automovil %d: ",f+1);
		
		for(c=0;c<COL;c++){
		
			printf("%10d",mat[f][c]);
		
		}	
		
		printf("\n");
		
	}
	
	for(f=0;f<FIL;f++){
		
		printf("\n\nLas ventas totales del modelo %d: %d",f+1,ventasmod[f]);
		
	}
	
	for(c=0;c<COL;c++){
		
		printf("\n\nLas ventas totales del vendedor %d: %d",c+1,ventasvend[c]);
		
	}
		
	printf("\n\nEl premio al mejor vendedor es para el vendedor %d",mayor+1);
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
