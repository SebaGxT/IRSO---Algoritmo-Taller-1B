/*Dadas duplas que se leen (A y B) hasta que al menos uno de los valores sea 0(cero) o hasta llegar a las 25 duplas válidas guardar los datos para un procesamiento posterior
 y también guardar los resultados de haber comparado A y B, o sea: A>B, A=B ó A<B. Imprimir luego todas las estructuras.*/
 //Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	const int DUP=25;
	int i,a,b,veca[DUP],vecb[DUP],vecmay[DUP],v=0;

//Ingreso de datos	
	
	printf("Ingresar valores A y B.\n\n");
	printf("Para cancelar la carga de valores ingresar un 0.\n\n");
	
	//Carga de ceros para eliminar números aleatorios en memoria
	for(i=0;i<DUP;i++){
		
		veca[i]=0;
		vecb[i]=0;
		vecmay[i]=0;
		
	}
	
	for(i=0;i<DUP;i++){
		
		//Carga de valor a en vector
		printf("Ingresar un valor A: ");
		scanf("%d",&a);
		fflush(stdin);
		
		if(a!=0){
			
			veca[i]=a;

			//Variable para impresion final
			v++;
	
			//Carga de valor b en vector
			printf("Ingresar un valor B: ");
			scanf("%d",&b);
			fflush(stdin);
		
			if(b!=0){
			
				vecb[i]=b;
	
			}else{
			
				printf("\n\nFinalizo la carga de valores. Se muestran los resultados.\n\n");
				//Cancela el for
				i=DUP;
			
			}
			
		}else if(i!=0){
			
			printf("\n\nFinalizo la carga de valores. Se muestran los resultados.\n\n");
			//Cancela el for
				i=DUP;
	
		}else{
			
			//Cancela el for en la primer vuelta
			i=DUP;
			
		}
		
	}
			
//Proceso
	
	//Verificar mayores menores e iguales
	for(i=0;i<DUP;i++){
		
		if(veca[i]>vecb[i]){
			
			vecmay[i]=1;
			
		}else if(vecb[i]>veca[i]){
			
			vecmay[i]=2;
			
		}else if(veca[i]==vecb[i]){
			
			vecmay[i]=3;
			
		}
		
	}
	
//Salida de datos
	
	if(veca[0]!=0){
		
		printf("\n\nLos resultados son: \n\n");
	
		for(i=0;i<v;i++){
				
				if(vecmay[i]==1){
			
					printf("El valor %d ingresado mayor es A: %d\n\n",i+1,veca[i]);
			
				}else if(vecmay[i]==2){
			
					printf("El valor %d ingresado mayor es B: %d\n\n",i+1,vecb[i]);
			
				}else if(vecmay[i]==3){
			
					printf("Los valores ingresados %d A y B son iguales: A: %d B:%d\n\n",i+1,veca[i],vecb[i]);
			
				}
			}
			
		printf("\n\nNo se ingresaron m%cs valores.\n\n",160);
	
	}else{
		
		printf("\n\nNo se ingresaron valores, finaliza el programa.\n\n");
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}



