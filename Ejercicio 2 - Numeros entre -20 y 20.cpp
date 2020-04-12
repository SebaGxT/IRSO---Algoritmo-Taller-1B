/*Se desea leer por teclado una secuencia de valores enteros entre –20 y 20. En el momento que se lea un valor que no cumpla con dichas condiciones deberá
 interrumpirse el ingreso de datos e imprimir la sumatoria de los valores positivos válidos ingresados.*/
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int num1,sum;

	
//Ingreso de datos
	
	printf("Ingreso de valores entre -20 y 20, se mostrara la suma de valores positivos\n\n");
	
//Proceso

	printf("Ingrese un valor: ");
	scanf("%d",&num1);
	fflush(stdin);
	
	if(num1>=-20 && num1<=20){
		
		if(num1>0 && num1<=20){
		
			sum+=num1;
		
		}
		
	while((num1>=-20) && (num1<=20)){
		
		printf("\nIngrese un valor: ");
		scanf("%d",&num1);
		fflush(stdin);
		
		if(num1>0 && num1<=20){
			
			sum+=num1;
			
		}
	}
	
}else{
	
	printf("\nDebe ingresar un valor entre -20 y 20");
	
}

//Salida de datos

	printf("\n\nLa suma de los valores positivos es: %d",sum);



//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
