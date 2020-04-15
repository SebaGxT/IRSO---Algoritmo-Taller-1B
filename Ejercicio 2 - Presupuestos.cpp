//Se han solicitado presupuestos de un producto a 25 comercios distintos, de los cuales se ingresará el precio de venta. Se desea saber el precio más bajo de dicho producto y cuál es el comercio que lo vende. 
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	float precio,menor;
	int presupuestos,comercio,i;

	
//Ingreso de datos

	printf("Comparaci%cn de valor de presupuestos\n\n",162);
	
	do{
		
		printf("Ingrese cantidad de presupuestos solicitados: ");
		scanf("%d",&presupuestos);
		fflush(stdin);
		
		if(presupuestos<=0){
			
			printf("\nPor favor ingrese valores positivos.\n\n");
			
		}
		
	}while(presupuestos<=0);


//Proceso

	printf("\n\nIngrese los valores con 2 decimales.\n");
	
	do{
	
		
		printf("\nIngrese el presupuesto del comercio 1: ");
		scanf("%f",&precio);
		fflush(stdin);
		
		if(precio<0){
			
			printf("\nPor favor ingrese valores positivos.\n\n");
			
		}
		
	}while(precio<0);
	
	
	//primer ingreso de valor
	menor=precio;
	
	for(i=2;i<=presupuestos;i++){
		
		//Ingresos de presupuestos
		do{
	
			printf("\nIngrese el presupuesto del comercio %d: ",i);
			scanf("%f",&precio);
			fflush(stdin);
		
			if(precio<0){
			
				printf("\nPor favor ingrese valores positivos.\n\n");
			
			}
		
		}while(precio<0);
		
		//comparación de presupuestos
		if(precio<menor){
			
			menor=precio;
			comercio=i;
			
		}
	}

//Salida de datos
	
	printf("\n\nEl precio m%cs bajo es %.2f del comercio %d",160,menor,comercio);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
