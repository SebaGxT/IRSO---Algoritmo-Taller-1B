//Ingresar el nombre de tres materias que esté cursando y luego mostrar por pantalla esas materias ordenadas alfabéticamente. strcmp()
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Main
int main(void){
	
//Variables
	
	int orden1,orden2,orden3;
	char mate1[20],mate2[20],mate3[20];

//Ingreso de datos	
	
	printf("Se mostraran las materias ordenadas alfab%cticamente.\n\n",130);
	
	printf("Ingrese la materia 1: ");
	gets(mate1);
	fflush(stdin);
	printf("\nIngrese la materia 2: ");
	gets(mate2);
	fflush(stdin);
	printf("\nIngrese la materia 3: ");
	gets(mate3);
	fflush(stdin);
	
//Proceso
	
	orden1=strcmp(mate1,mate2);
	orden2=strcmp(mate1,mate3);
	orden3=strcmp(mate2,mate3);
	
//Salida de datos

	if(orden1==0 && orden3==0){
		
		printf("\n\nTodas las materias son iguales.\n\n");
		printf("Materia: %s",mate1);
		
	}else if(orden1==-1 && orden3==-1){
		
		printf("\n\nLa materia 1 viene primero: %s",mate1);
		printf("\n\nLa materia 2 viene segundo: %s",mate2);
		printf("\n\nLa materia 3 viene tercero: %s",mate3);
		
	}else if(orden2==-1 && orden3==1){
		
		printf("\n\nLa materia 1 viene primero: %s",mate1);
		printf("\n\nLa materia 3 viene segundo: %s",mate3);
		printf("\n\nLa materia 2 viene tercero: %s",mate2);
		
	}else if(orden1==1 && orden2==-1 ){
		
		printf("\n\nLa materia 2 viene primero: %s",mate2);
		printf("\n\nLa materia 1 viene segundo: %s",mate1);
		printf("\n\nLa materia 3 viene tercero: %s",mate3);
		
	}else if(orden3==-1 && orden2==1){
		
		printf("\n\nLa materia 2 viene primero: %s",mate2);
		printf("\n\nLa materia 3 viene segundo: %s",mate3);
		printf("\n\nLa materia 1 viene tercero: %s",mate1);
		
	}else if(orden2==1 && orden1==-1){
		
		printf("\n\nLa materia 3 viene primero: %s",mate3);
		printf("\n\nLa materia 1 viene segundo: %s",mate1);
		printf("\n\nLa materia 2 viene tercero: %s",mate2);
		
	}else{
		
		printf("\n\nLa materia 3 viene primero: %s",mate3);
		printf("\n\nLa materia 2 viene segundo: %s",mate2);
		printf("\n\nLa materia 1 viene tercero: %s",mate1);
	
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
