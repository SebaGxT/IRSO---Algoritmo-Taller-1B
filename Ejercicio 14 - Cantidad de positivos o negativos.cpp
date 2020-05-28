//Cargar un vector de 50 posiciones de enteros. Contar la cantidad de positivos y negativos que han ingresado. Emitir por pantalla si hay mayor cantidad de unos u otros.
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables

	int const N=50;
	int i,n1,vec[N],contp,contn,contnul;

//Ingreso de datos	
	
	//Inicio de contadores en 0
	contp=0;
	contn=0;
	contnul=0;
	
	printf("Ingrese valores enteros, se contaran cantidad de positivos y negativos\n\n");
	
	for(i=0;i<N;i++){
		
		//Ingreso del valor por teclado
		printf("\nIngrese un valor: ");
		scanf("%d",&n1);
		fflush(stdin);
		
		//Asignación
		vec[i]=n1;
		
	}
	
//Proceso
	
	for(i=0;i<N;i++){
		
		if(vec[i]>0){
			
			contp++;
			
		}else if(vec[i]<0){
			
			contn++;
			
		}else{
			
			contnul++;
			
		}
		
	}
	
//Salida de datos
	
	if(contp>contn){
		
		printf("\n\nLa cantidad de positivos es mayor a los negativos.\n\n");
		
	}else if(contn>contp){
		
		printf("\n\nLa cantidad de negativos es mayor a los positivos.\n\n");
		
	}else{
		
		printf("\n\nTienen la misma cantidad de positivos y negativos\n\n");
		
	}
	
	printf("Cantidad de positivos: %d\n\n",contp);
	printf("Cantidad de negativos: %d\n\n",contn);
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
