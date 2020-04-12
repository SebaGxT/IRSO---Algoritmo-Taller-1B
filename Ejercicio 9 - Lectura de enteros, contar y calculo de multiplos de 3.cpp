//Desarrollar un programa que lea una serie de números enteros, los cuente y que calcule también cuantos son múltiplos de 3. Emitir resultados.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int num1,contto=0,cont3=0;
	char let;
	bool valid=true;
	

//Ingreso de datos

	printf("Serie de n%cmeros enteros, muestra el total y la cantidad de multiplos de tres\n\n",163);
	printf("Desea ingresar un valor? S/N: ");
	scanf("%c",&let);
	fflush(stdin);

//Proceso

	if(let=='s'||let=='S'){
		while(valid){
		
		printf("\nIngrese un valor: ");
		scanf("%d",&num1);
		fflush(stdin);
		contto++;
		
		if(num1%3==0){
			
			cont3++;
			
		}
		
		printf("\n\nDesea ingresar un valor? S/N: ");
		scanf("%c",&let);
		fflush(stdin);
		if(let=='n' || let=='N'){
			valid=false;
		}
	}
	
	}else{
		
		printf("\nFinalizo el programa");
		
	}
	
	
	
//Salida de datos

	printf("\n\nCantidad de valores ingresados: %d",contto);
	printf("\nCantidad de multiplos de 3: %d",cont3);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
