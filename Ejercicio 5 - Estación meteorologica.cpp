/*Una estación meteorológica realiza 3 mediciones de temperatura ambiente por día durante el mes de abril. Ingresar las 3 temperaturas diarias de todos los
días del mes, calcular la temperatura media diaria y por cada día emitir un cartel que indique si ese día fue en promedio frío (menos de 10 grados), templado (desde 10 hasta 20 grados) o cálido (más de 20 grados) */
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	float tempm,tempt,tempn, promedio;
	int i,dia;
	
//Ingreso de datos

	printf("Medici%cn meteorol%cgica\n\n",162,162);

//Proceso

	//Ingreso de dias para el for
	
	do{
		
		printf("Ingrese cantidad de d%cas: ",161);
		scanf("%d",&dia);
		fflush(stdin);
		
		if(dia<=0){
			
			printf("\nIngrese un valor v%clido.",160);
			
		}
		
	}while(dia<=0);

	
	//Mensaje aclaratorio
	printf("\n\nIngrese las temperaturas con un decimal");
	
	for(i=1;i<=dia;i++){
		
		//Ingreso de temperaturas
		printf("\n\nMedici%cn de la ma%cana del dia %d: ",162,164,i);
		scanf("%f",&tempm);
		fflush(stdin);
		printf("\n\nMedici%cn de la tarde del dia %d: ",162,i);
		scanf("%f",&tempt);
		fflush(stdin);
		printf("\n\nMedici%cn de la noche del dia %d: ",162,i);
		scanf("%f",&tempn);
		fflush(stdin);
		
		
		//Medicion de temperatura media
		promedio=(tempm+tempt+tempn)/3.0;
		
		//Clasificación
		if(promedio<=10){
			
			printf("\nEl d%ca %d en promedio fue fr%co.\n\n",161,i,161);
			printf("La temperatura promedio es: %.1f\n\n",promedio);
			
		}else if(promedio>10 && promedio<=20){
			
			printf("\nEl d%ca %d en promedio fue templado.\n\n",161,i);
			printf("La temperatura promedio es: %.1f\n\n",promedio);
			
		}else{
			
			printf("\nEl d%ca %d en promedio fue c%clido.\n\n",161,i,160);
			printf("La temperatura promedio es: %.1f\n\n",promedio);
			
		}
		
	}


//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
