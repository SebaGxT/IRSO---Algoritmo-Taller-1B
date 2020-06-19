/* Se desea volcar en un listado los resultados de una encuesta realizada a 300 personas. Se preguntó la edad, la estatura y su color preferido. Ingresarlos en un registro y luego pasar los datos a un vector de registros.
 Luego mostrar el listado completo, por último, mostrar cuantas personas tienen 18 años o más, el promedio de todas las estaturas, y cuantas de las que superan el promedio eligieron el color blanco.*/
 //Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estructura
struct encuesta{
	
	char nombre[50];
	int edad;
	float estatura;
	char color[20];
	
};

//Main
int main(){


//Variables
	
	const int PERSONAS=2;
	encuesta datos,personas[PERSONAS];
	char color[20];
	int i,contedad,contcolor,cmp;
	float promedio;
	
	contedad=0;
	contcolor=0;

//Ingreso de datos
	
	printf("Encuesta 2020\n\n");
	
	for(i=0;i<PERSONAS;i++){
		
		printf("\nIngrese el nombre y apellido: ");
		gets(datos.nombre);
		fflush(stdin);
		
		do{
			
			printf("\nIngrese la edad: ");
			scanf("%d",&datos.edad);
			fflush(stdin);
			
			if(datos.edad<0){
				
				printf("\n\nValor incorrecto. Ingrese un valor positivo.\n\n");
				
			}
			
		}while(datos.edad<0);
		
		do{
			
			printf("\nIngrese la estatura: ");
			scanf("%f",&datos.estatura);
			fflush(stdin);
			
			if(datos.estatura<0){
				
				printf("\n\nValor incorrecto. Ingrese un valor positivo.\n\n");
				
			}
			
		}while(datos.estatura<0);
		
		printf("\n%cCual es su color favorito%c: ",168,63);
		gets(datos.color);
		fflush(stdin);
		
		//Asignación en vector
		strcpy(personas[i].nombre,datos.nombre);
		strcpy(personas[i].color,datos.color);
		personas[i].edad=datos.edad;
		personas[i].estatura=datos.estatura;	
		
	}
		
		printf("\n\nIngrese color para saber la cantidad de personas que lo elijieron: ");
		gets(color);
		fflush(stdin);

//Proceso
	
	//Promedio estatura
	for(i=0;i<PERSONAS;i++){
		
		promedio+=personas[i].estatura;
		
	}
	
	promedio=promedio/PERSONAS;
	
	//Cantidad de mayores de 18
	for(i=0;i<PERSONAS;i++){
		
		if(personas[i].edad>=18){
			
			contedad++;
			
		}
		
	}
	
	//Personas que superan el promedio y elijieron color blanco
	for(i=0;i<PERSONAS;i++){
		
		//Comparación de color
		cmp=strcmp(personas[i].color,color);
		
		if(personas[i].estatura>=promedio&&cmp==0){
			
			contcolor++;
			
		}
		
	}

//Salida de datos
	
	printf("\n\nListado de encuestados\n\n");
	printf("NOMBRE Y APELLIDO\t\tEDAD\t\tESTATURA\tCOLOR.FAV\n");
	
	for(i=0;i<PERSONAS;i++){
		
		printf("\n%s\t%d\t\t%.2f\t\t%s",personas[i].nombre,personas[i].edad,personas[i].estatura,personas[i].color);
		
	}
	
	printf("\n\nLa cantidad de personas mayor de 18 es: %d",contedad);
	printf("\nLa cantidad de personas que superan el promedio y elijieron el color %s es: %d",color,contcolor);
	
//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;

}
