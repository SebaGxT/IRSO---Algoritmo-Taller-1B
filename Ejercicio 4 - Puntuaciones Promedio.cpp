/*Cuatro enteros entre 0 y 100 representan los puntajes de un estudiante de Programación. Escribir un programa para encontrar la media (el promedio) de sus puntuaciones y visualizar según la siguiente tabla:
Media Puntuación
[90 – 100] A
[80 – 90) B
[70 – 80) C
[60 – 70) D
[0 – 60) E
*/
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int num1,num2,num3,num4;
	float prom;

//Ingreso de datos

	printf("Se mostrara el promedio de calificaci%cn de acuerdo a su puntaje\n",162);
	printf("Ingrese el primer puntaje: ");
	scanf("%d",&num1);
	fflush(stdin);
	printf("\nIngrese el segundo puntaje: ");
	scanf("%d",&num2);
	fflush(stdin);
	printf("\nIngrese el tercer puntaje: ");
	scanf("%d",&num3);
	fflush(stdin);
	printf("\nIngrese el cuarto puntaje: ");
	scanf("%d",&num4);
	fflush(stdin);
	
//Proceso

	prom=(num1+num2+num3+num4)/4;
	
//Salida de datos
	
	if(prom>=90 && prom<=100){
		
		printf("\nSu calificaci%cn es de: %.2f",162,prom);
		printf("\nCalificaci%cn A",162);
		
	}else if(prom>=80 && prom<90){
		
		printf("\nSu calificaci%cn es de: %.2f",162,prom);
		printf("\nCalificaci%cn B",162);
		
	}else if(prom>=70 && prom<80){
		
		printf("\nSu calificaci%cn es de: %.2f",162,prom);
		printf("\nCalificacion C",162);
		
	}else if(prom>=60 && prom<70){
		
		printf("\nSu calificaci%cn es de: %.2f",162,prom);
		printf("\nCalificaci%cn D",162);
		
	}else if(prom>=0 && prom<60){
		
		printf("\nSu calificaci%cn es de: %.2f",162,prom);
		printf("\nCalificaci%cn E",162);
		
	}else if(prom>100 || prom<0){
		
		printf("\nPuntaje ingresado inv%clido, verifique los valores ingresados y vuelva a intentar",160);
		
	}
	
//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
