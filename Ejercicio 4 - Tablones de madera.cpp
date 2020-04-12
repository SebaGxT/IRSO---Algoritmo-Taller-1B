//En una maderera se tienen 80 tablones que deben ser medidos. Ingresar la medida de los tablones e indicar cuántos tablones miden más de 4 metros. Mostrar los resultados.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int tablones,sum=0;
	float medida;
	
//Ingreso de datos
	
	printf("Medidas de tablones, se indicara cuantos miden m%cs de 4 metros\n\n",160);
	printf("Ingrese cantidad de tablones: ");
	scanf("%d",&tablones);
	fflush(stdin);
	

//Proceso

	if(tablones>0){
		while(tablones!=0){
		
		printf("\nIngrese la medida con dos decimales del tablon: ");
		scanf("%f",&medida);
		fflush(stdin);
		
		if(medida>=4.0){
			
			sum++;
			
		}
		tablones--;
	}

//Salida de datos
	
	printf("\n\nLa cantidad de tablones mayores a 4 metros es: %d",sum);
	
	}else{
		
		printf("\nDebe ingresar un n%cmero mayor a 0. Finaliza el programa... Vuelva a iniciar\n\n",163);
		
	}
	

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
