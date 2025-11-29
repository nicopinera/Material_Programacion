#include<iostream> //Biblioteca que permite interactuar con la consola
#include<cmath> //Libreria para expresiones matematicas avanzadas
#include<math.h>
#include<iomanip> //manipuladores de flujo, manipular el cout y el cin

using namespace std; //para imprimir cosas en pantalla

int main(){ //Funcion principal

	cout<<"Hola mundo"<<endl; //cadena de caracteres

	int e = 16;
	float d = 15.1;
	double m = 16.56789487;
	char l ='h';
	bool comparador = true;
	bool comparador2 = false;
	int n1=10;

cout<<e<<endl<<d<<endl<<m<<endl<<l<<endl<<comparador<<endl<<comparador2<<endl;

	char fecha [10]; //Para mas cantidad de caracteres

	cout<<"Digite una fecha: ";
	cin>>fecha;

	cout << "La fecha es: " << fecha << endl;
	
	cout<<"Numero es igual a: "<<n1<< endl;
	
	n1 +=5; //rescribir la variable
	
	cout<<"Si a numero le sumo 5 es igual a: "<<n1<<endl;
	
	int contador;
	
	contador = 10;
	
	contador ++; //operador de postfijo
	
	cout<< setw(5) << "El primer turno es: " << contador << endl;
	
	++ contador; //operador de prefijo
	
	cout <<"El siguiente turno es: " << contador << endl;
}
/* 
Variable: espacio en memoria donde almaceno un valor determinado

	TIPO DE DATOS O VARIABLES 
		int = tipo de datos enteros, ninguna coma decimal o dato decimal --> 16 bits --> -32768 hasta 32767 (2^16)
		float = tipo de dato flotante, que tengan valor decimal o de precision simple  --> 16 bits --> -32768 hasta 32767
		double = Dato flotante de precision doble, parecido al flotante pero mas extenso --> 64 bits --> 2^64
		char = tipo de dato caracter, podes imprimir en pantalla cualquier tipo de caracter, desde letras hasta numeros
		bool = valor logico de tipo booleano, puede ser true o false 

 	lECTURA O ENTRADA DE DATOS	
		"cin":  guardar informacion en una variable
		"cout": imrpime el contenido en pantalla
		"endl": sirve para tenes uns espacio o salto de linea entre lo que estas copiando
		"=": operador de asignacion
		"<<": operador de insercion
		">>": operador de extraccion
	
	OPERADORES DE FLUJO
		"setw(ancho)" : setear el ancho del campo donde se muestra la variable
		"setprecision(int)" : cantidad de numeros cignificativos que se muestran
		"setfill('char')" : rellena espacios con el caracter que le pongamos
		"scientific" : muestra en notacion cientifica
		"boolalpha" : muestra verdadero o falso segun corresponda
		
		
*/

