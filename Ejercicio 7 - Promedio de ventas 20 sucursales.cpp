//Una empresa recibe mensualmente la información sobre las ventas de cada una de sus 20 sucursales. Se desea obtener un listado de aquellas que superan el promedio de las mismas.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	const int V=20;
	int i,sum=0;
	float suc[V],ventas,promedio;

//Ingreso de datos	
	
	printf("Listado de promedio de ventas.\n\n");
	
	for(i=0;i<V;i++){
		
		do{
		
			//Carga de valor	
			printf("Ingrese las ventas de la sucursal %d: ",i+1);
			scanf("%f",&ventas);
			fflush(stdin);
			
			//Verificación de valor positivo, no permite ingresar menos de 0
			if(ventas<0){
				
				printf("Valor incorrecto, ingrese un valor positivo con 2 decimales por favor.\n\n");
				
			}else{
				
				//Carga de vector con valores de ventas
				suc[i]=ventas;
				
			}
			
		}while(ventas<0);
		
		
		
	}
	
//Proceso
	
	for(i=0;i<V;i++){
		
		//Suma
		sum+=suc[i];
		
		
	}
	
	//Calculo de promedio
	promedio=sum/V;
	
	//Mensaje de promedio
	printf("\n\nEl promedio de ventas del mes es: %.2f\n",promedio);
	
	//Verificación de sucursales que superan el promedio
	for(i=0;i<V;i++){
		
		if(suc[i]>promedio){
			
			printf("\nLa sucursal %d supera el promedio con el total de ventas: %.2f",i,suc[i]);
			
		}
		
		
	}
	
//Salida de datos

	
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
