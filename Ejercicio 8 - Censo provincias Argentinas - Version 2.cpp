/*Leer pares de valores hasta que se lea el par 99-99. El primer valor corresponderá al de una provincia (entre 1 y 24) 
y el segundo corresponderá a un grupo de habitantes censados de dicha provincia.
 Se deberá rechazar el par inválido. Imprimir el siguiente listado:
PROVINCIA CANT. DE HABITANTES
1 xxxxx
2 xxxxx
3 xxxxx
. .
. .
. .
24 xxxxx
TOTAL: xxxxx
*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	
	const int PROV=24;
	int i,provincias,habitantes,total,censo[PROV];
	
	total=0;
	
	for(i=0;i<PROV;i++){
		
		censo[i]=0;
		
	}

//Ingreso de datos
	
	printf("Censo de provincias - Argentina\n\n");
	printf("Debe ingresar n%cmero de provincia del 1 al 24.\n\n",163);
	
	do{
		
			printf("\nIngrese la provincia: ");
			scanf("%d",&provincias);
			fflush(stdin);
			
			if((provincias<=0) || (provincias>24) && (provincias!=99)){
			
				printf("\nProvincia ingresa incorrecta.\n\n");
			
			}
	
			printf("\nIngrese cantidad de habitantes: ");
			scanf("%d",&habitantes);
			fflush(stdin);

			if(habitantes<0){
			
				printf("\n\nCantidad ingresada incorrecta, debe ingresar un valor positivo.\n\n");
			
			}

//Proceso
		
		if(((provincias>0)&&(provincias<25))&&(habitantes>0)){
			
			censo[provincias]+=habitantes;
			
		}
	
	}while((provincias!=99)||(habitantes!=99));
	
	for(i=0;i<PROV;i++){
		
		total+=censo[i];
		
	}

//Salida de datos

	printf("\n\nCenso de habitantes por provincia: \n");
	
	//Muestra de totales
	for(i=0;i<PROV;i++){
		
		switch(i){
				
				case 1:{
					printf("\nCiudad de Buenos Aires: %d",censo[i]);
					break;
				}
				case 2:{
					printf("\nProvincia de Buenos Aires: %d",censo[i]);
					break;
				}	
				case 3:{
					printf("\nCatamarca: %d",censo[i]);	
					break;
				}	
				case 4:{	
					printf("\nChaco: %d",censo[i]);	
					break;
				}	
				case 5:{
					printf("\nChubut: %d",censo[i]);
					break;
				}
				case 6:{
					printf("\nC%crdoba: %d",162,censo[i]);
					break;
				}	
				case 7:{	
					printf("\nCorrientes: %d",censo[i]);
					break;
				}	
				case 8:{	
					printf("\nEntre R%cos: %d",161,censo[i]);	
					break;
				}	
				case 9:{
					printf("\nFormosa: %d",censo[i]);
					break;
				}
				case 10:{	
					printf("\nJujuy: %d",censo[i]);	
					break;
				}		
				case 11:{
					printf("\nLa Pampa: %d",censo[i]);	
					break;
				}	
				case 12:{
					printf("\nLa Rioja: %d",censo[i]);	
					break;
				}	
				case 13:{	
					printf("\nMendoza: %d",censo[i]);	
					break;
				}	
				case 14:{
					printf("\nMisiones: %d",censo[i]);	
					break;
				}	
				case 15:{
					printf("\nNeuqu%cn: %d",130,censo[i]);
					break;
				}	
				case 16:{
					printf("\nR%co Negro: %d",161,censo[i]);	
					break;
				}	
				case 17:{
					printf("\nSalta: %d",censo[i]);
					break;
				}	
				case 18:{
					printf("\nSan Juan: %d",censo[i]);
					break;
				}	
				case 19:{
					printf("\nSan Luis: %d",censo[i]);	
					break;
				}	
				case 20:{
					printf("\nSanta Cruz: %d",censo[i]);
					break;
				}	
				case 21:{	
					printf("\nSanta Fe: %d",censo[i]);
					break;
				}	
				case 22:{
					printf("\nSantiago del Estero: %d",censo[i]);
					break;
				}	
				case 23:{
					printf("\nTierra del Fuego, Ant%crtida e Islas del Atl%cntico Sur: %d",160,160,censo[i]);
					break;
				}	
				case 24:{
					printf("\nTucum%cn: %d",160,censo[i]);
					break;
				}	
			}
				
	}
	
	printf("\nTotal: %d",total);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
