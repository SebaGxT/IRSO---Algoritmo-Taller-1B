//Leer 100 pares de números y por cada uno imprimir el mayor, luego imprimir la suma de los menores.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int i,num1,num2,sum=0;
	const int N=100;
	

//Ingreso de datos

	printf("Ingresar pares de n%cmeros, se mostrara el mayor y se sumaran todos los menores\n\n",163);
	

//Proceso

	for(i=1;i<=N;i++){
		
		printf("\nIngrese el primer valor: ");
		scanf("%d",&num1);
		fflush(stdin);
		printf("\nIngrese el segundo valor: ");
		scanf("%d",&num2);
		fflush(stdin);
		
		if(num1>num2){
			
			printf("\n\nEl mayor del par ingresado es: %d\n",num1);
			sum+=num2;
				
		}else if(num2>num1){
			
			printf("\n\nEl mayor del par ingresado es: %d\n",num2);
			sum+=num1;
			
		}else{
			
			printf("\n\nIngreso un par de n%cmeros iguales\n",163);
			printf("El n%cmero es: %d\n",163,num1);
			sum+=num1;
			sum+=num2;
			
		}
		
	}

//Salida de datos
	
	printf("\nLa suma de los menores es: %d",sum);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
