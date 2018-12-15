//programa.cc

#include <string>
#include <iostream>

#include "persona.h"
#include "alumno.h"
#include "profesor.h"
#include "agenda.h"

void introducirAlumno();
void mostrarAlumno();
list <Alumno> buscarAlumno();
void modificarAlumno();
void borrarAlumno();
void realizarCopia();
void cargarCopia();
void mostrarProfesor();

using namespace std;

int main(){

	Profesor x;

	int a=0;

	cout<<"--------------------------------------------------------"<<endl;
	cout<<"AGENDA"<<endl;
	cout<<"¿Está utilizando el programa por primera vez?"<<endl;
	cout<<"1. Si"<<endl;
	cout<<"2. no"<<endl;
	cout<<"Seleccione una opción: ";
	cin>>a;
	cout<<"--------------------------------------------------------"<<endl;

	if(a==1){

		int n;
		cout<<"INFORMACIÓN DEL PROFESOR."<<endl;
		cout<<"Rellene la siguiente información:"<<endl;
		x.setProfesor();
		cout<<"¿Desea ver la información del profesor?"<<endl;
		cout<<"1. Si"<<endl;
		cout<<"2. no"<<endl;
		cout<<"Seleccione una opción: ";
		cin>>n;
			if(n==1){
				mostrarProfesor();
			}
			if(n==2){
				cout<<endl;
			}
		
		
		for(int i=0; i<8000; i++){

			int b=0;

			cout<<"--------------------------------------------------------"<<endl;
			cout<<"¿QUÉ DESEA REALIZAR?"<<endl;
			cout<<endl;
			cout<<"Menú de opciones:"<<endl;
			cout<<"1. Introducir alumno."<<endl;
			cout<<"2. Mostrar alumno."<<endl;
			cout<<"3. Buscar alumno."<<endl;
			cout<<"4. Modificar alumno."<<endl;
			cout<<"5. Borrar alumno."<<endl;
			cout<<"6. Realizar copia de seguridad."<<endl;
			cout<<"7. Cargar copia de seguridad."<<endl;
			cout<<"8. Cerrar programa."<<endl;
			cout<<endl;
			cout<<"Seleccione una opción: ";
			cin>>b;
			cout<<"--------------------------------------------------------"<<endl;

			if(b==1){
				introducirAlumno();			
			}

			if(b==2){
				mostrarAlumno();
			}

			if(b==3){
				buscarAlumno();
			}

			if(b==4){
				modificarAlumno();
			}

			if(b==5){
				borrarAlumno();
			}

			if(b==6){
				realizarCopia();
			}

			if(b==7){
				cargarCopia();
			}

			if(b==8){
				//exit(0);
			}
		}
	}

	if(a==2){

		int n;
		cout<<"INFORMACIÓN DEL PROFESOR."<<endl;
		cout<<"¿Desea ver la información del profesor?"<<endl;
		cout<<"1. Si"<<endl;
		cout<<"2. no"<<endl;
		cout<<"Seleccione una opción: ";
		cin>>n;
			if(n==1){
				mostrarProfesor();
			}
			if(n==2){
				cout<<endl;
			}
		
		
		for(int i=0; i<8000; i++){

			int b=0;

			cout<<"--------------------------------------------------------"<<endl;
			cout<<"¿QUÉ DESEA REALIZAR?"<<endl;
			cout<<endl;
			cout<<"Menú de opciones:"<<endl;
			cout<<"1. Introducir alumno."<<endl;
			cout<<"2. Mostrar alumno."<<endl;
			cout<<"3. Buscar alumno."<<endl;
			cout<<"4. Modificar alumno."<<endl;
			cout<<"5. Borrar alumno."<<endl;
			cout<<"6. Realizar copia de seguridad."<<endl;
			cout<<"7. Cargar copia de seguridad."<<endl;
			cout<<"8. Cerrar programa."<<endl;
			cout<<endl;
			cout<<"Seleccione una opción: ";
			cin>>b;
			cout<<"--------------------------------------------------------"<<endl;

			if(b==1){
				introducirAlumno();			
			}

			if(b==2){
				mostrarAlumno();
			}

			if(b==3){
				buscarAlumno();
			}

			if(b==4){
				modificarAlumno();
			}

			if(b==5){
				borrarAlumno();
			}

			if(b==6){
				realizarCopia();
			}

			if(b==7){
				cargarCopia();
			}

			if(b==8){
				//exit(0);
			}
		}
	}
	

  //return 0;

}










//Funciones

void introducirAlumno(){
	Agenda y;
	
	cout<<"1. INTRODUCIR ALUMNO"<<endl;
	cout<<"Rellene los siguientes datos:"<<endl;
	y.setAlumno();
	cout<<"--------------------------------------------------------"<<endl;
	}

void mostrarAlumno(){
	Agenda y;

	cout<<"2. MOSTRAR ALUMNO"<<endl;
	y.getAlumno();
	cout<<"--------------------------------------------------------"<<endl;
	
}

list <Alumno> buscarAlumno(){
	Agenda y;

	cout<<"3. BUSCAR ALUMNO"<<endl;
	y.buscaAlumno();
	cout<<"--------------------------------------------------------"<<endl;
}

void modificarAlumno(){
	Agenda y;

	cout<<"4. MODIFICAR ALUMNO"<<endl;
	//y.modificaAlumno();
	cout<<"--------------------------------------------------------"<<endl;	
}

void borrarAlumno(){
	Agenda y;

	cout<<"5. ELIMINAR ALUMNO"<<endl;
	y.eliminaAlumno();
	cout<<"--------------------------------------------------------"<<endl;
}

void realizarCopia(Agenda copia){
	Profesor x;

	cout<<"6. REALIZAR COPIA DE SEGURIDAD"<<cout;
	x.setCopia();
	cout<<"--------------------------------------------------------"<<endl;	
}

void cargarCopia(Agenda fichero){
	Profesor x;

	cout<<"7. CARGAR COPIA DE SEGURIDAD"<<endl;
	x.getCopia();
	cout<<"--------------------------------------------------------"<<endl;
}

void mostrarProfesor(){
	Profesor x;

	cout<<"MOSTRANDO INFORMACIÓN DEL PROFESOR"<<endl;
	x.getProfesor();
	cout<<"--------------------------------------------------------"<<endl;
}