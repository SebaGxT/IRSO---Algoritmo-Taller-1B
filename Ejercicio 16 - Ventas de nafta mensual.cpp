/*
Una estación de servicio expende nafta premium, súper y diésel. Cargar la cantidad de
litros vendidos cada día de cada uno de estos productos durante un mes. Se desea
saber:
• Cantidad total vendida de cada producto en el mes.
• Cuál es el producto de mayor venta.
• Cual fue el día de mayor venta de cada producto, mostrar también la cantidad.
*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	int i,mes,diamayp,diamays,diamayd;
	float premium[mes],super[mes],diesel[mes],vpremium,vsuper,vdiesel,totalvpre,totalvsup,totalvdie,mayor,valorpre,valorsup,valordie;
	
//Ingreso de datos	
	
	printf("Ventas de nafta del mes\n\n");
	
	do{
		
		//Carga de días
		printf("Ingrese cantidad de d%cas trabajados: ",161);
		scanf("%d",&mes);
		fflush(stdin);
		
		if(mes<=0 || mes>31){
			
			printf("\n\nIngrese un valor v%clido por favor.\n\n",160);
			
		}
		
	}while( (mes<=0) || (mes>31) );
	
	//Mensaje
	printf("\n\nIngrese los valores con 2 decimales por favor.\n\n");
	
	for(i=0;i<mes;i++){
		
		do{
			
			//Ventas premium
			printf("\n\nVenta de nafta premium del d%ca %d: ",161,i+1);
			scanf("%f",&vpremium);
			fflush(stdin);
		
			//Asignación en vector
			premium[i]=vpremium;
			
			if(vpremium<0){
				
				printf("\n\nIngrese un valor positivo por favor.\n\n");
				
			}
			
		}while(vpremium<0);
		
		do{
			
			//Ventas súper
			printf("\n\nVenta de nafta s%cper del d%ca %d: ",163,161,i+1);
			scanf("%f",&vsuper);
			fflush(stdin);
		
			//Asignación en vector
			super[i]=vsuper;
			
			if(vsuper<0){
				
				printf("\n\nIngrese un valor positivo por favor.\n\n");
				
			}
			
		}while(vsuper<0);
		
		do{
			
			//Ventas diésel
			printf("\n\nVenta de nafta di%csel del d%ca %d: ",130,161,i+1);
			scanf("%f",&vdiesel);
			fflush(stdin);
		
			//Asignación en vector
			diesel[i]=vdiesel;
			
			if(vdiesel<0){
				
				printf("\n\nIngrese un valor positivo por favor.\n\n");
				
			}
			
		}while(vdiesel<0);
		
	}
	
//Proceso
	
	for(i=0;i<mes;i++){
		
		//Suma del total de ventas
		totalvpre+=premium[i];
		
		totalvsup+=super[i];
		
		totalvdie+=diesel[i];
		
		//Mayor venta de cada nafta y el día en que se hizo
		if(premium[i]>valorpre){
			
			valorpre=premium[i];
			diamayp=i+1;
			
		}
		
		if(super[i]>valorsup){
			
			valorsup=super[i];
			diamays=i+1;
			
		}
		
		if(diesel[i]>valordie){
			
			valordie=diesel[i];
			diamayd=i+1;
			
		}
		
	}
	
//Salida de datos

	//Mensajes de salida total de venta de cada nafta y la mayor venta realizada con el día en que se realizo
	printf("\n\nCantidad total vendida de nafta premium: %.2f\n\n",totalvpre);
	printf("Cantidad total vendida de nafta s%cper: %.2f\n\n",163,totalvsup);
	printf("Cantidad total vendida de nafta di%csel: %.2f\n\n",130,totalvdie);
	printf("La mayor venta de nafta premium es: %.2f del d%ca: %d\n\n",valorpre,161,diamayp);
	printf("La mayor venta de nafta s%cper es: %.2f del d%ca: %d\n\n",163,valorsup,161,diamays);
	printf("La mayor venta de nafta di%csel es: %.2f del d%ca: %d\n\n",130,valordie,161,diamayd);
	
	//Producto de mayor venta
	if(totalvpre>totalvsup && totalvpre>totalvdie){
		
		printf("La nafta premium es el de mayor venta.\n\n");
		
	}else if(totalvsup>totalvdie){
		
		printf("La nafta s%cper es el de mayor venta.\n\n",163);
		
	}else{
		
		printf("La nafta di%csel es el de mayor venta.",130);
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
