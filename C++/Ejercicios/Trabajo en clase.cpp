#include<iostream> 

using namespace std;

int main(){
	char c,d; //Declaracion de la variable
	
	float n1,n2, resultado=0;
	
	cout << "Digite dos caracteres: "; cin>>c>>d; 
	
	n1 = int(c);
	
	n2 = int(d);
	
	resultado = n1 + n2;
	
	cout<<"El resultado es: " << resultado << endl;
	
	return 0;
}
