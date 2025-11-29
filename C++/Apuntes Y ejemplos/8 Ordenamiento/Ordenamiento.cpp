#include<iostream>
#include<conio.h>

using namespace std;

int main(){
/*

//Metodo Burbuja
		int numero[] = {1,6,3,4,2,5};
	int i,j,aux;
	
	//Metodo de Burbuja
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(numero[j]>numero[j+1]){
				aux=numero[j];
				numero[j]=numero[j+1];
				numero[j+1]=aux;
			}
		}
	}
	
	cout<<"Orden ascendente: "<<endl;
	
	for(i=0;i<6;i++){
		cout<<numero[i]<< " ";
	}
	 cout<<"\nOrden descendente: "<< endl;
	 for(i=5;i>=0;i--){
	 	cout<<numero[i]<<" ";
	 }
	 
	 
//Ordenamiento por Insercion	 
	int numero[] = {2,3,4,1,5};
	int i,pos,aux;
	
	for(i=0;i<5;i++){
		pos=i;
		aux= numero[i];
		
		while((pos>0)&&(numero[pos-1]>aux)){
			numero[pos]=numero[pos-1];
			pos--;
		}
		numero[pos]=aux;
	}
	
		cout<<"Orden ascendente: "<<endl;
	
	for(i=0;i<5;i++){
		cout<<numero[i]<< " ";
	}
	 cout<<"\nOrden descendente: "<< endl;
	 for(i=4;i>=0;i--){
	 	cout<<numero[i]<<" ";
	 }	 
	 
	 	//Ordenamiento por seleccion
	int numero[] = {2,3,4,1,5};
	int i,j,aux,min;
	
	for(i=0;i<5;i++){
		min=i;
		for(j=i+1;j<5;j++){
			if(numero[j]<numero[min]){
				min=j;
			}
		}
		aux= numero[i];
		numero[i]=numero[min];
		numero[min]= aux;
	}
		cout<<"Orden ascendente: "<<endl;
	
	for(i=0;i<5;i++){
		cout<<numero[i]<< " ";
	}
	 cout<<"\nOrden descendente: "<< endl;
	 for(i=4;i>=0;i--){
	 	cout<<numero[i]<<" ";
	 }
*/
	
		
	getch();
	return 0;
}

/*

Metodo burbuja: algoritmo sencillo, funciona revisando cada elemento de una lista con el sigueinte
si = numeroActual> nomeroSiguiente --> Realizamos un cambio

ordenamiento por insercion
si numeroIzq>numeroActual -->cambio

ordenamiento por seleccion


*/
