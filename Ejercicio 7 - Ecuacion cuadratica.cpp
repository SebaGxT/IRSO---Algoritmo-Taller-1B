/*Escribir un programa que pida por teclado los tres coeficientes (a, b y c) de la ecuación ax2+bx+c=0 y calcule las dos soluciones suponiendo que ambas serán reales (es decir que la raíz queda positiva).
*/
//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Main
int main(void){
	
	
//Variables

	float a,b,c,x_1,x_2,im_1,im_2,det;

//Ingreso de datos

	printf("Calculo de ecuaci%cn cuadratica\n",162);
	printf("ax2+bx2+c=0\n\n");
	printf("Ingrese el primer coeficiente: ");
	scanf("%f",&a);
	fflush(stdin);
	printf("\nIngrese el segundo coeficiente: ");
	scanf("%f",&b);
	fflush(stdin);
	printf("\nIngrese el tercer coeficiente: ");
	scanf("%f",&c);
	fflush(stdin);

//Proceso

	det=pow(b,2)-4.0*a*c;
	
	if(det>0){
		
		x_1=(-b+(pow(det,0.5)))/(2*a);
		x_2=(-b-(pow(det,0.5)))/(2*a);
		printf("\nEl valor de x1 es: %.4f",x_1);
		printf("\nEl valor de x2 es: %.4f",x_2);
		
	}
	if(det==0){
	
		x_1=(-b)/(2*a);
		x_2=(-b)/(2*a);
		printf("\nEl valor de x1 es: %.4f",x_1);
		printf("\nEl valor de x2 es: %.4f",x_2);
		
	}
	if(det<0){
		
		x_1=(-b)/(2*a);
		x_2=(-b)/(2*a);
		det=(-1)*det;
		im_1=(pow(det,0.5))/(2*a);
		im_2=(-1)*(pow(det,0.5))/(2*a);
		printf("\nEl valor de x1 real es: %.4f \tx1 i: %.4f",x_1,im_1);
		printf("\nEl valor de x2 real es: %.4f \tx2 i: %.4f",x_2,im_2);
		
	}
	
//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
}
