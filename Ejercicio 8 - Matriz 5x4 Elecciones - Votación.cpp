/*Ingresar los resultados de las últimas elecciones sabiendo que hay 4 candidatos y 5
distritos. Se ingresarán la cantidad de votos de cada candidato por distrito.
DISTRITO CANDIDATO A CANDIDATO B CANDIDATO C CANDIDATO D
1 XXXX XXXX XXXX XXXX
2 XXXX XXXX XXXX XXXX
3 XXXX XXXX XXXX XXXX
4 XXXX XXXX XXXX XXXX
5 XXXX XXXX XXXX XXXX
? Mostrar la tabla anterior con cabeceras incluidas.
? Calcular e imprimir la cantidad total de votos recibidos por cada candidato con su
porcentaje respectivo.
? Si algún candidato recibe más del 50% de los votos o si el que resultó con más
votos tiene una diferencia de más de 20% respecto al que obtuvo el segundo
lugar, imprimir un mensaje declarando al candidato vencedor. De no haber
ganador directo, indicar cuales son los 2 candidatos que van a segunda vuelta. */
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	
	const int FIL=5,COL=4;
	int f,c,mat[FIL][COL],votos[COL],totalvotos,pos[COL];
	float porcentaje[COL],mayor,mayor2;
	
	//Inicio de votos en cero
	for(c=0;c<COL;c++){
		
		votos[c]=0;
		pos[c]=0;
		
	}
	
	mayor=0;
	mayor2=0;
	
//Ingreso de datos	
	
	printf("Elecciones de candidatos 2020\n\n");
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			do{
				
				printf("\nIngrese cantidad de votos del candidato %d en el distrito %d: ",c+1,f+1);
				scanf("%d",&mat[f][c]);
				fflush(stdin);
				
				if(mat[f][c]<0){
					
					printf("\n\nDebe ingresar un valor positivo.\n\n");
					
				}
					
			}while(mat[f][c]<0);
			
		}
		
	}
	
//Proceso

	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			//Suma de votos por candidato
			votos[c]+=mat[f][c];
			
			//Suma total de todos los votos
			totalvotos+=mat[f][c];
			
		}
		
	}
	
	for(c=0;c<COL;c++){
		
		//Porcentaje de cada candidato
		porcentaje[c]=votos[c]*100/totalvotos;	
			
	}
	
	for(c=0;c<COL;c++){
		
		if(porcentaje[c]>mayor){
			
			mayor=porcentaje[c];
			pos[0]=c;
			
		}
		
		if(porcentaje[c]>mayor2 && c!=pos[0]){
			
			mayor2=porcentaje[c];
			pos[1]=c;
			
		}
		
	}

				
//Salida de datos
	
	printf("\n\n*******************************************************\n\n");
	
	//Titulo columna
	printf("\nDISTRITO");
	
	for(c=0;c<COL;c++){
		
		//Titulo columnas
		printf("  Candidato %d",c+1);
		
	}
	
	printf("\n");
	
	//Votos de cada candidato por distrito
	for(f=0;f<FIL;f++){
		
		printf("\n   %d",f+1);
		
		for(c=0;c<COL;c++){
			
			printf("%13d",mat[f][c]);
			
		}
	
	}
	
	//Total de las columnas de cada candidato
	printf("\n\nTotal: ");
	
	for(c=0;c<COL;c++){
		
		printf("%10d   ",votos[c]);
		
	}
	
	printf("\n\nPorcentaje: ");
	
	for(c=0;c<COL;c++){
		
		printf("%10.2f%c",porcentaje[c],37);
		
	}

	if(mayor<=50 && (mayor-mayor2)>=20){
			
		printf("\n\nEl ganador es el candidato %d con el %.2f%c",pos[0]+1,mayor,37);
			
	}else if(mayor>50){
		
		printf("\n\nEl ganador es el candidato %d con el %.2f%c",pos[0]+1,mayor,37);
		
	}else{
		
		printf("\n\nEl candidato %d consiguio el %.2f de los votos",pos[0]+1,mayor,37);
		printf("\nEl candidato %d consiguio el %.2f de los votos",pos[1]+1,mayor2,37);
		printf("\nSe realizara la segunda vuelta con los candidatos.");
		
	}
			
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
