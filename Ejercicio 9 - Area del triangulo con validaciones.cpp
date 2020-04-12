//Desarrollar un programa para ingresar la base y la altura de un triángulo y emitir su área. El algoritmo debe validar los datos de entrada de ambos valores, estas medidas deben ser positivas, caso contrario imprimir un mensaje aclaratorio.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	float base,altura,area;
	bool valid=true;

//Ingreso de datos

	printf("Area del triangulo\n\n");
	while(valid){
		printf("Ingrese la base del triangulo: ");
		scanf("%f",&base);
		fflush(stdin);
		if(base>0){
			
			valid=false;
			
		}else{
			
			printf("\nEl valor ingresado debe ser positivo\n\n");
			
		}
	}
	valid=true;
	while(valid){
		printf("\n\nIngrese la altura del triangulo: ");
		scanf("%f",&altura);
		fflush(stdin);
		if(altura>0){
			
			valid=false;
			
		}else{
			
			printf("\nEl valor ingresado debe ser positivo\n\n");
			
		}
	}
	
//Proceso
	
	area=base*altura/2.0;
	
//Salida de datos
	
	printf("\nEl area del triangulo es: %.2f",area);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
