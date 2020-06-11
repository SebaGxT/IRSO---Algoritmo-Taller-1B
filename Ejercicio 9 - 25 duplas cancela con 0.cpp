/*Dadas duplas que se leen (A y B) hasta que al menos uno de los valores sea 0(cero) o hasta llegar a las 25 duplas válidas guardar los datos para un procesamiento posterior
 y también guardar los resultados de haber comparado A y B, o sea: A>B, A=B ó A<B. Imprimir luego todas las estructuras.*/
 //Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	
	const int N=25;
	int i,a[N],b[N],r[N],cont;
	
	cont=0;
	
//Ingreso de datos	
	
	printf("Ingresar valores A y B.\n\n");
	printf("Para cancelar la carga de valores ingresar un 0.\n\n");
	
	//Carga de valor A
	printf("\nIngrese el valor de A: ");
	scanf("%d",&a[cont]);
	fflush(stdin);
	
	if(a[cont]!=0){
		
		//Carga de valor B
		printf("\nIngrese el valor de B: ");
		scanf("%d",&b[cont]);
		fflush(stdin);
		
	}
	
	while((a[cont]!=0)&&(b[cont]!=0)&&(cont<N)){
		
		cont++;
		
		//Carga de valor A
		printf("\nIngrese el valor de A: ");
		scanf("%d",&a[cont]);
		fflush(stdin);
		
		if(a[cont]!=0){
			
			//Carga de valor B
			printf("\nIngrese el valor de B: ");
			scanf("%d",&b[cont]);
			fflush(stdin);
	
		}
	}

//Proceso
	
	//Realiza el proceso en caso haber datos cargados previamente
	if(cont>0){
		
		//Verificación de mayor, menor o igual
		for(i=0;i<cont;i++){
			
			if(a[i]>b[i]){
				
				r[i]=1;
				
			}else if(a[i]<b[i]){
				
				r[i]=-1;
				
			}else{
				
				r[i]=0;
				
			}
			
		}

//Salida de datos
		
		for(i=0;i<cont;i++){
			
			//Listado de resultado
			if(r[i]==1){
				
				printf("\n%d   %d Mayor",a[i],b[i]);
				
			}else if(r[i]==-1){
				
				printf("\n%d   %d Menor",a[i],b[i]);
				
			}else{
				
				printf("\n%d   %d Igual",a[i],b[i]);
				
			}
			
		}
		
	}else{
		
		//Mensaje en caso de iniciación con 0
		printf("\n\nSe finalizo el programa.");
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
