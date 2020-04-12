/*En la materia Algoritmos se tiene una comisión de 25 alumnos a los cuales se les tomaron 5 exámenes. Ingresar las notas de cada alumno, y de acuerdo a su
 promedio mostrar por pantalla “Aprobó” o “Desaprobó”. Además, mostrar las cantidades de aprobados y desaprobados.*/
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	
	int alumno,nota1,nota2,nota3,nota4,nota5,aprob=0,desaprob=0,i,k;
	float promedio;

	
//Ingreso de datos

	printf("Se indicara si el alumno aprobo o desaprobo de acuerdo al promedio. Tambi%cn se mostrara los totales de aprobados y desaprobados\n\n",130);
	
	do{
		
		printf("\nIngrese cantidad de alumnos de la comisi%cn: ",162);
		scanf("%d",&alumno);
		fflush(stdin);
		
		if(alumno<=0){
			
			printf("\nIngrese un valor mayor a 0...");
			
		}
		
	}while(alumno<=0);
	
	

//Proceso

	
	for(i=1;i<=alumno;i++){
		for(k=1;k<=5;k++){
			printf("\nIngrese el valor de la nota %d: ",k);
		switch(k){
			
			case 1:
				
				scanf("%d",&nota1);
				
				break;
				
			case 2:
				
				scanf("%d",&nota2);
				
				break;
				
			case 3:
				
				scanf("%d",&nota3);
				
				break;
				
			case 4:
				
				scanf("%d",&nota4);
				
				break;
				
			case 5:
				
				scanf("%d",&nota5);
				
				break;
			
		}
		
		fflush(stdin);
		}
		
		
		promedio=(nota1+nota2+nota3+nota4+nota5)/5.0;
		
		if(promedio>=4.0){
			
			aprob++;
			
		}else{
			
			desaprob++;
			
		}
		
	printf("\n\nPromedio del alumno %d: %.2f\n\n",i,promedio);
		
	}
		
//Salida de datos

	printf("\n\nLa cantidad de aprobados es: %d\n",aprob);
	printf("La cantidad de desaporbados es: %d\n",desaprob);
	
	


//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
