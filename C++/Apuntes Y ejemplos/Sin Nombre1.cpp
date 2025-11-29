#include<iostream>
#include<conio.h>

using namespace std;
const int dim=10;

void sumar_fila(int A[][dim], int N, int V[])
{
   int sumaFila;
   
   for(int i=0; i<N;i++){
       sumaFila=0;
       
       for(int j=0;j<N;j++){
           sumaFila= sumaFila+ A[i][j];
       }
       V[i]=sumaFila;
   }
   
}

void sumar_columna(int A[][dim], int N, int V[])
{
   int sumaColumna;
   
   for(int i=0; i<N;i++){
       sumaColumna=0; 
       
       for(int j=0; j<N;j++){
           
           sumaColumna= sumaColumna + A[j][i];
       }
       V[i]=sumaColumna;
   }
   
}

void peso_diagonal(int A[][dim], int N, float V[])
{
    
    for(int i=0;i<N;i++){
    float peso_diagonal= 0.;
    float elm=0.;
    for(int j=0;j<N;j++){
    peso_diagonal += A[i][j];
    if(i==j){
        elm=A[i][j];
    }
}
    V[i]=elm/peso_diagonal;
}
}

void ordenar(float V[], int N, int I[])
{
   float aux=0;
   for(int i=0;i<N;i++){
       if(V[i]<V[i+1]){
           aux = V[i];
           V[i] = V[i+1];
           V[i+1] = aux;
           I[i] = i+1;
       }
   }
}

int main(){
	int C[dim][dim];
	int V[dim],M[dim];
	float R[dim];
    int N,k;
    
    
    cout<<"Ingrese el numero de tpo de animales a clasificar "<<endl; cin>>N;
    
    while(N<1 || N>dim){
        cout<<"Debe ser >=1 y menor a "<<dim<<endl; cin>>N;
    };
    
    for(int i=0;i<N;i++){
    	for(int j=0;j<N;j++){
			cin>>C[i][j];
			while(C[i][j]<0){
			    cout<<"Ingrese de nuevo el numero: "; cin>>C[i][j];
			}
    			
		}
	}
	sumar_fila(C,N,V);
	for(int i=0; i<N;i++){
		cout<<"La cantidad del animal "<<i<<" que hay en la tienda es: "<<V[i];
	}
	
	sumar_columna(C,N,M);
		for(int i=0; i<N;i++){
		cout<<"La cantidad del animal "<<i<<" que el clasificador arrojo como resultado es: "<<V[i];
	}
	
	peso_diagonal(C,N,R);
	
	return 0;
	
}
