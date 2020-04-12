//Leer pares de números hasta que aparezca el par 9 – 9 y por cada par, imprimir su producto. El último par no se debe tener en cuenta. Imprimir cuantos pares se leyeron con un cartel aclaratorio.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int num1,num2,contpar=0,prod;
	bool valid=true;

//Ingreso de datos

	printf("Ingresar pares de n%cmeros y mostrara su producto\n",163);
	printf("Ingresar par de 9 para finalizar el programa\n\n");
	printf("Ingresar el primer n%cmero: ",163);
	scanf("%d",&num1);
	fflush(stdin);
	printf("\nIngresar el segundo n%cmero: ",163);
	scanf("%d",&num2);
	fflush(stdin);

//Proceso

	if(num1==9&&num2==9){
		
		printf("\nSe ingresaron los pares para finalizar el programa");
		
	}else{
		
		while(valid){
			
			contpar++;
			printf("El producto es: %d\n\n",num1*num2);
			printf("Ingresar el primer n%cmero: ",163);
			scanf("%d",&num1);
			fflush(stdin);
			printf("\nIngresar el segundo n%cmero: ",163);
			scanf("%d",&num2);
			fflush(stdin);
			if(num1==9&&num2==9){
				valid=false;
			}
			
		}
		
		printf("\n\nCantidad de pares ingresados es: %d",contpar);
		
	}


//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
