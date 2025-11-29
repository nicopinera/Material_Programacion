#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}persona1;

struct info_direccion{
	char direccion[30];
	char ciudad[40];
	char provincia[40];
};

struct empleado{
	char nombre[50];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];


int main(){
	/*
	
	cout<<"Nombre: ";cin.getline(persona1.nombre,20,'\n');
	cout<<"Edad: ";cin>>persona1.edad;
	
	
	cout<<"Nombre1: "<<persona1.nombre<<"."<<endl;
	cout<<"Edad1: "<<persona1.edad<<" anos."<<endl;
	
		//anidadas
	for(int i=0;i<2;i++){
		fflush(stdin);//vaciar el buffer y permitir digitar valores
		
		cout<<"Digite su nombre: ";
		
		cin.getline(empleados[i].nombre,50,'\n');
		
		cout<<"Digite su direccion: "; cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
		
		cout<<"Digite su ciudad: "; cin.getline(empleados[i].dir_empleado.ciudad,40,'\n');
		
		cout<<"Digite su procincia: "; cin.getline(empleados[i].dir_empleado.provincia,40,'\n');
		
		cout<<"Salario: ";cin>>empleados[i].salario;
		
		cout<<"\n";
		
	}
	
	//imprimiendo los datos
	
	for(int i=0;i<2;i++){
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
		cout<<"\n";
	}
	
	*/

	
	
	
	getch();
	return 0;
}

/*
Estructura: Coleccion de uno a mas tipos de elementos denominados campos
cada uno de los cuales puede ser un tipo de dato diferente

struct nombre{
	Campo 1;
	campo 2;
	campo 3;
};

*/
