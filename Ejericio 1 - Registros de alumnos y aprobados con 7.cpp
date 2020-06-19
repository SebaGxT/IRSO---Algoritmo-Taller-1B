/*Ingresar los datos de los 60 alumnos de un instituto, número de matrícula, nombre y apellido, cantidad de materias aprobadas y promedio general. Ingresarlos en un registro y luego pasar los datos a un vector de registros. 
Luego mostrar el listado completo, por último, mostrar la lista de los nombres y apellidos de los alumnos que tengan un promedio general de 7 ó más.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estructura
struct reg_alu{
	
	int nmatr,mat_aprob;
	char nombre[50];
	float promedio;
	
};

//Main
int main(){

//Variables
	
	const int ALUMNOS=60;
	reg_alu alumno, reg_alu[ALUMNOS];
	int i,materias,matricula;
	char nombre[50];
	float promedio;
	
//Ingreso de datos
	
	printf("Listado de alumnos\n\n");
	
	for(i=0;i<ALUMNOS;i++){
		
			printf("\nIngrese el nombre y apellido: ");
			gets(alumno.nombre);
			fflush(stdin);
	
		do{
				
			printf("\nIngrese la matricula: ");
			scanf("%d",&alumno.nmatr);
			fflush(stdin);
			
			if(alumno.nmatr<0){
				
				printf("\n\nMatricula inv%clida. Ingrese un valor positivo.\n\n",160);
				
			}		
				
				
		}while(alumno.nmatr<0);
		
		do{
			
			printf("\nIngrese cantidad de materias aprobadas: ");
			scanf("%d",&alumno.mat_aprob);
			fflush(stdin);
			
			if(alumno.mat_aprob<0){
				
				printf("\n\nValor incorrecto. Ingrese un valor positivo.\n\n");
				
			}
			
		}while(alumno.mat_aprob<0);
		
		do{
			
			printf("\nIngrese el promedio general: ");
			scanf("%f",&alumno.promedio);
			fflush(stdin);
			
			if(alumno.promedio<0){
				
				printf("\n\nValor incorrecto. Ingrese un valor positivo.\n\n");
				
			}
			
		}while(alumno.promedio<0);
	
	//Asignación en vector
		
		strcpy(reg_alu[i].nombre,alumno.nombre);
		reg_alu[i].nmatr=alumno.nmatr;
		reg_alu[i].mat_aprob=alumno.mat_aprob;
		reg_alu[i].promedio=alumno.promedio;
		
	}

//Salida de datos
	
	printf("\n\n");
	printf("Matricula\tAlumno\t\t\tMaterias\tPromedio.\n");

	for(i=0;i<ALUMNOS;i++){
		
		printf("\n  %2d\t    %20s %9d\t\t  %.2f",reg_alu[i].nmatr,reg_alu[i].nombre,reg_alu[i].mat_aprob,reg_alu[i].promedio);
		
	}
	
	printf("\n\n");
	printf("Alumnos con promedio mayor o igual a 7.\n\n");	
	
	//Imprimir los que superan el promedio
		
	for(i=0;i<ALUMNOS;i++){
		
		if(reg_alu[i].promedio>=7){
			
			printf("%s\n",reg_alu[i].nombre);
			
		}
		
	}

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;

}
