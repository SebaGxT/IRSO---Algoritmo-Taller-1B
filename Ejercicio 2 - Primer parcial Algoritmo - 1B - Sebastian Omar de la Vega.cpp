//2.	Desarrollar un programa que lea 40 números y a continuación muestre el mayor de los valores ingresados.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){

//Variables

	int num,may,i;
	const int N=40;

//Ingreso de datos

	printf("Ingrese n%cmeros enteros, al finalizar se mostrara el mayor.\n\n",163);

//Proceso

	for(i=1;i<=N;i++){
		
		printf("\n\nIngrese un valor: ");
		scanf("%d",&num);
		fflush(stdin);
		
		if(num>may){
			
			may=num;
			
		}
		
	}

//Salida de datos

	printf("\n\nEl mayor n%cmero ingresado es: %d",163,may);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
