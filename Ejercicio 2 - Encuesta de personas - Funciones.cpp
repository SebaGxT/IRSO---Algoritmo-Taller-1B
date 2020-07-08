/*Este es el mismo programa que hicimos en la actividad n° 8, pero lo vamos a modularizar con funciones:
Se desea volcar en un listado los resultados de una encuesta realizada a 300 personas. Se preguntó la edad, la estatura y su color preferido. El ingreso de datos se hará en una función y luego pasar los datos a un vector de registros.
 Luego mostrar el listado completo, por último, mostrar cuantas personas tienen 18 años o más, hacer una función para eso, el promedio de todas las estaturas en otra función, y cuantas de las que superan el promedio eligieron el color blanco
  en una última función.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int CANTPER=4;

//Estructura

struct encuesta{
	
	int edad;
	float estatura;
	char color[20];
	
};

//Funciones

int edad(){
	
	int ed;
	
	do{
		
		printf("\nIngrese la edad: ");
		scanf("%d",&ed);
		fflush(stdin);
		
		if(ed<1){
			
			printf("\nDato inv%clido, vuelva a ingresar porfavor.\n\n",160);
			
		}
		
	}while(ed<1);
	
	return ed;

}

float estatura(){
	
	float est;
	
	do{
		
		printf("\nIngrese la estatura: ");
		scanf("%f",&est);
		fflush(stdin);
		
		if(est<=0){
			
			printf("\nDato inv%clido, vuelva a ingresar porfavor.\n\n",160);
			
		}
		
	}while(est<=0);
	
	return est;
	
}

char color(char col[20]){
	
	printf("\nIngrese color favorito: ");
	gets(col);
	fflush(stdin);
	
	
}

int contedad18(encuesta vec[CANTPER]){
	
	int i,conte18;
	encuesta persona;
	
	conte18=0;
	
	for(i=0;i<CANTPER;i++){
		
		persona.edad=vec[i].edad;
		
		if(persona.edad>17){
			
			conte18++;
			
		}
		
	}
	
	return conte18;
	
}

float promedioestatura(encuesta vec[CANTPER]){
	
	float prom;
	int i;
	encuesta persona;
	
	prom=0;
	
	for(i=0;i<CANTPER;i++){
		
		persona.estatura=vec[i].estatura;
		
		prom+=persona.estatura;
		
	}
	
	prom=prom/CANTPER;
	
	return prom;
	
}

int colorelegido(encuesta vec[CANTPER], float prom){
	
	int i,a,contcol;
	encuesta persona;
	char colorencuestado[20];
	
	contcol=0;
	
	printf("\nIngrese el color a mostrar resultado: ");
	gets(colorencuestado);
	fflush(stdin);
	
	for(i=0;i<CANTPER;i++){
		
		strcpy(persona.color,vec[i].color);
		persona.estatura=vec[i].estatura;
		a=strcmp(colorencuestado,persona.color);
		
		if(a==0&&persona.estatura>prom){
			
			contcol++;
			
		}
		
	}
	
	return contcol;
	
}

//Main
int main(){
	
//Variables

	encuesta personas,reg_encues[CANTPER];
	int i,cont18,colorfav;
	float promedio;

//Ingreso de datos
	
	printf("Encuesta de personas\n\n");

//Proceso
	
	for(i=0;i<CANTPER;i++){
		
		personas.edad=edad();
		personas.estatura=estatura();
		color(personas.color);
		
		reg_encues[i].edad=personas.edad;
		reg_encues[i].estatura=personas.estatura;
		strcpy(reg_encues[i].color,personas.color);
		
	}
		
	cont18=contedad18(reg_encues);
	promedio=promedioestatura(reg_encues);
	colorfav=colorelegido(reg_encues,promedio);

//Salida de datos
	
	printf("\n\nEdad	Promedio	Color\n");
	
	for(i=0;i<CANTPER;i++){
		
		personas.edad=reg_encues[i].edad;
		personas.estatura=reg_encues[i].estatura;
		strcpy(personas.color,reg_encues[i].color);
		
		printf("\n%d	%.2f		%s",personas.edad,personas.estatura,personas.color);
		
	}
	
	printf("\n\nCantidad de personas mayor de 18: %d",cont18);
	printf("\nPromedio de altura: %.2f",promedio);
	printf("\nCantidad de personas que eligieron el color y superan el promedio: %d",colorfav);

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
