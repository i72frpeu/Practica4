
#include "profesor.h"
#include "persona.h"

void Profesor::setProfesor(Profesor *x){

  int aux_i;
  std::string aux;
  bool aux_b;


  std::cout<<"Introduzca un DNI del profesor"<<endl;
  std::cin>>aux;
  (*x).setDNI(aux);

 std::cout<<"Introduzca un Nombre del profesor"<<endl;
  std::cin>>aux;
  (*x).setNombre(aux);

  std::cout<<"Introduzca el primer Apellido del profesor"<<endl;
  std::cin>>aux;
  (*x).setApellidos(aux);

  std::cout<<"Introduzca un telefono del profesor"<<endl;
  std::cin>>aux_i;
  (*x).setTelefono(aux_i);


  std::cout<<"Introduzca un email del profesor"<<endl;
  std::cin>>aux;
  (*x).setEmail(aux);

  std::cout<<"Introduzca una asignatura que imparte"<<endl;
  std::cin>>aux;
  (*x).setAsignatura(aux);

  std::cout<<"Introduzca una departamento al que pertenece"<<endl;
  std::cin>>aux;
  (*x).setDepartamento(aux);

  std::cout<<"Introduzca el rol del profesor"<<endl;
  std::cin>>aux_b;
  (*x).setRole(aux_b);

}

void Profesor::getProfesor(Profesor x){

  int n;

  std::cout<<"Que informacion quieré visualizar del profesor, personal (1) o profesiona (2) \n";
  std::cout<<"Por favor introduzca el número correspondiente: ";
  std::cin>>n;

  switch(n){
    case 1:
      std::cout<<"|     Nombre       |      Apellido      |      Telefono      |       Email        |\n";
      std::cout<<"|"<<x.getNombre()<<"|"<<x.getApellidos()<<"|"<<x.getTelefono()<<"|"<<x.getEmail()<<"|\n";
      break;
  }

}

/*void Profesor::setCopia(Agenda copia){
   if(role_==true){copia_=copia;}
   else{exit(0);}
 }
 void Profesor::setFichero(Agenda fichero){
   ofstream fichero;
   fichero.open("fich_bin");
   if(!fichero) cout<<"error al abrir el fichero"<<endl;
   else{
     while(copia!=feof()){
       fichero.write(Agenda copia, 1000);
     }
   }
   fichero.close();
 }
 Agenda Profesor::getFichero(Agenda fichero){
   ifstream fichero;
   fichero.open("fich_bin");
   if(!fichero) cout<<"error al abrir el fichero"<<endl;
   else{
     while(copia!=feof()){
       fichero.read(Agenda copia,1000);
     }
   }
   fichero.close();
 }
*/
