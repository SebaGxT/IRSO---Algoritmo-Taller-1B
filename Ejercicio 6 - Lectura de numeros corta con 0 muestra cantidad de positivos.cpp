//Leer números enteros hasta que aparezca un 0 (cero) y mostrar cuantos positivos se ingresaron.
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int num1,cont=0;	

//Ingreso de datos

	printf("Ingrese n%cmeros, se mostrara la cantidad de n%cmeros positivos\n",163);
	printf("Para finalizar ingrese un 0\n\n");


//Proceso
	
	do{
	
	printf("\nIngrese un valor: ");
	scanf("%d",&num1);
	fflush(stdin);
	
	if(num1>0){
		
		cont++;
	}
	
	}while(num1!=0);
	
//Salida de datos
	
	if(cont==0){
		
		printf("\nNo se ingresaron valores. Finaliza el programa");
		
	}else{
		
		printf("\n\nLa suma es: %d",cont);
		
	}
	

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
