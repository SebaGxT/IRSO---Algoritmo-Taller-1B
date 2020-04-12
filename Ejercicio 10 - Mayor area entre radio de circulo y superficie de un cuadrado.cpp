//Ingresar el radio de un círculo y el lado de un cuadrado, calcular la superficie de ambos y emitir por pantalla qué figura es la de mayor área.
//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Main
int main(void){
	
	
//Variables

	float radiocir,ladocua,supcir,supcua;
	const float PI=3.14;
	
//Ingreso de datos

	printf("Se mostrara la mayor %crea\n",160);
	printf("\nIngrese el radio del circulo: ");
	scanf("%f",&radiocir);
	fflush(stdin);
	printf("\nIngrese el lado del cuadrado: ");
	scanf("%f",&ladocua);
	fflush(stdin);

//Proceso

	supcir=PI*pow(radiocir,4);
	supcua=ladocua*ladocua;
	
//Salida de datos

	if(supcir>supcua){
		
		printf("\nEl circulo es de mayor %crea\n",160);
		printf("\nEl %crea del circulo es: %.2f",160,supcir);
			
	}else{
		
		printf("\nEl cuadrado es de mayor %crea\n",160);
		printf("\nEl %crea del cuadrado es: %.2f",160,supcua);
		
	}

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
