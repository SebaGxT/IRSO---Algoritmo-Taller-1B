//Una corredora da 12 vueltas a la pista. Ingresar el tiempo de cada vuelta (en segundos). Buscar la vuelta más rápida y mostrar cuál fue y cuánto fue el tiempo de esta vuelta. También mostrar el tiempo total de las 12 vueltas.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	const int CARRERA=12;
	int i,vuelta[CARRERA],total,mejor,pos;
	
	pos=0;
	total=0;

//Ingreso de datos
	
	printf("Tiempo de la corredora y mejor vuelta\n\n");
	
	for(i=0;i<CARRERA;i++){
		
		do{
			
			printf("\nIngresar el tiempo de la vuelta %d en segundos: ",i+1);
			scanf("%d",&vuelta[i]);
			fflush(stdin);
			
			if(vuelta[i]<=0){
				
				printf("\n\nValor incorrecto. Por favor ingrese un valor positivo.\n\n");
				
			}
		}while(vuelta[i]<=0);
		
	}

//Proceso

	mejor=vuelta[0];

	for(i=0;i<CARRERA;i++){
		
		//Suma de todas las vueltas
		total+=vuelta[i];
		
		//Asignación de vuelta mas rápida
		if(vuelta[i]<mejor){
			
			mejor=vuelta[i];
			pos=i;
			
		}
		
	}

//Salida de datos
	
	printf("\n\nEl tiempo en segundos total de vueltas: %d",total);
	printf("\nLa vuelta m%cs r%cpida es: %d - Tiempo: %d",160,160,pos+1,mejor);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
