/*Una agencia de ventas de autom�viles paga a su personal de ventas un salario de $400.-, m�s una comisi�n de $50.- por autom�vil vendido, m�s 4% del valor de la venta.
 Dise�ar un algoritmo para calcular el salario de un vendedor, en un mes dado, conociendo la cantidad de veh�culos vendidos y el precio de cada uno de �stos.*/
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int autom=0,valorau,calaux,acum=0,com=0,total,i,k,dias;
	const int SALARIO=400;
	const int COM=50;

//Ingreso de datos

	//Se ingresa cantidad de dias a calcular para el for
	printf("Calculo del salario del empleado\n\n");
	printf("Ingrese d%cas del mes trabajados: ",161);
	scanf("%d",&dias);
	fflush(stdin);
	
//Proceso

	if(dias>0){
		
		//For con dias cargados
		for(i=1;i<=dias;i++){
		
			//cantidad de autos vendidos por d�a
			printf("\nIngrese cantidad de autos vendidos en el d%ca %d: ",161,i);
			scanf("%d",&autom);
			fflush(stdin);
		
			if(autom>0){
			
			//Suma de 4% de valor de venta por auto
			for(k=1;k<=autom;k++){
				
				printf("\nIngrese el valor de venta del auto %d: ",k);
				scanf("%d",&valorau);
				fflush(stdin);
				calaux=valorau*0.04+COM;
				acum+=calaux;
			
				}
		
			//salario m�s el acumulado del % de venta y comisi�n por auto
				total=SALARIO+acum;
	
			}else{
			
				total=SALARIO;
			
			}
	
		
		}
	
//Salida de datos
	
	printf("\n\nEl salario del empleado es: %d",total);
	
	}else{
		
		printf("\nDebe Ingresar una cantidad de d%cas v%clido...",161,160);
		
	}


//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
