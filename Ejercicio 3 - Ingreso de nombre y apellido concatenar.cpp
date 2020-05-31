/*Realizar la lectura de teclado de los nombres y apellidos en forma separada de cinco
personas, guardar los nombres en un vector de caracteres y los apellidos en otro,
luego guardar el nombre completo en un tercer vector con esta forma: Apellido,
Nombre. (Por ejemplo, San Jorge, Roberto.) strcat ()*/
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Main
int main(void){
	
//Variables

	int i;
	char nombre[51],apellido[51],nomape[101];
	
//Ingreso de datos	
	
	for(i=0;i<5;i++){
		
		printf("\nIngrese el nombre: ");
		gets(nombre);
		fflush(stdin);
		printf("\nIngrese el apellido: ");
		gets(apellido);
		fflush(stdin);

//Proceso
		
		strcat(apellido,", ");
		strcat(apellido,nombre);
		strcpy(nomape,apellido);

//Salida de datos
		
		printf("%s.\n",nomape);
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
