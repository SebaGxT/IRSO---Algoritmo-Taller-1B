//Imprimir la suma y el producto de los primeros 100 números naturales.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int sum=0,i,aux;
	long prod=1;
	bool valid=true;	

//Ingreso de datos

	printf("Se muestra la suma y producto de n%cmeros naturales\n\n",163);
	while(valid){
		
		printf("Ingrese cantidad de n%cmeros a calcular: ",163);
		scanf("%d",&aux);
		fflush(stdin);
		
		if(aux>0){
			
			valid=false;
			
		}else{
			
			printf("\n\nEl n%cmero debe ser positivo por favor\n\n",163);
			
		}
	}
	

//Proceso

	for(i=1;i<=aux;i++){
	
		sum+=i;
		prod=prod*i;
		
	}

	

//Salida de datos
	
	printf("\nLa suma de los n%cmeros es: %d\n\n",163,sum);
	printf("El producto de los n%cmeros es: %d",163,prod);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
