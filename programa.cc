//programa.cc

#include <string>
#include <iostream>
#include <cstdlib>

#include "persona.h"
#include "alumno.h"
#include "profesor.h"
#include "agenda.h"

using namespace std;

int main(){

	Profesor x;
	Agenda y;


	int a=0;
	int b=0;
	int n=0;

	cout<<"--------------------------------------------------------"<<endl;
	cout<<"			AGENDA"<<endl;
	cout<<"¿Está utilizando el programa por primera vez?"<<endl;
	cout<<"1. Si"<<endl;
	cout<<"2. no"<<endl;
	cout<<"Seleccione una opción: ";
	cin>>a;
	cout<<"--------------------------------------------------------"<<endl;

	if(a==1){

		cout<<"INFORMACIÓN DEL PROFESOR."<<endl;
		cout<<"Rellene la siguiente información:"<<endl;
		x.setProfesor();
	}

	cout<<"¿Desea ver la información del profesor?"<<endl;
	cout<<"1. Si"<<endl;
	cout<<"2. no"<<endl;
	cout<<"Seleccione una opción:"<<endl;
	cin>>n;
		if(n==1){
			cout<<"MOSTRANDO INFORMACIÓN DEL PROFESOR"<<endl;
			//x.getProfesor();
			cout<<"--------------------------------------------------------"<<endl;
		}
		if(n==2){
			cout<<endl;
		}		
		
		
		for(int i=1; i != 0;){

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
				cout<<"1. INTRODUCIR ALUMNO"<<endl;
				cout<<"Rellene los siguientes datos:"<<endl;
				y.setAlumno();
				cout<<"--------------------------------------------------------"<<endl;		
			}

			if(b==2){
				cout<<"2. MOSTRAR ALUMNO"<<endl;
				y.getAlumno();
				cout<<"--------------------------------------------------------"<<endl;
			}

			if(b==3){
				cout<<"3. BUSCAR ALUMNO"<<endl;
				y.buscaAlumno();
				cout<<"--------------------------------------------------------"<<endl;
			}

			if(b==4){
				cout<<"4. MODIFICAR ALUMNO"<<endl;
				//y.modificaAlumno();
				cout<<"--------------------------------------------------------"<<endl;
			}

			if(b==5){
				cout<<"5. ELIMINAR ALUMNO"<<endl;
				y.eliminaAlumno();
				cout<<"--------------------------------------------------------"<<endl;
			}

			if(b==6){
				cout<<"6. REALIZAR COPIA DE SEGURIDAD"<<cout;
				//x.setCopia();
				cout<<"--------------------------------------------------------"<<endl;	
			}

			if(b==7){
				cout<<"7. CARGAR COPIA DE SEGURIDAD"<<endl;
				//x.getCopia();
				cout<<"--------------------------------------------------------"<<endl;
			}

			if(b==8){
				exit(-1);
			}

			cout<<"Quiere seguir usando el programa"<<endl;
			cout<<"Si = 1"<<endl;
			cout<<"No = 2"<<endl;
			cin>>i;
	}

	/*if(a==2){

		cout<<"INFORMACIÓN DEL PROFESOR."<<endl;
		cout<<"Rellene la siguiente información:"<<endl;
		x.setProfesor();
	}

	cout<<"¿Desea ver la información del profesor?"<<endl;
	cout<<"1. Si"<<endl;
	cout<<"2. no"<<endl;
	cout<<"Seleccione una opción:"<<endl;
	cin>>n;
		if(n==1){
			cout<<"MOSTRANDO INFORMACIÓN DEL PROFESOR"<<endl;
			//x.getProfesor();
			cout<<"--------------------------------------------------------"<<endl;
		}
		if(n==2){
			cout<<endl;
		}		
		
		
		for(int i=1; i!=0;){

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
				cout<<"1. INTRODUCIR ALUMNO"<<endl;
				cout<<"Rellene los siguientes datos:"<<endl;
				y.setAlumno();
				cout<<"--------------------------------------------------------"<<endl;		
			}

			if(b==2){
				cout<<"2. MOSTRAR ALUMNO"<<endl;
				y.getAlumno();
				cout<<"--------------------------------------------------------"<<endl;
			}

			if(b==3){
				cout<<"3. BUSCAR ALUMNO"<<endl;
				y.buscaAlumno();
				cout<<"--------------------------------------------------------"<<endl;
			}

			if(b==4){
				cout<<"4. MODIFICAR ALUMNO"<<endl;
				//y.modificaAlumno();
				cout<<"--------------------------------------------------------"<<endl;
			}

			if(b==5){
				cout<<"5. ELIMINAR ALUMNO"<<endl;
				y.eliminaAlumno();
				cout<<"--------------------------------------------------------"<<endl;
			}

			if(b==6){
				cout<<"6. REALIZAR COPIA DE SEGURIDAD"<<cout;
				//x.setCopia();
				cout<<"--------------------------------------------------------"<<endl;	
			}

			if(b==7){
				cout<<"7. CARGAR COPIA DE SEGURIDAD"<<endl;
				//x.getCopia();
				cout<<"--------------------------------------------------------"<<endl;
			}

			if(b==8){
				exit(-1);
			}
		cout<<"Quiere seguir usando el programa"<<endl;
		cout<<"Si = 1"<<endl;
		cout<<"No = 2"<<endl;
		cin>>i;	
	}
}*/