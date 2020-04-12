/*Un puesto de venta mayorista de cajones de manzanas comienza el mes con 148 cajones en stock. Cada jornada, al comenzar el dia ingresa al puesto una cantidad de
 cajones y diariamente se realizan ventas. Ingresar por dia la cantidad de cajones ingresados y la cantidad de cajones vendidos completando un periodo de 30 dias.
Mostrar por pantalla:
- La cantidad total de cajones vendidos.
- La mayor cantidad de cajones vendidos en un dia, y que dia fue.
-La menor cantidad diaria de cajones ingresados y que dia fue.
- El stock remanente.*/
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int stock=148,compra,venta,i,may=0,diamay,men=0,diamen,totalventa=0,dias;
	
//Ingreso de datos

	printf("Ventas del mes y stock\n\n");
	printf("Ingrese la cantidad de d%cas: ",161);
	scanf("%d",&dias);
	fflush(stdin);
	

//Proceso

	if(dias>0 && dias<=31){
		
		//Informe de stock al inicio
		printf("\n\nEl stock de mercader%ca a principio de mes es: %d",161,stock);
		
		for(i=1;i<=dias;i++){
			
			
			//Ingreso de mercadería
			do{
			
			printf("\n\nIndique el ingreso de mercader%ca del d%ca %d: ",161,161,i);
			scanf("%d",&compra);
			fflush(stdin);
			
			if(compra<0){
				
				printf("\n\nValor incorrecto vuelva a ingresar por favor.");
					
			}
			
			}while(compra<0);
			
			//Suma de mercadería al stock
			stock+=compra;
			
			//Registro de menor compra
			if(men<compra){
				
				men=compra;
				diamen=i;
				
			}
			
			//Venta de mercadería
			
			do{
			
			printf("\nIndique las ventas del d%ca %d: ",161,i);
			scanf("%d",&venta);
			fflush(stdin);
			
			if(venta<0){
				
				printf("\n\nValor incorrecto vuelva a ingresar por favor.");
				
			}
			
			}while(venta<0);
			
			
			//Comprobación de stock
			if((stock<=0) || (stock<venta) ){
				
				printf("\nHubo un error en el registro de stock, verifique el ingreso y salida de mercader%ca.\n",161);
				printf("\nExistencia actual de mercader%ca: %d\n",161,stock);
				printf("No se puede realizar la venta.\n\n");
				
			}else{
				
				//Resta de mercadería en stock
				stock-=venta;
				
				//Total de ventas
				totalventa+=venta;
				
				//Registro de Mayor venta
				if(venta>may){
					
					may=venta;
					diamay=i;
					
				}
				
			}
			
		}
		
	}else{
		
		//Mensaje de error por ingreso de dias inválidos
		printf("\nIngrese un valor v%clido por favor...",160);
		
	}
	
//Salida de datos

	printf("\n\nEl stock actual es: %d\n",stock);
	printf("\nLa cantidad total de cajones vendidos es: %d\n",totalventa);
	printf("\nMayor cantidad de cajones vendidos es: %d en el d%ca %d\n",may,161,diamay);
	printf("\nMenor cantidad de cajones ingresados es: %d en el d%ca %d\n",men,161,diamen);


//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
