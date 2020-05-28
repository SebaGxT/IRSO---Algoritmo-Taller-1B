//Leer 10 elementos enteros que se asocian a un vector de 10 posiciones, luego imprimir el contenido del vector.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	int i,n1;
	int vec[10];

//Ingreso de datos	
	
	printf("Ingreso de 10 valores enteros, se imprimen por pantalla\n\n");
	
//Proceso
	
	for(i=0;i<10;i++){
			
		printf("Ingrese un valor: ");
		scanf("%d",&n1);
		fflush(stdin);
		
		vec[i]=n1;	
			
	}
	
//Salida de datos
	
	printf("\n");
	
	for(i=0;i<10;i++){
		
		printf("%d \t",vec[i]);
		
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
