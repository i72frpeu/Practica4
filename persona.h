//persona.h

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona{

	private:

		string dni_;
		string nombre_;
		string apellido1_;
		string apellido2_;
		int telefono_;
		string email_;

	public:

		Persona(){
			dni_="";
			nombre_="";
			apellido1_="";
			apellido2_="";
			telefono_=0;
			email_="";
		}

		inline string getDNI()const {
			return dni_;
		}
		inline void setDNI(string n){
			dni_=n;
		}

		inline string getNombre()const{
			return nombre_;
		}
		inline void setNombre(string n){
			nombre_=n;
		}

		inline string getApellido1()const{
			return apellido1_;
		}
		inline void setApellido1(string n){
			apellido1_=n;
		}

		inline string getApellidos()const{
			return apellido1_ +" " + apellido2_;
		}

		inline string getApellido2()const{
			return apellido2_;
		}
		inline void setApellido2(string n){
			apellido2_=n;
		}

		inline int getTelefono()const{
			return telefono_;
		}
		inline void setTelefono(int n){
			telefono_=n;
		}

		inline string getEmail()const{
			return email_;
		}
		inline void setEmail(string n){
			email_=n;
		}

		inline string getNombreCompleto()const{
			return getNombre()+getApellidos();
		}

};

#endif
