/* INSTITUTO RA�L SCALABRINI ORTIZ (A-859)		FECHA: 06/05/2020-
TECNICATURA SUPERIOR EN AN�LISIS DE SISTEMAS (RESOL 2016-170-SSPLINED)
TALLER I								1� A�o, 1� Cuatrimestre, Com. B
Profesor: Roberto A. San Jorge					Primer Cuatrimestre 2020
EVALUACI�N PARCIAL		
ALUMNA/O: Sebastian Omar de la Vega
DNI: 38464887
*/ 
/*2.	En la materia Taller I se han tomado 38 ex�menes, ingresar la nota de 
cada uno de ellos sabiendo que puede estar entre 1(uno) y 10(diez), y mostrar 
cu�ntes alumnes han obtenido una nota de promoci�n, o sea, 7(siete) � m�s. */

//Librerias

#include <stdio.h>
#include <stdlib.h>

//Main

int main(void){

//Variables

	int i,nota,cont=0;
	

//Ingreso de datos

	printf("Ingrese las notas de 1 a 10 de cada alumno y se mostrara cuantos promocionaron.\n\n");

//Proceso

	for(i=1;i<=38;i++){
	
		do{
		
			printf("\n\nIngrese la nota del alumno %d: ",i);
			scanf("%d",&nota);
			fflush(stdin);
			
			if( (nota<1) || (nota>10)){
				
				printf("\n\nNota inv%clida, porfavor vuelva a ingresar la nota...\n",160);
				
			}
		
		}while( (nota<1) || (nota>10) ); 	
		
		
		if(nota>=7){
			
			cont++;
			
		}
		
	}

//Salida de datos

	printf("\n\nLa cantidad de alunmos promocionados es: %d",cont);


//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
