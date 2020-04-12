//Ingresar 2 enteros positivos A y B y desarrollar un programa para determinar si A es múltiplo de B.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int num1,num2;
	bool valid=true;
	
//Ingreso de datos

	while(valid){
		
		printf("Se indicara si el primer numero es multiplo del segundo\n");
		printf("Ingrese el primer n%cmero: ",163);
		scanf("%d",&num1);
		fflush(stdin);
		
		if(num1>0){
			
			valid=false;
			
		}else{
			
			printf("El n%cmero debe ser positivo",163);
			
		}
	}
	
	valid=true;
	
	while(valid){
		
		printf("\nIngrese el segundo n%cmero: ",163);
		scanf("%d",&num2);
		fflush(stdin);
		
		if(num2>0){
			
			valid=false;
			
		}else{
			
			printf("El n%cmero debe ser positivo",163);
			
		}
	}
	

//Proceso

	
	if(num1%num2 == 0){
		
		printf("\nEl primer n%cmero es multiplo del segundo",163);
		
	}else{
		
		printf("\nNo es multiplo");
		
	}

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
