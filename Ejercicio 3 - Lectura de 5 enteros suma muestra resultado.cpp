//Realizar la lectura de teclado de un vector de reales con 5 componentes. Generar luego la suma de todos los elementos del vector e imprimir el resultado.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	
	int i;
	float n1,sum=0, vec[5];

//Ingreso de datos	
	
	printf("Ingrese n%cmeros con 2 decimales\n\n",163);
	
	for(i=0;i<5;i++){
		
		printf("Ingrese un valor: ");
		scanf("%f",&n1);
		fflush(stdin);
		
		vec[i]=n1;
		
	}
	
//Proceso

	for(i=0;i<5;i++){
		
		sum+=vec[i];
		
	}
	
	
//Salida de datos

	printf("\nLa suma de los valores es: %.2f",sum);
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
