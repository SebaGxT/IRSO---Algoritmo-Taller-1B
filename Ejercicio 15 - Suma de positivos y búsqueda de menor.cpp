//Cargar un vector de 120 posiciones con enteros positivos, sumar todos los elementos pares, buscar el valor menor. Mostrar el vector, la suma de los pares, el valor menor y su posición.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	int const N=5;
	int i,vec[N],n1,sum,menor,pos;

//Ingreso de datos	

	sum=0;
	
	printf("Ingreso de valores positivos, se suman los pares y se indicara cual es el menor de los ingresados.\n\n");
	
	for(i=0;i<N;i++){
		
		do{
			
			//Ingreso por teclado
			printf("Ingrese un valor positivo: ");
			scanf("%d",&n1);
			fflush(stdin);
			
			//Mensaje de error
			if(n1<0){
				
				printf("\n\nDebe ingresar valores positivos.\n\n");
				
			}
			
			if(n1>0){
				
				//Asignación en vector
				vec[i]=n1;
				menor=vec[i];
			}
						
		}while(n1<0);
		
	}
	
//Proceso

	for(i=0;i<N;i++){
		
		if(vec[i]<menor){
			
			//Búsqueda de menor y posición
			menor=vec[i];
			pos=i;
			
		}
		
		if(vec[i]%2==0){
			
			sum+=vec[i];
			
		}
		
	}
		
//Salida de datos

	printf("\n\nValores ingresados: \n\n");

	for(i=0;i<N;i++){
		
		printf("%d \n",vec[i]);
		
	}
	
	printf("\nLa suma de los valores par: %d\n\n",sum);
	printf("El menor de los valores ingresados: %d Posici%cn: %d\n\n",menor,162,pos+1);
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
