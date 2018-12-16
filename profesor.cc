#include "persona.h"
#include "profesor.h"
#include "agenda.h"
#include "alumno.h"
#include <list>
#include <fstream>
#include <iostream>

int cont=0;

Profesor Profesor::setProfesor(){

  Profesor x;
  int aux_i;
  std::string aux;
  bool aux_b;


  std::cout<<"Introduzca un DNI del profesor"<<endl;
  std::cin>>aux;
  x.setDNI(aux);

 std::cout<<"Introduzca un Nombre del profesor"<<endl;
  std::cin>>aux;
  x.setNombre(aux);

  std::cout<<"Introduzca el primer Apellido del profesor"<<endl;
  std::cin>>aux;
  x.setApellido1(aux);

  std::cout<<"Introduzca el segundo Apellido del profesor"<<endl;
  std::cin>>aux;
  x.setApellido2(aux);

  std::cout<<"Introduzca un telefono del profesor"<<endl;
  std::cin>>aux_i;
  x.setTelefono(aux_i);


  std::cout<<"Introduzca un email del profesor"<<endl;
  std::cin>>aux;
  x.setEmail(aux);

  std::cout<<"Introduzca una asignatura que imparte"<<endl;
  std::cin>>aux;
  x.setAsignatura(aux);

  std::cout<<"Introduzca una departamento al que pertenece"<<endl;
  std::cin>>aux;
  x.setDepartamento(aux);

  std::cout<<"Introduzca el rol del profesor"<<endl;
  std::cin>>aux_b;
  x.setRole(aux_b);

  return x;

}

void Profesor::getProfesor(){

  int n;

  std::cout<<"Que informacion quiere visualizar del profesor, personal (1) o profesional (2), o mostrar toda la info (3) \n";
  std::cout<<"Por favor introduzca el número correspondiente: ";
  std::cin>>n;

  std::cout<<"\n";

  switch(n){
    case 1:
      
      std::cout<<"Nombre: "<<getNombre()<<"\n"<<"Apellidos: "<<getApellidos()<<"\n"<<"Telefono: "<<getTelefono()<<"\n"<<"Email: "<<getEmail()<<"\n";
      std::cout<<"--------------------------------------------------------"<<endl;
      break;

    case 2:

      std::cout<<"Nombre: "<<getNombre()<<"\n";
      std::cout<<"Asignatura: "<<getAsignatura()<<"\n"<<"Departamento: "<<getDepartamento()<<"\n"<<"Rol: "<<getRole()<<"\n";
      std::cout<<"--------------------------------------------------------"<<endl;
      break;

    case 3:

      std::cout<<"Nombre: "<<getNombre()<<"\n"<<"Apellidos: "<<getApellidos()<<"\n"<<"Telefono: "<<getTelefono()<<"\n"<<"Email: "<<getEmail()<<"\n";      
      std::cout<<"Asignatura: "<<getAsignatura()<<"\n"<<"Departamento: "<<getDepartamento()<<"\n"<<"Rol: "<<getRole()<<"\n";
      std::cout<<"--------------------------------------------------------"<<endl;
      break;

  }

}

void Profesor::setCopia(){
  std::ifstream f;
  std::string DNI;
  std::string DNI_aux, Nombre_aux, Apellido1_aux, Apellido2_aux, Email_aux, Asignatura_aux, Departamento_aux;
  bool role_aux;
  int telefono_aux;
  int control = 0;
  
  cout<<"Por favor, introduzca su DNI"<<endl;
  cin>>DNI;

  

  f.open("Profesores.txt");

   if(!f) cout<<"error al abrir el fichero"<<endl;
   
   while(f.eof()){
    f>>DNI_aux>>Nombre_aux>>Apellido1_aux>>Apellido2_aux>>telefono_aux>>Email_aux>>Asignatura_aux>>Departamento_aux>>role_aux;
    if(DNI_aux == DNI){
      control = 1;
    }
   }

   f.close();

   if(control == 1){
    setFichero(getlista());
    cont++;
  }else{
    cout<<"No puede realizar copia de seguridad, porque no es administrador"<<endl;
  }
 }
void Profesor::getCopia(){
	if(cont==0){cout<<"Error al obtener copia de seguridad, ya que no hay ninguna guardada\n";}
   	else{getFichero();}
}

void Profesor::setFichero(list <Alumno> listaAlumnos){
   std::ofstream f;

   f.open("fich_bin.bin", ios::binary);

   list<Alumno>::iterator i;
   if(!f) cout<<"error al abrir el fichero"<<endl;
   for(i = listaAlumnos.begin(); i != listaAlumnos.end(); i++){
    f.write(reinterpret_cast<char *>(&i), sizeof(Alumno));
   }

   f.close();

 }


list <Alumno> Profesor::getFichero(){
   std::ifstream f;
   Alumno aux;
   list <Alumno> aux_list;
   f.open("fich_bin.bin", ios::binary);
   if(!f) cout<<"error al abrir el fichero"<<endl;
   else{
     while(f.eof()){
       f.read(reinterpret_cast<char *> (&aux), sizeof(Alumno));
       aux_list.push_back(aux);
     }
   }
   f.close();
}


void Profesor::guardarPorfesor(){
  std::ofstream f;

   f.open("Profesores.txt");

   if(!f) cout<<"error al abrir el fichero"<<endl;
   
   f<<getDNI()<<getNombre()<<getApellido1()<<getApellido2()<<getTelefono()<<getEmail()<<getAsignatura()<<getDepartamento()<<getRole();

   f.close();

}


