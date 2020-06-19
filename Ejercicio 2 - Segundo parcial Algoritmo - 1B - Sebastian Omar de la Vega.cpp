/*Un consultorio médico cuenta con cuatro doctores y atiende de lunes a viernes. Desarrollar un programa que luego de ingresar la cantidad de turnos por médico y por día (cada médico puede tener hasta 10 turnos diarios)
 muestre un informe completo de los turnos programados, así como la cantidad de turnos de cada doctor y el número total de cada turno por día. Asimismo, se desea saber si, al menos hay un día sin turnos para cualquiera de los doctores.*/
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(){
	
//Variables
	
	const int FIL=4,COL=5;
	int f,c,mat[FIL][COL],turnosdoc[FIL],turnodia[COL],sinturno[FIL][COL];
	bool valid=false;
	
	for(f=0;f<FIL;f++){
		
		turnosdoc[f]=0;
		turnodia[f]=0;
		
		for(c=0;c<COL;c++){
			
			sinturno[f][c]=0;
			
		}
		
	}

//Ingreso de datos
	
	printf("Turnos m%cdicos de Lunes a Viernes.\n\n",130);
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			do{
				
				printf("\nIngrese la cantidad de turnos del m%cdico %d del d%ca %d: ",130,f+1,161,c+1);
				scanf("%d",&mat[f][c]);
				fflush(stdin);
				
				if(mat[f][c]>10){
					
					printf("\n\nEl m%cdico no puede tener m%cs de 10 turnos diarios. Vuelva a ingresar por favor.\n\n",130,160);
					
				}else if(mat[f][c]<0){
					
					printf("\n\nValor incorrecto. Ingrese un valor positivo por favor.\n\n");
					
				}
				
				
			}while((mat[f][c]>10)||(mat[f][c]<0));
			
		}
		
	}

//Proceso
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			//Suma de turnos total para cada doctor
			turnosdoc[f]+=mat[f][c];
			
			//Suma total de turnos para cada día
			turnodia[c]+=mat[f][c];
			
			if(mat[f][c]==0){
				
				sinturno[f][c]=c;
				
				valid=true;
				
			}
			
		}
		
	}


//Salida de datos
	
	printf("\n\n");
	
	//Grilla de turnos completa
	printf("Doctores Lunes\tMartes\tMi%crcoles Jueves Viernes\n\n",130);
	
	for(f=0;f<FIL;f++){
		
		printf("    %d\t",f+1);
		
		for(c=0;c<COL;c++){
			
			printf("%4d\t",mat[f][c]);
			
		}
		
		printf("\n");
		
	}
	
	//Listado de turnos por doctor
	printf("\n\nCantidad total de turnos por doctor.\n\n");
	for(f=0;f<FIL;f++){
		
		printf("Doctor %d: %d\n",f+1,turnosdoc[f]);
		
	}
	
	//Listado de cantidad de turnos por día
	printf("\nCantidad total de turnos por d%ca\n\n",161);
	for(c=0;c<COL;c++){
		
		switch(c){
			
			case 0:{
				
				printf("Lunes: %d\n",turnodia[c]);
				break;
			}
			
			case 1:{
				
				printf("Martes: %d\n",turnodia[c]);
				break;
			}
			
			case 2:{
				
				printf("Mi%crcoles: %d\n",130,turnodia[c]);
				break;
			}
			
			case 3:{
				
				printf("Jueves: %d\n",turnodia[c]);
				break;
			}
			
			case 4:{
				
				printf("Viernes: %d\n",turnodia[c]);
				break;
			}
			
		}
		
	}
	
	if(valid){
		
		printf("\n\nListado de doctores sin turno\n\n");
		for(f=0;f<FIL;f++){
			
			for(c=0;c<COL;c++){
				
				if(sinturno[f][c]>0){
					
					printf("\nDoctor %d d%ca %d",f+1,161,sinturno[f][c]);
					
				}
				
			}
			
		}
		
	}else{
		
		printf("\n\nTodos los d%cas tienen turnos.\n\n",161);
		
	}
	

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
