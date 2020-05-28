//Leer las 5 calificaciones (valores enteros entre 1 y 10) de cada uno de los 20 alumnos de un curso de Algoritmos, guardar cada promedio en un vector, e imprimir las posiciones del vector cuyo promedio sea Aprobado (7 o más).
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	const int ALU=20;
	int i,k,calificaciones[ALU],notas,sum=0;
	float promedio;

//Ingreso de datos	
	
	printf("Se mostrara los promediados de 7 o m%cs.\n\n",160);
	
	for(i=0;i<ALU;i++){
		
		for(k=0;k<5;k++){
			
			//Ingreso de notas
			printf("\nIngrese la nota %d del alumno %d: ",k+1,i+1);
			scanf("%d",&notas);
			fflush(stdin);
			
			//Acumulador
			sum+=notas;
			
		}
		
		//Asignación en vector
		calificaciones[i]=sum;
		//Reinicio de acumulador
		sum=0;

	}
	
//Proceso
	
	for(i=0;i<ALU;i++){
		
		//Calculo promedio
		promedio=calificaciones[i]/5;
		
		//Reasignación de nota final
		calificaciones[i]=promedio;
		
	}
	
//Salida de datos

	for(i=0;i<ALU;i++){
		
		if(calificaciones[i]>=7){
			
			printf("\nEl alumno de la posici%cn %d aprobo con la nota %d",162,i+1,calificaciones[i]);
			
		}
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
