//persona.h

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona{

	private:

		string dni_;
		string nombre_;
		string apellidos_;
		int telefono_;
		string email_;

	public:

		Persona(){
			dni_="";
			nombre_="";
			apellidos_="";
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

		inline string getApellidos()const{
			return apellidos_;
		}
		inline void setApellidos(string n){
			apellidos_=n;
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
