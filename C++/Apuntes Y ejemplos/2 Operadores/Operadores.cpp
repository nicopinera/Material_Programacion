#include<iostream>
#include<cmath>
#include<math.h>

using namespace std; 

int main(){
	
	//Expresiones 
	
	cout<< "El resultado es: " 
	<< (2+2) <<endl;

		//Ejercicio 1

	float a,b, res = 0;

	cout << "digite dos numeros: "; cin >>a>>b;

	res = (a/b) + 1;
	cout.precision(2); //redondee el resultado a dos numeros despues de la coma

	cout << "El resultado es : " <<res <<endl; 

		//Ejercicio 2

	 float practica, teorica, participacion, nota_final = 0;

	 cout << "Digite la nota de practica, teoria y participacion: "; cin >> practica>>teorica>>participacion;

	practica*=  0.30; // practica = practica * 0.30 (sacar el 30%)
	teorica*= 0.60;
	participacion*= 0.10;

	nota_final = practica + teorica + participacion; 
	cout << "La nota final es igual a: " << nota_final << endl; 

		//Ejercicio 3

	float x,y,res01=0;

	cout << "Digite el valor de x , y: "; cin >> x >> y;

	res01 = (sqrt(x))/(pow(y,2)-1); //raiz cuadrada primero, despues 

	cout << "El resultado es: " << res01 << endl;

	return 0;
}

/* 
 Los signos de operaciones ( + - * /) se llaman "operadores"
 Los numeros que usamos en la operaciones se llaman "operandos"
 
 "%" operador utilizado para saber el resto de una division
 
 		Operadores Aritmeticos
 				+ suma
 				- resta
 				/ division
 				* multiplicacion
 				% resto de la division 
 	
 		Operadores Relacionales
 			Cuando se utilizan el resultado puede ser 0 o 1 
 			va a ser 0 cuando la relacion es falsa
 			va a ser 1 cuando la relacion es verdadera
 			
 				== son iguales
 				!= distintos
 				> mayor
 				>= mayor o igual
 				< menor
 				<= menor o igual
 		
 		Operadores Logicos
 			Nos permite determinar si un conjunto de valores logicos son todos verdaderos
 				&& conjuncion logica, verdadera si todos sus operandos son verdaderos. Basta que un solo operando sea falso para que su valor tambien lo sea
 				|| disyuncion logica, verdadera si al menos uno de sus operandos es verdadero. Es necesario que todos sus operandos sean falsos para que su valor tambien lo sea
 				! negacion logica, Falso si su operador es verdadero y verdadero si su operador es falso.
 		
		 Operadores Matematicos Avanzados
		 		abs(n) = valor absoluto de un numero n
		 		sqrt(n) = raiz cuadrada de un numero n
				pow(n,m) = potencia de n a la m
				log(n) = logaritmo natural de n
				log10(n) = logartmo decimal o base 10 de n
				cos(M_PI/2) = coseno de 90 grados en radianes
				sin(M_PI/2) = seno de 90 grados en radianes 
				
*/

