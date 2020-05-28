//Generar la lectura de teclado de un vector de 200 elementos, luego, mediante una búsqueda identifique el valor mayor y su posición mostrándolo por pantalla.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	int i,n1,vec[200],may,pos;

//Ingreso de datos	
	
	printf("Ingreso de 200 valores, se mostrara el mayor por pantalla\n\n");
	
		for(i=0;i<200;i++){
		
		printf("\nIngrese un valor: ");
		scanf("%d",&n1);
		fflush(stdin);
		
		vec[i]=n1;
		
	}
	
//Proceso
	
	for(i=0;i<200;i++){
		
		if(vec[i]>may){
			
			may=vec[i];
			pos=i+1;
			
		}
		
	}
	
	
	
//Salida de datos
	
	printf("\n\nEl mayor valor ingresado es: %d, en la posici%cn %d",may,162,pos);
	
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
