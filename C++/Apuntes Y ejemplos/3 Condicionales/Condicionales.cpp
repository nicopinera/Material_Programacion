#include<iostream>
#include<math.h>

using namespace std;

int main(){
/*	
	//Sentencia if - else
	
	int numero, dato = 5;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	if(numero == dato){ 
		cout << "El numero es igual a 5"<<endl;
	}
	
	if(numero < dato){
		cout<< "El numero es menor que 5"<<endl;
	}
	else{
		cout<<"El numero es mayor que 5" <<endl;
	}
	

	//Sentencia switch

	int n1;
	cout << "digite un numero entre 1 y 5: ";
	cin >> n1;
	
	switch(n1){
		case 1: cout<< "Es el numero 1"; break;
		case 2: cout<< "Es el numero 2"; break;
		case 3: cout<< "Es el numero 3"; break;
		case 4: cout<< "Es el numero 4"; break;
		case 5: cout<< "Es el numero 5"; break;
		default : cout <<"No es un numero entre 1 y 5"; break;
	}
*/
/*
	//Ejercicio 1
	
	int n1, n2;
	cout <<"Digite dos numeros: "; cin >> n1 >> n2;
	
	if(n1==n2){
		cout << "Son iguales";
	}
	
	
	else if(n1>n2){
		cout<< "El mayor es: " << n1;
	}
	
	else{
		cout << "El mayor es: "<<n2; 
	}
	 	// Ejercicio 2
	int numero;
	
	cout <<"Digite un numero: "; cin>>numero;
	
	if(numero == 0){
		cout<<"El numero es cero";
	}
	
	else if(numero%2==0){ //Divide al numero entre dos y saca el resto. 
		cout<<"El numero es par";
	}
	
	else{
		cout<<"El numero es impar";
	}
	return 0;
	
	//Ejercicio 3
	int numero;
	cout<<"digite un numero: "; cin >>numero;
	
	if(numero == 0){
		cout<< "El numero es 0";
	}
	
	else if (numero < 0){
		cout<< "El numero es negativo";
	}
	
	else {
		cout<< "El numero es positivo";
	}
	
		//Ejercicio 4
	char letra;
	
	cout<<"Digite un caracter: "; cin>>letra;
	
	switch(letra){
		case 'a': 
		case 'e': 
		case 'i': 
		case 'o': 
		case 'u': cout << "Es una vocal minuscula"; break;
		default : cout << "NO es una vocal minuscula"; break;
	}
	
			//Ejercicio 5
	char letra;
	
	cout<<"Digite un caracter: "; cin>>letra;
	
	switch(letra){
		case 'a': 
		case 'e': 
		case 'i': 
		case 'o': 
		case 'u': cout << "Es una vocal minuscula"; break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"Es una vocal mayuscula"; break;
		default : cout << "NO es una vocal minuscula"; break;
	}
	
		//Ejercicio 6
	int edad;
	cout << "Digite su edad: "; cin>>edad;
	
	if((edad>=18)&&(edad<=25)){
		cout<<"Su edad esta en el rango de 18 A 25";
	}
	
	else{
		cout<<"Su edad no esta en el rango de 18 a 25";
	}


		//Ejercicio 7
	int numero,unidades, decenas,centenas,millar;
	
	cout<<"digite un numero: "; cin>>numero;
	unidades = numero%10; numero/=10; 
	decenas = numero%10; numero/=10;
	centenas = numero%10; numero/=10;
	millar = numero%10;numero/=10;
	
	switch(millar){
		case 1: cout<< "M"; break;
		case 2: cout << "MM"; break;
		case 3: cout <<"MM"; break;
	}
	
	switch(centenas){
		case 1: cout<<"C";break;
		case 2: cout<<"CC";break;
		case 3: cout<<"CCC";break;
		case 4: cout<<"CD";break;
		case 5: cout<<"D";break;
		case 6: cout<<"DC";break;
		case 7: cout<<"DCC";break;
		case 8: cout<<"DCC";break;
		case 9: cout<<"CM";break;
		
	}
	
		switch(decenas){
		case 1: cout<<"X";break;
		case 2: cout<<"XX";break;
		case 3: cout<<"XXX";break;
		case 4: cout<<"XL";break;
		case 5: cout<<"L";break;
		case 6: cout<<"LX";break;
		case 7: cout<<"LXX";break;
		case 8: cout<<"LXXX";break;
		case 9: cout<<"XC";break;
		
	}
	
		switch(unidades){
		case 1: cout<<"I";break;
		case 2: cout<<"II";break;
		case 3: cout<<"III";break;
		case 4: cout<<"IV";break;
		case 5: cout<<"V";break;
		case 6: cout<<"VI";break;
		case 7: cout<<"VII";break;
		case 8: cout<<"VIII";break;
		case 9: cout<<"IX";break;
		
	}
*/
	
	int saldo_inicial = 1000, opc;
	float extra, saldo = 0, retiro;
	double cbu, cant_tranf;
	cout<<"\t Bienvenido a su cajero automatico"<<endl;
	cout<<"1. Ingresar dinero en tu cuenta" <<endl;
	cout<<"2. Retirar dinero de la cuenta: "<<endl;
	cout<<"3. Transferencia"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Opcion: "; cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Ingrese la cantidad de dinero a ingresar: "<<endl; cin>>extra; 
			saldo = saldo_inicial + extra; 
			cout <<"El nuevo saldo es de: " <<saldo;
			break;
			
		case 2:
			cout<<"Ingrese la cantidad de dinero a extraer: "; cin>>retiro;
			
			if (retiro > saldo_inicial){
				cout<<"NO tiene esa cantidad de dinero";
				}
			
			else{
			saldo = saldo_inicial - retiro;
			cout<<"El nuevo saldo de la cuenta es de: "<<saldo;
			}
			
			break;
			
		case 3:
			cout<<"Ingrese el cbu o alias: "; cin>>cbu;
			cout<< "Ingrese la cantidad a transferir: "; cin>> cant_tranf;
			cout<< "Se transfirieron " << cant_tranf << " al cbu " << cbu;
			break; 
			
		case 4: break;
	}
	
	return 0;
}

/* Condicionales
		La sentencia if
	
	if(Condicion){ (si se cumple la condicion pasa lo siguiente ...)
		Intruccion 1;
	}
	
	else{ (si no se cumple lo anterior pasa esto...)
	Instruccion 2;
	}
	
Condicionales simples: solo usar el if
condicionales dobles: if + else

		La sentencia switch

	switch(expresion){
		case literal1:
			conjunto de instrucciones1;
			break;
		case literal2:
			conjunto de instrucciones2;
			break;
		case literaln:
			conjunto de instruccionesN;
			break;
		default:
			conjunto de intrucciones por defecto;
			break;
		}
		
condicionales multiples: sentencia switch.
*/
