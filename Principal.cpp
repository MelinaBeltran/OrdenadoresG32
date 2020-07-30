#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include"MetodosDeOrdenamiento.h"
int opc=0;
double Duracion=0,Inicio=0,Fin=0;
void MenuPrincipal();
void CargarVector(double v1[],double v2[],double v3[],double v4[],double v5[],int n);
int main(){
	system("color 2");
	int z=0,j=0,i=0,n=0,b=0,aux=0;
	//pedimos el tama�o del vector
	printf("\n Digite la cantidad de numeros que decea cargar: ");scanf("%d",&n);
	//asignamos el tama�o al vector
	double v1[n],v2[n],v3[n],v4[n],v5[n];
	//llamamos la funcion
	CargarVector(v1,v2,v3,v4,v5,n);
	do{
		//llamamos la funcion
		MenuPrincipal();
		switch(opc){
			case 1:{
				system("cls");
				//Inicia calculando el tiempo del ordenador 
			    Inicio=time(NULL);
			    //llamamos el metodo de ordenamiento
				Burbuja(v1,n);
				//mostramos los vectores ordenados
				for(int i=1;i<n;i++){
					printf("%.0lf\t \t",v1[i]);
				}
				//Finaliza el tiempo calculado del ordenador
				Fin=time(NULL);
				//calculamos el tiempo empleado
				Duracion=Fin-Inicio;
				printf("\nTiempo empleado: %.2lf",Duracion);
				getch();	
	 		break;}
	 		case 2:{
	 			system("cls");
	 			Duracion=0;Inicio=0;Fin=0;
	 			//Inicia calculando el tiempo del ordenador 
	 			Inicio=time(NULL);
	 			//llamamos el metodo de ordenado
	 			Insercion(v2,n);
	 			//mostramos los vectores ordenados
			    for(int i=0;i<n;i++){
		            printf(" %.0lf\t \t",v2[i]);
	            }
				//Finaliza el tiempo calculado del ordenador
				Fin=time(NULL);
				//calculamos el tiempo empleado
				Duracion=Fin-Inicio;
				printf("\nTiempo empleado: %.2lf",Duracion);
				getch();
			break;}
			case 3:{
				system("cls");
				Duracion=0;Inicio=0;Fin=0;
				//Inicia calculando el tiempo del ordenador 
				Inicio=time(NULL);
				//llamamos el metodo de ordenado
				Seleccion(v3,n);
				//mostramos los vectores ordenados
				for(int i=0;i<n;i++){
					printf(" %.0lf\t \t",v3[i]);
				}
				//Finaliza el tiempo calculado del ordenador
				Fin=time(NULL);
				//calculamos el tiempo empleado
				Duracion=Fin-Inicio;
				printf("\nTiempo empleado: %.2lf",Duracion);
				getch();	
			break;}
			case 4:{
				system("cls");
				Duracion=0;Inicio=0;Fin=0;
				//Inicia calculando el tiempo del ordenador
				Inicio=time(NULL);
				//llamamos el metodo de ordenado
				Quicksort(v4,0,n);
				//mostramos los vectores ordenados	
				for(int i=1;i<n;i++){
					printf(" %.0lf\t \t",v4[i]);
				}
				//Finaliza el tiempo calculado del ordenador
				Fin=time(NULL);
				//calculamos el tiempo empleado
				Duracion=Fin-Inicio;
				printf("\nTiempo empleado: %.2lf",Duracion);
				getch();
			break;}	
			case 5:{
				system("cls");
				Duracion=0;Inicio=0;Fin=0;
				//Inicia calculando el tiempo del ordenador
				Inicio=time(NULL);
				//llamamos el metodo de ordenado
				Mezcla(v5,n);
				//mostramos los vectores ordenados	
				for(int g=1;g<n;g++){
					printf(" %.0lf\t \t",v5[g]);
				}
				//Finaliza el tiempo calculado del ordenador
				Fin=time(NULL);
				//calculamos el tiempo empleado
				Duracion=Fin-Inicio;
				printf("\nTiempo empleado: %.2lf",Duracion);
				getch();
			break;}
			case 6:{
				printf("FIN");		
			break;}
		}
	}while(opc!=6);
	getch();system("cls");
}
void CargarVector(double v1[],double v2[],double v3[],double v4[],double v5[],int n){
	system("cls");
	srand(time(NULL));
	for(int i=0;i<n;i++){
		//cargamos los vectores los vectores aleatorios
		v1[i]=(1+(rand()%100))*i;
		v2[i]+=v1[i];
		v3[i]+=v1[i];
		v4[i]+=v1[i];
		v5[i]+=v1[i];
		printf("%.0lf \n",v1[i]);
	}
	getch();
}
void MenuPrincipal(){
	//Menu
	system("cls");
	system("color 2");
	printf("\n                                                    MENU PRINCIPAL    ");
	printf("\n----------------------------------------------------------------------------------------------------------------------------");
	printf("\n    1.-Burbuja mejorado");
	printf("\n\n    2.-Insercion");
	printf("\n\n    3.-Metodo seleccion");
	printf("\n\n    4.-QuickSort");
	printf("\n\n    5.-Por mezcla");
	printf("\n\n    6.-Salir");
	printf("\n---------------------------------------------------------------------------------------------------------------------------");
	printf("\n                                            **********************************");
	printf("\n                                             SELECIONE EL NUMERO DE SU OPCION ");
	printf("\n                                            ***********************************                                  opc ->> ");
	scanf("%d",&opc);
}
