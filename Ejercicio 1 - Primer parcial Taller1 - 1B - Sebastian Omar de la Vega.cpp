/* INSTITUTO RAÚL SCALABRINI ORTIZ (A-859)		FECHA: 06/05/2020-
TECNICATURA SUPERIOR EN ANÁLISIS DE SISTEMAS (RESOL 2016-170-SSPLINED)
TALLER I								1° Año, 1° Cuatrimestre, Com. B
Profesor: Roberto A. San Jorge					Primer Cuatrimestre 2020
EVALUACIÓN PARCIAL		
ALUMNA/O: Sebastian Omar de la Vega
DNI: 38464887
*/ 
/* 1.	Desarrollar un programa que se ingresen por teclado 110 números
reales y a continuación muestre el mayor de ellos y cuál fue su posición. */

//Librerias

#include <stdio.h>
#include <stdlib.h>

//Main

int main(void){

//Variable

	float num1,may=0;
	int i,pos;

//Ingreso de datos
	
	printf("Ingrese n%cmeros reales, indicara cu%cl es el mayor y en que posici%cn ingreso.\n\n",163,160,162);


//Proceso

	for(i=1;i<=110;i++){
		
		printf("\n\nIngrese un valor real: ");
		scanf("%f",&num1);
		fflush(stdin);
		
		if(num1>may){
			
			may=num1;
			pos=i;
			
		}
	}
	
//Salida de datos
	
	printf("\n\nEl mayor valor ingresado es: %.2f en la posici%cn: %d\n\n",may,162,pos);


//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
