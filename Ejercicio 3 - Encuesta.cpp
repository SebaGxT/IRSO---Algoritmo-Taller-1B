/*En una encuesta realizada a 120 personas se preguntó la estatura y la edad de cada una. Calcular el promedio de edad de la totalidad de los encuestados y el 
promedio de la estatura de los que tienen más de 18 años. Mostrar por pantalla los resultados. */
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int edad,personas,i;
	float estatura,promedioed,promedioes,totaled,totalest;

	
//Ingreso de datos

	printf("Se realiza encuesta de edad y estatura, se mostraran resultados de promedio\n\n");
	

//Proceso

	do{
		
		printf("\nIngrese la cantidad de personas encuestadas: ");
		scanf("%d",&personas);
		fflush(stdin);
		
		if(personas<=0){
			
			printf("\n\nPor favor ingrese un n%cmero positivo...\n",163);
			
		}
		
	}while(personas<=0);
	
	
	for(i=1;i<=personas;i++){
		
		do{
		
		printf("\n\nIngrese la edad de la persona %d: ",i);
		scanf("%d",&edad);
		fflush(stdin);
		
		if(edad<=0){
			
			printf("\nIngrese una edad v%clida por favor.\n",160);
			
		}
		
		}while(edad<=0);
		
		
		totaled+=edad;
		
		do{
		
			printf("\n\nIngrese la estatura de la persona %d: ",i);
			scanf("%f",&estatura);
			fflush(stdin);
			
			if(estatura<=0){
				
				printf("\nIngrese una estatura v%clida por favor.\n",160);
				
			}
			
		}while(estatura<=0);
		
		
		
		//promedio de mayores de 18
		if(edad>=18){
			
			totalest+=estatura;
			
		}
		
		
	}

	//calculo de promedios
		
		promedioed=totaled/personas;
		promedioes=totalest/personas;
		
//Salida de datos

	printf("\n\nEl promedio de edad de los encuestados es: %.0f",promedioed);
	printf("\n\nEl promedio de estatura de los mayores de 18 es: %.2f",promedioes);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
