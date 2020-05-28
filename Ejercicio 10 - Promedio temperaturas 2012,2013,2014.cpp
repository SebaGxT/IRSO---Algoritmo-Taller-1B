/*Calcular los valores anuales medios de las temperaturas de los años 2012, 2013 y 2014 dadas las temperaturas medias mensuales de cada año.
 Se lee Mes, Año y su correspondiente temperatura media mensual. Guardar e imprimir los resultados.*/
 //Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	
	const int MES=12;
	int i,k,anio;
	float temp,proan12,proan13,proan14,anio12[MES],anio13[MES],anio14[MES],aux1,aux2,aux3;

//Ingreso de datos	
	
	printf("Promedio temperaturas de los a%cos 2012,2013 y 2014\n\n",164);
	
	for(i=0;i<3;i++){
		
		if(i==0){
			
			printf("Temperatura mensual del a%co 2012.\n\n",164);
			
		}else if(i==1){
			
			printf("\n\nTemperatura mensual del a%co 2013.\n\n",164);
			
		}else{
			
			printf("\n\nTemperatura mensual del a%co 2014.\n\n",164);
			
		}
			
		//Mensaje aclaratorio
		printf("\n\nIngrese las temperaturas con 1 decimal por favor.\n\n");
		
		//Carga de temperatura mensual del año
		for(k=0;k<MES;k++){
			
			printf("\nIngrese la temperatura del mes %d: ",k+1);
			scanf("%f",&temp);
			fflush(stdin);
			
			//Asignación en vector
			if(i==0){
				
				anio12[k]=temp;
				
			}else if(i==1){
				
				anio13[k]=temp;
				
			}else if(i==2){
				
				anio14[k]=temp;
				
			}
			
		}
		
	}
	
//Proceso
	
	//Calculo de promedios
	for(i=0;i<MES;i++){
		
		aux1+=anio12[i];
		aux2+=anio13[i];
		aux3+=anio14[i];
		
	}
	
	proan12=aux1/12.0;
	proan13=aux2/12.0;
	proan14=aux3/12.0;
	
//Salida de datos

	printf("\n\nLa temperatura anual promedio del a%co 2012 es: %.1f",164,proan12);
	printf("\n\nLa temperatura anual promedio del a%co 2013 es: %.1f",164,proan13);
	printf("\n\nLa temperatura anual promedio del a%co 2014 es: %.1f",164,proan14);
	
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
