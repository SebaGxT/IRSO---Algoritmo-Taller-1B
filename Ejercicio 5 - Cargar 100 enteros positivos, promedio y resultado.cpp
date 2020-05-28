//Cargar un vector de dimensión 100 con elementos enteros positivos, luego realizar el promedio de los valores cargados y mostrar el resultado.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	const int V=100;
	int i,n1,sum=0,vec[V];
	float promedio;

//Ingreso de datos	
	
	printf("Ingresar valores positivos, se mostrara el promedio por pantalla\n\n");
	
	for(i=0;i<V;i++){
		
		do{
			
			//Ingreso por teclado
			printf("\nIngrese un valor: ");
			scanf("%d",&n1);
			fflush(stdin);
			
			if(n1<0){
				
				//Error
				printf("\nValor incorrecto, ingrese valores positivos.\n");
				
			}else{
				
				//Ingreso de datos al vector
				vec[i]=n1;
				
			}
			
		}while(n1<0);
		
		
	}
	
//Proceso

	//Acumulación para calculo de promedio	
	for(i=0;i<V;i++){
		
		sum+=vec[i];
		
	}
	
	//Promedio
	promedio=sum/V;
	
	
//Salida de datos

	printf("\n\nEl promedio de los valores es: %.2f",promedio);
	
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
