#include <string>
#include <iostream>

#include "persona.h"
#include "alumno.h"
#include "profesor.h"
#include "agenda.h"

int main(){

	//Profesor x;
	Agenda y;

	/*int a=0;

	cout<<"Agenda"<<endl;
	cout<<"¿Está utilizando el programa por primera vez?"<<endl;
	cout<<"1. Si."<<endl;
	cout<<"2. no."<<endl;
	cout<<"Seleccione una opción: ";
	cin>>a;

	if(a==1){

		cout<<"Rellene la siguiente información:"<<endl;
		x.setProfesor();
	}*/

	int b=0;

	cout<<"Menú de opciones:"<<endl;
	cout<<"1. Introducir alumno."<<endl;
	cout<<"2. Mostrar alumno."<<endl;
	cout<<"3. Buscar alumno."<<endl;
	cout<<"4. Modificar alumno."<<endl;
	cout<<"5. Borrar alumno."<<endl;
	cout<<"6. Realizar copia de seguridad."<<endl;
	cout<<"7. Cargar copia de seguridad."<<endl;
	cout<<endl;
	cout<<"Seleccione una opción: ";
	cin>>b;

	if(b==1){
		cout<<"1. Introducir alumno"<<endl;
		cout<<"Rellene los siguientes datos:"<<endl;
		y.setAlumno();
	}

	if(b==2){
		cout<<"2. Mostrar alumno"<<endl;
		y.getAlumno();
	}

	if(b==3){
		cout<<"3. Buscar alumno"<<endl;
		y.buscaAlumno();
	}

	/*if(b==4){
		cout<<"4. Moidifcar alumno"<<endl;
		y.modificaAlumno();
	}

	if(b==5){
		cout<<"5. Borrar alumno"<<endl;
		//Falta funcion
	}

	if(b==6){
		cout<<"6. Realizar copia de seguridad"<<endl;
		x.setCopia();
	}

	if(b==7){
		cout<<"7. Cargar copia de seguridad"<<endl;
		x.getCopia();
	}*/

  return 0;

}