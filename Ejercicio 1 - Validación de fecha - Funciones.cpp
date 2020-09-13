//Realizar un programa que valide varias fechas, ingresando día, mes y año como datos numéricos. Preguntar al usuario si desea seguir ingresando fechas. Hacer la validación en una función.
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Funciones

void confirm();

void validfecha(int d,int m, int a){
	
	
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		
		if(d>0&&d<=31){
			
			printf("\n\nLa fecha %d/%d/%d es v%clida.\n\n",d,m,a,160);
			confirm();
			
		}else{
			
			printf("\n\nLa fecha %d/%d/%d es inv%clida.\n\n",d,m,a,160);
			confirm();
			
		}
		
		
	}else if(m==4||m==6||m==9||m==11){
		
		if(d>0&&d<=30){
		
			printf("\n\nLa fecha %d/%d/%d es v%clida.\n\n",d,m,a,160);
			confirm();
			
		}else{
			
			printf("\n\nLa fecha %d/%d/%d es inv%clida.\n\n",d,m,a,160);
			confirm();	
			
		}
		
	}else if(m==2){
		
		if(a%400==0||a%4==0&&a%100!=0){
			
			if(d>0&&d<=29){
				
				printf("\n\nLa fecha %d/%d/%d es v%clida.\n\n",d,m,a,160);
				printf("El a%co es bisciesto.\n\n",164);
				confirm();
				
			}else{
				
				printf("\n\nLa fecha %d/%d/%d es inv%clida.\n\n",d,m,a,160);
				confirm();
				
			}
			
		}else{
			
			if(d>0&&d<=28){
				
				printf("\n\nLa fecha %d/%d/%d es v%clida.\n\n",d,m,a,160);
				printf("El a%co no es bisciesto.\n\n",164);
				confirm();
				
			}else{
				
				if(d==29){
					
					printf("\n\nLa fecha %d/%d/%d es inv%clida ya que el a%co no es bisciesto.\n\n",d,m,a,160,164);
					
				}else{
					
					printf("\n\nLa fecha %d/%d/%d es inv%clida.\n\n",d,m,a,160);
					
				}
				
				confirm();
				
			}
			
		}
		
	}else{
		
		printf("\n\nLa fecha %d/%d/%d es inv%clida.\n\n",d,m,a,160);
		confirm();
		
	}
	
}

void confirm(){
	
	char conf[2];
	int i,dia,mes,anio;
		
	printf("\n\n%cDesea ingresar una fecha%c ingrese SI para confirmar o NO para cancelar: ",168,63);
	gets(conf);
	fflush(stdin);
	
	for(i=0;i<2;i++){
		
		tolower(conf[i]);
		
	}
	
	if(strcmp(conf,"si")==0){
		
		printf("\nIngrese la fecha en formato dd/mm/aaaa\n\n");
		printf("Fecha: ");
		scanf("%d/%d/%d",&dia,&mes,&anio);
		fflush(stdin);
		
		validfecha(dia,mes,anio);
		
	}else{
		
		printf("\n\n**********Fin de la validaci%cn**********\n\n",162);
		
	}
	
}

//Main
int main(){

//Inicio
	
	printf("Validaci%cn de fechas\n\n",162);
	
	confirm();

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
