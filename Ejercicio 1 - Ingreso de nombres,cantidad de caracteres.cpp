//Cargar un vector con 100 nombres de hasta 50 caracteres, luego mostrar por pantalla en nombre m�s largo y su posici�n. strlen() y strcpy()
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Main
int main(void){
	
//Variables
	
	const int N=100;
	int i,cantcar,aux,contpos;
	char nombre1[51],nombre2[51];

//Ingreso de datos	
	
	printf("Cargar 100 nombres, se mostrara por pantalla el que tenga m%cs caracteres y su posici%cn.\n\n",160,162);

	for(i=0;i<N;i++){
		
		//Ingreso de nombre
		printf("\nIngrese un nombre: ");
		gets(nombre1);
		fflush(stdin);

		//Contar cantidad de caracteres
		aux=strlen(nombre1);

//Proceso
		
		if(aux>cantcar){
			
			//Asignaci�n de caracteres para comparaci�n de longitud
			cantcar=aux;
			
			//Posici�n de ingreso de nombre
			contpos=i+1;
			
			//Asignaci�n de nombre m�s largo a vector de salida
			strcpy(nombre2,nombre1);
			
		}
		
	}
			
//Salida de datos

	printf("\n\nEl nombre m%cs largo es: %s\n",160,nombre2);
	printf("Fue cargado en la posici%cn: %d\n",162,contpos);
	printf("Cantidad de caracteres: %d",cantcar);
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
