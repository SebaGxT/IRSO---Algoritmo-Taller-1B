/*Un sistema de ecuaciones lineales. Diseñar un programa que lea los valores A, B, C, D, E y F y visualice los resultados x e y. 
Fomulas: X= (CE-BF)/(AE-BD) Y= (AF-CD)/(AE-BD) */
//librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
	
//Variables

	int A,B,C,D,E,F;
	float X,Y;

//Ingreso de datos

	printf("Ingrese los valores indicados para obtener X e Y\n\n");
	printf("Ingrese el valor de A: ");
	scanf("%d",&A);
	fflush(stdin);
	printf("\nIngrese el valor de B: ");
	scanf("%d",&B);
	fflush(stdin);
	printf("\nIngrese el valor de C: ");
	scanf("%d",&C);
	fflush(stdin);
	printf("\nIngrese el valor de D: ");
	scanf("%d",&D);
	fflush(stdin);
	printf("\nIngrese el valor de E: ");
	scanf("%d",&E);
	fflush(stdin);
	printf("\nIngrese el valor de F: ");
	scanf("%d",&F);
	fflush(stdin);

//Proceso
	
	X=((C*E)-(B*F))/((A*E)-(B*D));
	Y=((A*F)-(C*D))/((A*E)-(B*D));
	
//Salida de datos
	
	printf("\nEl valor de X es: %.2f",X);
	printf("\nEl valor de Y es: %.2f",Y);

//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
