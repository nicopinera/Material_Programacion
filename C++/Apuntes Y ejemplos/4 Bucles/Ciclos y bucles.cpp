#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
/*	int i;
	i=0;
	while(i<=10){
		cout<<i<<endl;
		i++;
	}
	

	int i = 20;
	do{
		cout<<i<<endl;
		i--;
	}while(i>=0);
*/	
	int i; 
	
	for(i=1; i<=10 ; i++){
		cout<<i<<endl;
	}

	system("pause"); //para que no se cierre el ejecutable apenas de abre
	
	return 0;
}
/*
Bucles o ciclo

La sentencia "while"
	
	while(expresion logica){
	conjunto de instrucciones; 
	}
	
La sencentcia "do while" (Primero actua y despues piensa)

	do{
	conjunto de instrucciones;
	}while(Expresion logica)
	
La sentencia "for"

	for(expresion 1 , expresion logica , expresion 2){
	conjunto de instrucciones; 
	}
	
	expresion 1: inicializa el iterador
	expresion logica:  condicion que se tiene que cumplir
	expresion 2: aumenta el iterador
*/

