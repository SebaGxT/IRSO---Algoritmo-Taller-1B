//Cargar un vector con 100 nombres de hasta 50 caracteres, luego mostrar por pantalla en nombre m�s largo y su posici�n. strlen() y strcpy()
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Main
int main(void){
	
//Variables
	
	const int FIL=100,COL=51;
	int f,c,i,cantcar,aux,pos;
	char nombre[FIL][COL],nombre2[51];

//Ingreso de datos	
	
	printf("Cargar 100 nombres, se mostrara por pantalla el que tenga m%cs caracteres y su posici%cn.\n\n",160,162);

	for(f=0;f<FIL;f++){
		
			printf("\nIngrese un nombre: ");
			gets(nombre[f]);
			fflush(stdin);
		
	}

//Proceso
		
		cantcar=strlen(nombre[0]);
		
		for(f=0;f<FIL;f++){
			
			if(strlen(nombre[f])>cantcar){
				
				//Asignaci�n de nombre m�s largo a vector de salida
				strcpy(nombre2,nombre[f]);
				
				//Posici�n de ingreso de nombre
				pos=f;
				
			}
			
		}

			
//Salida de datos
	
	printf("\nNombres ingresados:\n");
	
	for(f=0;f<FIL;f++){
		
		printf("\n%s\n",nombre[f]);
		
	}

	printf("\n\nEl nombre m%cs largo es: %s\n",160,nombre2);
	printf("Fue cargado en la posici%cn: %d\n",162,pos+1);
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
