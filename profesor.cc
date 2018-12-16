
#include "profesor.h"
#include "persona.h"

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
  x.setApellidos(aux);

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

}

void Profesor::getProfesor(Profesor x){

  int n;

  std::cout<<"Que informacion quieré visualizar del profesor, personal (1) o profesional (2), o mostrar toda la info (3) \n";
  std::cout<<"Por favor introduzca el número correspondiente: ";
  std::cin>>n;

  std::cout<<"\n";

  switch(n){
    case 1:
      
      std::cout<<"Nombre: "<<x.getNombre()<<"\n"<<"Apellido: "<<x.getApellidos()<<"\n"<<"Telefono: "<<x.getTelefono()<<"\n"<<"Email: "<<x.getEmail()<<"\n";
      std::cout<<"--------------------------------------------------------"<<endl;
      break;

    case 2:

      std::cout<<"Nombre: "<<x.getNombre()<<"\n";
      std::cout<<"Asignatura: "<<x.getAsignatura()<<"\n"<<"Departamento: "<<x.getDepartamento()<<"\n"<<"Rol: "<<x.getRole()<<"\n";
      std::cout<<"--------------------------------------------------------"<<endl;
      break;

    case 3:

      std::cout<<"Nombre: "<<x.getNombre()<<"\n"<<"Apellido: "<<x.getApellidos()<<"\n"<<"Telefono: "<<x.getTelefono()<<"\n"<<"Email: "<<x.getEmail()<<"\n";      
      std::cout<<"Asignatura: "<<x.getAsignatura()<<"\n"<<"Departamento: "<<x.getDepartamento()<<"\n"<<"Rol: "<<x.getRole()<<"\n";
      std::cout<<"--------------------------------------------------------"<<endl;
      break;

  }

}

void Profesor::setCopia(){
   if(role_==true){setFichero(listaAlumnos_);cont++;}
 }
void Profesor::getCopia(){
	if(cont==0){cout<<"Error al obtener copia de seguridad, ya que no hay ninguna guardada\n";}
   	else{getFichero(listaAlumnos_);}
}

 void Profesor::setFichero(lista<Alumno> listaAlumnos){
   ofstream fichero;
   fichero.open("fich_bin");
   if(!fichero) cout<<"error al abrir el fichero"<<endl;
   else{
     while(listaAlumnos!=feof()){
       fichero.write(listaAlumnos, listaAlumnos.size());
     }
   }
   fichero.close();
 }


 void Profesor::getFichero(lista<Alumno> listaAlumnos){
   ifstream fichero;
   fichero.open("fich_bin");
   if(!fichero) cout<<"error al abrir el fichero"<<endl;
   else{
     while(listaAlumnos!=feof()){
       fichero.read(listaAlumnos, listaAlumnos.size());
     }
   }
   fichero.close();
 }

