//Se deben tomar la estatura de 25 personas, luego de ingresarlas, mostrar la cantidad de personas que superan el promedio de todas las estaturas ingresadas.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){

//Variables
	
	const int PERSONAS=25;
	int i,cont;
	float promedio,vec[PERSONAS];
	
	cont=0;

//Ingreso de datos
	
	printf("Se mostrara la cantidad de personas que superan el promedio\n\n");
	printf("Cargar estatura con 2 decimales por favor.\n\n");
	
	for(i=0;i<PERSONAS;i++){
		
		do{
			
			printf("\nIngrese estatura de la persona %d: ",i+1);
			scanf("%f",&vec[i]);
			fflush(stdin);
			
			if(vec[i]<0){
				
				printf("Por favor cargar un valor positivo.\n\n");
				
			}
			
			
		}while(vec[i]<0);
		
	}

//Proceso

	for(i=0;i<PERSONAS;i++){
		
		promedio+=vec[i];
		
	}
	
	promedio=promedio/PERSONAS;
	
	for(i=0;i<PERSONAS;i++){
		
		if(vec[i]>promedio){
			
			cont++;
			
		}
		
	}

//Salida de datos

	printf("\nEl promedio de estatura es: %.2f",promedio);
	printf("\nLa cantidad de personas que superan el promedio es: %d",cont);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;	
	
}
