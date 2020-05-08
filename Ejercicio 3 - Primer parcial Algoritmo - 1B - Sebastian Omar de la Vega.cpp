/*3.	En la materia Algoritmos se tiene una comisión de 25 alumnos a los cuales se les tomaron 5 exámenes. Ingresar las notas de cada alumno, y 
de acuerdo con su promedio mostrar por pantalla "Aprobó" o "Desaprobó". Además, mostrar las cantidades de aprobados y desaprobados.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){

//Variables

	int i,k,alumnos=25,nota,sum,examen=5,aprobados=0,desaprobados=0;
	float prom;

//Ingreso de datos

	printf("Ingrese valores enteros para las notas de los alumnos por favor.\n\n");

//Proceso

	for(i=1;i<=alumnos;i++){
		
		printf("Ingrese las notas del alumno %d\n\n",i);
		
		for(k=1;k<=examen;k++){
			
			printf("\nNota del examen %d: ",k);
			scanf("%d",&nota);
			fflush(stdin);
			
			sum+=nota;
			
		}
		
		prom=sum/examen;
		
		if(prom>=4){
			
			printf("\n\nEl alumno %d: Aprobo\n\n",i);
			aprobados++;
			
		}else{
			
			printf("\n\nEl alumno %d: Desaprobo\n\n",i);
			desaprobados++;
			
		}
		
	}

//Salida de datos

	printf("\n\nLa cantidad de alumnos aprobados es: %d\n\n",aprobados);
	printf("\n\nLa cantidad de alumnos desaprobados es: %d\n\n",desaprobados);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
