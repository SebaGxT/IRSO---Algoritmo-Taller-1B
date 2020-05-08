/* INSTITUTO RAÚL SCALABRINI ORTIZ (A-859)		FECHA: 06/05/2020-
TECNICATURA SUPERIOR EN ANÁLISIS DE SISTEMAS (RESOL 2016-170-SSPLINED)
TALLER I								1° Año, 1° Cuatrimestre, Com. B
Profesor: Roberto A. San Jorge					Primer Cuatrimestre 2020
EVALUACIÓN PARCIAL		
ALUMNA/O: Sebastian Omar de la Vega
DNI: 38464887
*/ 
/*3.	En un supermercado han pasado 80 clientes por la caja, ingresar la cantidad de productos que compró 
y luego el costo de cada uno de esos productos. Calcular y mostrar el gasto total de cada cliente y el promedio 
de lo gastado por los 80 clientes.  */

//Librerias

#include <stdio.h>
#include <stdlib.h>

//Main

int main(void){


//Variables

 int i,i2,producto,clientes=80;
 float costo,promediototal,gastototal=0,suma=0;

//Ingreso de datos

	printf("Se calculara el gasto por cliente y promedio total.\n\n");

//Proceso

	for(i=1;i<=clientes;i++){
		
		//cantidad de productos que compra cada cliente
		do{
			
			printf("\n\nIngrese cantidad de productos del cliente %d: ",i);
			scanf("%d",&producto);
			fflush(stdin);
			
			if(producto<=0){
				
				printf("\n\nValor ingresado incorrecto. Ingrese un valor positivo.\n\n");
				
			}
			
		}while(producto<=0);
		
		
		//valor de cada producto del cliente actual
		for(i2=1;i2<=producto;i2++){
			
			do{
				
				printf("\n\nIngrese el valor del producto %d: ",i2);
				scanf("%f",&costo);
				fflush(stdin);
			
				if(costo<=0){
					
					printf("\n\nValor ingresado incorrecto. Ingrese un valor positivo.\n\n");
					
				}
				
			}while(costo<=0);
			
			
			//suma total de la compra del cliente actual
			suma+=costo;
			
			
			
		}
		
		//gasto total del cliente actual
		printf("\n\nEl total del gasto del cliente %d es: %.2f",i,suma);
		
		//suma del gasto total de todos los clientes
		gastototal+=suma;
		suma=0;
	}

	//promedio de gasto de las compras de todos los clientes
	promediototal=gastototal/clientes;

//Salida de datos
	
	printf("\n\nEl promedio de gasto del total de clientes es: %.2f",promediototal);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
