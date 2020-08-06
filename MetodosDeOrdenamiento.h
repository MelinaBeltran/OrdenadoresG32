//Metodo de ordenamiento por Bubuja Mejorada//
void Burbuja(double v1[],int n){
	int b=0,aux=0;
	do{   
		b=0;   
		for(int i=0;i<(n-1);i++){    
			if(v1[i]>v1[i+1]){     
				aux=v1[i];     
				v1[i]=v1[i+1];     
				v1[i+1]=aux;     
				b=1;    
			}   
    }  
	}while(b==1);    
} 
//Metodo de ordenamiento por Insercion//
void Insercion(double v2[],int n){
	int posicion=0,aux=0,i=0;
	for(int i=0; i<n; i++){
        posicion=i;
        aux=v2[i];
        while((posicion>0) && (v2[posicion-1]>aux)){
            v2[posicion] = v2[posicion -1];
            posicion--;
       }
        v2[posicion] = aux;
    }
}
//Metodo de ordenamiento por Seleccion//
void Seleccion(double v3[],int n){
	int k=0,menor=0,j=0;
	for(int i=0;i<n;i++){
		menor=v3[i];
		k=i;
		for(j=i+1;j<n;j++){
		    if(v3[j]<menor){
		    	menor=v3[j];
		        k=j;
		    }
		}
		v3[k]=v3[i];
		v3[i]=menor;
    }
}
//Metodo de ordenamiento por Quicksort//
void Quicksort(double v4[],int izq,int der){
	int i=izq;
	int j=der,tmp;
	double p=v4[(izq+der)/2];
	while(i<=j){
		while(v4[i]<p){
			i++;
		}
		while(v4[j]>p){
			j--;
		}
		if(i<=j){
			tmp=v4[i];
			v4[i]=v4[j];
			v4[j]=tmp;
			i++;
			j--;
		}
	}
	if(izq<j){
		Quicksort(v4,izq,j);
	}
	if(i<der){
		Quicksort(v4,i,der);
	}
}
//Metodo de ordenamiento por Mezcla//
void Mezcla(double v5[],int n){
	//Corta 
	if(n==1){
	 	return;
	}
 	int mitad=(n/2);
	double izq[mitad],der[n-mitad];
 	for(int i=0;i<mitad;i++){
 	 	izq[i]=v5[i];
 	}
 	for(int i=mitad;i<n;i++){
  		der[i-mitad] = v5[i];
  	}
  	Mezcla(izq,mitad);
  	Mezcla(der,n-mitad);
 	izq[0];der[0];v5[0];
	int nIzq = mitad,nDer = (n-mitad),i=0,j=0,k=0;
 	while( ( i < nIzq ) && ( j < nDer )){
  		if(izq[i] <= der[j]){
   			v5[k] = izq[i];
   			i++;
  		}else{
   			v5[k] = der[j];
   			j++;
  		}
  		k++;
 	}
 	while(i < nIzq){
  		v5[k] = izq[i];
  		i++;
  		k++;
 	}
 	while(j < nDer){
 		v5[k] = der[j];
  		j++;
  		k++;
 	}
}
