#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include"MetodosDeOrdenamiento.h"

int opc=0;
void MenuPrincipal();
void CargarVector(double v1[],double v2[],double v3[],double v4[],double v5[],int n);

int main(){
	int x=0,n=0;
	printf("\n Digite la cantidad de numeros que decea cargar: ");scanf("%d",&n);
	double v1[n],v2[n],v3[n],v4[n],v5[n],Inicio=0,Fin=0;
	CargarVector(v1,v2,v3,v4,v5,n);
	do{
		MenuPrincipal();
		switch(opc){
			case 1:{
				system("cls"); 
			    Inicio=time(NULL);
				Burbuja(v1,n);
				for(int i=1;i<n;i++){
					printf(" %.0lf ",v1[i]);
				}
				Fin=time(NULL);
				printf("\n\nTiempo empleado: %.2lf",(Fin-Inicio));
				getch();	
	 		break;}
	 		case 2:{
	 			system("cls");
	 			Inicio=0;Fin=0;
	 			Inicio=time(NULL);
	 			Insercion(v2,n);
	 			if(n>10000){
	 				x=0;
				}else{
					x=3;
				}
			    for(int i=x;i<n;i++){
		            printf(" %.0lf ",v2[i]);
	            }
				Fin=time(NULL);
				printf("\n\nTiempo empleado: %.2lf",(Fin-Inicio));
				getch();
			break;}
			case 3:{
				system("cls");
				Inicio=0;Fin=0;
				Inicio=time(NULL);
				Seleccion(v3,n);
				for(int i=0;i<n;i++){
					printf(" %.0lf ",v3[i]);
				}
				Fin=time(NULL);
				printf("\n\nTiempo empleado: %.2lf",(Fin-Inicio));
				getch();	
			break;}
			case 4:{
				system("cls");
				Inicio=0;Fin=0;
				Inicio=time(NULL);
				Quicksort(v4,0,n);
				for(int i=1;i<n;i++){
					printf(" %.0lf ",v4[i]);
				}
				Fin=time(NULL);
				printf("\n\nTiempo empleado: %.2lf",(Fin-Inicio));
				getch();
			break;}	
			case 5:{
				system("cls");
				Inicio=0;Fin=0;
				Inicio=time(NULL);
				Mezcla(v5,n);	
				for(int g=1;g<n;g++){
					printf(" %.0lf ",v5[g]);
				}
				Fin=time(NULL);
				printf("\n\nTiempo empleado: %.2lf",(Fin-Inicio));
				getch();
			break;}
			case 6:{
				system("cls");
				system("color 4");
				printf(" -----------------------\n");
				printf(" | PROGRAMA FINALIZADO |");
				printf("\n -----------------------");
				getch();		
			break;}
			default:{
				system("cls");
				system("color 4");
				printf(" --------------------------------------------------------------------------\n");
				printf(" | Error solo debe ingresar las opciones disponibles en el menu principal |");
				printf("\n --------------------------------------------------------------------------");
				getch();
			break;}
		}
	}while(opc!=6);
}
void CargarVector(double v1[],double v2[],double v3[],double v4[],double v5[],int n){
	system("cls");
	srand(time(NULL));
	for(int i=0;i<n;i++){
		v1[i]=(1+(rand()%100))*i;
		v2[i]+=v1[i];
		v3[i]+=v1[i];
		v4[i]+=v1[i];
		v5[i]+=v1[i];
		printf(" %.0lf ",v1[i]);
	}
	printf("\n\n ------------------------------\n");
	printf(" | CREAMOS NUMEROS ALEATORIOS |");
	printf("\n ------------------------------\n\n");
	system("pause");
}
void MenuPrincipal(){
	system("cls");
	system("color 2");
	printf("\n                                                                           MENU PRINCIPAL    ");
	printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("        1.-Burbuja mejorado");
	printf("\n\n    2.-Insercion");
	printf("\n\n    3.-Metodo seleccion");
	printf("\n\n    4.-QuickSort");
	printf("\n\n    5.-Por mezcla");
	printf("\n\n    6.-Salir");
	printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("\n                                                                  **********************************");
	printf("\n                                                                   SELECIONE EL NUMERO DE SU OPCION ");
	printf("\n                                                                  **********************************                                                                                                                                                                                                                                      opc ->> ");
	scanf("%d",&opc);
}
