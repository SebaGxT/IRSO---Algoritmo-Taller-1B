/*Se tiene un curso de 35 alumnos y por fin de cuatrimestre se necesita procesar los
datos de sus notas en los 5 parciales efectuados. Las notas son de 1 a 10, siendo 0 para
el ausente. Para aprobar la cursada se necesita aprobar al menos 3 parciales. Se pide:
a. Promedio de cada uno de los 5 parciales por alumno.
b. Verificar si aprueba o no la cursada sacando un listado.
c. Promedio general de todos los parciales del curso. 
*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	const int FIL=35,COL=5;
	int f,c,mat[FIL][COL],ausente;
	float promedio[FIL],promediototal;

//Ingreso de datos	
	
	//Inicio de variables en cero**************
	for(f=0;f<FIL;f++){
		
		promedio[f]=0.0;
		
	}
	
	promediototal=0.0;
	ausente=0;
	
	//*****************************************
	
	printf("Fin de cuatrimestre, Listado de aprobados.\n\n");
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			do{
				
				printf("\nIngrese la nota %d del alumno %d: ",c+1,f+1);
				scanf("%d",&mat[f][c]);
				fflush(stdin);
				
				if(mat[f][c]<0 || mat[f][c]>10){
					
					//Mensaje de nota inválida
					printf("\n\nNota inv%clida, debe ingresar una nota del 1 al 10 o 0 para ausente.\n\n",160);
					
				}
		
			}while((mat[f][c]<0)||(mat[f][c]>10));
			
		}
		
	}
	
//Proceso

	//Promedio de cada alumno y general ********************************
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			if(mat[f][c]==0){
				
				ausente++;
				
			}else{
				
				//Suma de filas
				promedio[f]+=mat[f][c];	
				
			}
			
		}
		
		if(ausente>=3 && c==COL){
			
			promedio[f]=0.0;
			
		}else{
			
			//Suma de total
			promediototal+=promedio[f];	
			
		}
		
	}
	
	for(f=0;f<FIL;f++){
		
		//Calculo de promedio
		promedio[f]=promedio[f]/COL;
		
	}
	
	//Calculo de promedio total
	promediototal=promediototal/COL;

	//******************************************************************
		
//Salida de datos

	for(f=0;f<FIL;f++){
		
		if(promedio[f]==0.0){
			
			printf("\nEl alumno %d no aprobo por tener 3 o m%cs ausentes.",f+1,160);
			
		}else if(promedio[f]<4){
			
			printf("\nEl alumno %d no aprobo. Su nota es: %.2f",f+1,promedio[f]);
			
		}else if(promedio[f]<7){
			
			printf("\nEl alumno %d aprobo. Su nota es: %.2f",f+1,promedio[f]);
			
		}else{
			
			printf("\nEl alumno %d promociono. Su nota es: %.2f",f+1,promedio[f]);
			
		}
		
	}
	
	printf("\n\nEl promedio de todos los parciales es: %.2f",promediototal);
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
