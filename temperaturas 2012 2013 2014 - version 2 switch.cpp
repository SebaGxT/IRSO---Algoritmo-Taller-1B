/*Calcular los valores anuales medios de las temperaturas de los años 2012, 2013 y 2014 dadas las temperaturas medias mensuales de cada año.
 Se lee Mes, Año y su correspondiente temperatura media mensual. Guardar e imprimir los resultados.*/
 //Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	
	const int MES=12;
	int i,k;
	float temp,proan12,proan13,proan14,anio12[MES],anio13[MES],anio14[MES];

//Ingreso de datos	
	
	printf("Promedio temperaturas de los a%cos 2012,2013 y 2014\n\n",164);
	
	//Mensaje aclaratorio
	printf("\n\nIngrese las temperaturas con 1 decimal por favor.\n\n");
	
	for(i=2012;i<2015;i++){
		
		for(k=0;k<MES;k++){
			
			printf("\nIngrese la temperatura del mes %d del a%co %d: ",k+1,164,i);
			scanf("%f",&temp);
			fflush(stdin);
			
			switch(i){
				
				case 2012:{
					
					anio12[k]=temp;
					break;
					
				}
	
				case 2013:{
					
					anio13[k]=temp;
					break;
					
				}

				case 2014:{
					
					anio14[k]=temp;
					break;
					
				}
		
			}
			
		}
	
	}

//Proceso
	
	//Calculo de promedios
	for(i=0;i<MES;i++){
		
		proan12+=anio12[i];
		proan13+=anio13[i];
		proan14+=anio14[i];
		
	}
	
	proan12=proan12/MES;
	proan13=proan13/MES;
	proan14=proan14/MES;
	
//Salida de datos

	printf("\n\nLa temperatura anual promedio del a%co 2012 es: %.1f",164,proan12);
	printf("\n\nLa temperatura anual promedio del a%co 2013 es: %.1f",164,proan13);
	printf("\n\nLa temperatura anual promedio del a%co 2014 es: %.1f",164,proan14);
	
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
