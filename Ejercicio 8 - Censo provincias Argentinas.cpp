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
	
	int const PROV=24;
	int i,total=0,habitantes,provincias,censo[PROV];
	bool valid=true;

//Ingreso de datos	
	
	printf("Resultados del censo\n\n");
	printf("Para finalizar la carga de datos ingrese el par 99-99.\n\n");
	
	//Eliminar datos de entrada aleatorios estableciendo por primera vez valor 0 a todas las posiciones
	for(i=0;i<PROV;i++){
		
		censo[i]=0;
		
	}
	
	//Se cargar los pares de números o finaliza con 99-99
	for(i=0;i<PROV;i++){
		
		do{
		
		printf("\nIngrese el n%cmero de la provincia: ",163);
		scanf("%d",&provincias);
		fflush(stdin);
	
		if(provincias<1 || provincias>24&&provincias!=99){
	
			//Al cargar valor incorrecto, vuelve a cargar
			printf("\n\nValor incorrecto, ingrese un valor del 1 al 24 por favor.\n\n");
			valid=true;
	
		}else if(provincias==99){
			
			//Al cargar 99 se muestra mensaje y corta ciclo
			printf("\n\nVuelva a ingresar 99 para finalizar la carga de datos.\n\n");
			valid=false;
		
		}else{
			
			//Al cargar número válido se tiene que cortar el ciclo
			valid=false;
			
		}
		
		}while(valid);
	
		valid=true;
	
		do{
			if(provincias!=99){
				switch(provincias){
				
					case 1:{
						printf("\nIngrese el n%cmero de habitantes de Ciudad de Buenos Aires: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);
						break;
					}
					case 2:{
						printf("\nIngrese el n%cmero de habitantes de Provincia de Buenos Aires: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);
						break;
					}	
					case 3:{
						printf("\nIngrese el n%cmero de habitantes de Catamarca: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);	
						break;
					}	
					case 4:{	
						printf("\nIngrese el n%cmero de habitantes de Chaco: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);	
						break;
					}	
					case 5:{
						printf("\nIngrese el n%cmero de habitantes de Chubut: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);
						break;
					}
					case 6:{
						printf("\nIngrese el n%cmero de habitantes de C%crdoba: ",163,162);
						scanf("%d",&habitantes);
						fflush(stdin);
						break;
					}	
					case 7:{	
						printf("\nIngrese el n%cmero de habitantes de Corrientes: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);
						break;
					}	
					case 8:{	
						printf("\nIngrese el n%cmero de habitantes de Entre R%cos: ",163,161);
						scanf("%d",&habitantes);
						fflush(stdin);	
						break;
					}	
					case 9:{
						printf("\nIngrese el n%cmero de habitantes de Formosa: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);	
						break;
					}
					case 10:{	
						printf("\nIngrese el n%cmero de habitantes de Jujuy: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);	
						break;
					}		
					case 11:{
						printf("\nIngrese el n%cmero de habitantes de La Pampa: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);	
						break;
					}	
					case 12:{
						printf("\nIngrese el n%cmero de habitantes de La Rioja: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);	
						break;
					}	
					case 13:{	
						printf("\nIngrese el n%cmero de habitantes de Mendoza: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);	
						break;
					}	
					case 14:{
						printf("\nIngrese el n%cmero de habitantes de Misiones: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);	
						break;
					}	
					case 15:{
						printf("\nIngrese el n%cmero de habitantes de Neuqu%cn: ",163,130);
						scanf("%d",&habitantes);
						fflush(stdin);
						break;
					}	
					case 16:{
						printf("\nIngrese el n%cmero de habitantes de R%co Negro: ",163,161);
						scanf("%d",&habitantes);
						fflush(stdin);	
						break;
					}	
					case 17:{
						printf("\nIngrese el n%cmero de habitantes de Salta: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);
						break;
					}	
					case 18:{
						printf("\nIngrese el n%cmero de habitantes de San Juan: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);
						break;
					}	
					case 19:{
						printf("\nIngrese el n%cmero de habitantes de San Luis: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);	
						break;
					}	
					case 20:{
						printf("\nIngrese el n%cmero de habitantes de Santa Cruz: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);
						break;
					}	
					case 21:{	
						printf("\nIngrese el n%cmero de habitantes de Santa Fe: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);
						break;
					}	
					case 22:{
						printf("\nIngrese el n%cmero de habitantes de Santiago del Estero: ",163);
						scanf("%d",&habitantes);
						fflush(stdin);
						break;
					}	
					case 23:{
						printf("\nIngrese el n%cmero de habitantes de Tierra del Fuego, Ant%crtida e Islas del Atl%cntico Sur: ",163,160,160);
						scanf("%d",&habitantes);
						fflush(stdin);
						break;
					}	
					case 24:{
						printf("\nIngrese el n%cmero de habitantes de Tucum%cn: ",163,160);
						scanf("%d",&habitantes);
						fflush(stdin);
						break;
					}	
				}
			}else{
				
					printf("\nFinalizar: ");
					scanf("%d",&habitantes);
					fflush(stdin);
				
			}
			
			
			if(habitantes>0){
		
				censo[provincias-1]=habitantes;
				valid=false;
		
			}else if(provincias==99 && habitantes==99){
		
				printf("\n\nSe mostrara el resultado del censo\n\n");
				valid=false;
		
			}
		
		}while(valid);
		
		if(provincias==99 && habitantes==99){
			
			i=PROV;
			
		}
	}
	
	
	
//Proceso
	
	//Suma del total de habitantes
	for(i=0;i<PROV;i++){
		
		total+=censo[i];
		
	}
	
//Salida de datos

	printf("\n\nProvincia cantidad de habitantes: \n");
	
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
