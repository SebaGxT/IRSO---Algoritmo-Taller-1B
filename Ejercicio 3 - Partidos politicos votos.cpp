/*En unas elecciones se presentan 5 partidos políticos; PART1, PART2, PART3, PART4 y PART5. Desarrollar un programa que determine el número de votos obtenido
 por cada partido. Ingresar los votos de a uno, mediante un número entero que corresponderá con el número de cada partido. Leer votos hasta que se lea un 0 (cero).*/
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int voto,part1=0,part2=0,part3=0,part4=0,part5=0;
	bool valid=true;

	
//Ingreso de datos

	printf("Se contabiliza los votos de los partidos politicos\n\n");

//Proceso

	printf("Ingrese el n%cmero del partido al que quiere votar del 1 al 5, si ingresa 0 se termina la votaci%cn\n\n",163,162);
	
	
	do{
		
		printf("Ingrese el voto: ");
		scanf("%d",&voto);
		fflush(stdin);
		
		if(voto!=0){
		
			switch(voto){
			
				case 1:
				
					part1++;
				
					break;
				case 2:
				
					part2++;
				
					break;
				case 3:
				
					part3++;
				
					break;
				case 4:
				
					part4++;
				
					break;
				case 5:
				
					part5++;
				
					break;
				case 0:
				
					valid=false;
					printf("\nFinaliza la votaci%cn\n\n",162);
					printf("El partido 1 consiguio: %d votos",part1);
					printf("\nEl partido 2 consiguio: %d votos",part2);
					printf("\nEl partido 3 consiguio: %d votos",part3);
					printf("\nEl partido 4 consiguio: %d votos",part4);
					printf("\nEl partido 5 consiguio: %d votos\n\n",part5);
				
					break;
				default:
				
					printf("\nIngrese un valor del 1 al 5 por favor...\n\n");
			
			}
			
		}else{
			
			valid=false;
			printf("\nFinaliza la votaci%cn\n\n",162);
			printf("El partido 1 consiguio: %d votos",part1);
			printf("\nEl partido 2 consiguio: %d votos",part2);
			printf("\nEl partido 3 consiguio: %d votos",part3);
			printf("\nEl partido 4 consiguio: %d votos",part4);
			printf("\nEl partido 5 consiguio: %d votos\n\n",part5);
			
		}
		
	}while(valid);


//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
