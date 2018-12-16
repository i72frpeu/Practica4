#include "agenda.h"
#include "persona.h"
#include "alumno.h"
#include <string>
#include <iostream>
#include <cstdlib>

void Agenda::setAlumno(){

  Alumno x;
  std::string aux_s;
  int aux_i, control = 0;
  bool aux_b;
  float aux_f;
  Fecha aux_fe;

  std::cout<<"Intoduzca el DNI:";
  std::cin>>aux_s;
  x.setDNI(aux_s);

  std::cout<<"Intoduzca el Nombre:";
  std::cin>>aux_s;
  x.setNombre(aux_s);

  std::cout<<"Intoduzca el Apellido:";
  std::cin>>aux_s;
  x.setApellidos(aux_s);

  std::cout<<"Intoduzca el Telefono:";
  std::cin>>aux_i;
  x.setTelefono(aux_i);

  std::cout<<"Intoduzca el Email:";
  std::cin>>aux_s;
  x.setEmail(aux_s);

  std::cout<<"Intoduzca el Domicilio:";
  std::cin>>aux_s;
  x.setDomicilio(aux_s);

  std::cout<<"Intoduzca la fecha:"<<endl;
  std::cout<<"Dia:";
  std::cin>>aux_fe.dia;
  std::cout<<"Mes:";
  std::cin>>aux_fe.mes;
  std::cout<<"Año:";
  std::cin>>aux_fe.agno;
  x.setFecha(aux_fe);

  std::cout<<"Intoduzca el curso:";
  std::cin>>aux_i;
  x.setCurso(aux_i);

  std::cout<<"Intoduzca el equipo:";
  std::cin>>aux_i;
  x.setEquipo(aux_i);

  std::cout<<"Intoduzca el lider:";
  std::cin>>aux_b;
  x.setLider(aux_b);

  std::cout<<"Intoduzca la nota:";
  std::cin>>aux_f;
  x.setNota(aux_f);

 

  std::list<Alumno>::iterator i;

  for(i=listaAlumnos_.begin(); i!=listaAlumnos_.end(); i++){

    if((*i).getDNI()==x.getDNI()){
      cout<<"Error, DNI ya introducido"<<endl; 
      control = 1;
    }
  }

  if(control == 0){
  listaAlumnos_.push_back(x);
    numeroAlumnos_++;
    cout<<"Alumno introducido \n";
  }
}

void Agenda::getAlumno(){
  std::list <Alumno> aux;
  std::string aux_s;
  bool info[11];

 aux = buscaAlumno();

 cout<<"Indique que informacioón quiere ver(pulse 1 para mostrar, 0 para no mostrar)\n";
 
 cout<<"DNI ";cin>>info[0];
 cout<<"Nombre ";cin>>info[1];
 cout<<"Apellido ";cin>>info[2];
 cout<<"Telefono ";cin>>info[3];
 cout<<"Email ";cin>>info[4];
 cout<<"Domicilio ";cin>>info[5];
 cout<<"Fecha de nacimiento ";cin>>info[6];
 cout<<"Curso ";cin>>info[7];
 cout<<"Equipo ";cin>>info[8];
 cout<<"Lider ";cin>>info[9];
 cout<<"Nota ";cin>>info[10];

 cout<<"----------------------------------------\n";
cout<<"----------------------------------------\n";

  std::list<Alumno>::iterator i;

  for(i = aux.begin(); i != aux.end(); i++){
        if(info[0] == 1){
          cout<<"DNI: "<<(*i).getDNI()<<"\n";
        }
        if(info[1] == 1){
          cout<<"Nombre: "<<(*i).getNombre()<<"\n";
        }
        if(info[2] == 1){
          cout<<"Apellidos: "<<(*i).getApellidos()<<"\n";
        }
        if(info[3] == 1){
          cout<<"Telefono: "<<(*i).getTelefono()<<"\n";
        }
        if(info[4] == 1){
        cout<<"Email: "<<(*i).getEmail()<<"\n";
        }
        if(info[5] == 1){
          cout<<"Domicilio: "<<(*i).getDomicilio()<<"\n";
        }
        if(info[6] == 1){
          cout<<"Fecha nacimiento: "<<(*i).getFecha().dia<<"/"<<(*i).getFecha().mes<<"/"<<(*i).getFecha().agno<<"\n";
        }
        if(info[7] == 1){
          cout<<"Curso: "<<(*i).getCurso()<<"\n";
        }
        if(info[8] == 1){
          cout<<"Equipo: "<<(*i).getEquipo()<<"\n";
        }
        if(info[9] == 1){
          cout<<"Lider: "<<(*i).getLider()<<"\n";
        }
        if(info[10] == 1){
          cout<<"Nota: "<<(*i).getNota()<<"\n";
        }
  cout<<"---------------------------------------------\n";
  }
  cout<<"---------------------------------------------\n";
}


void Agenda::eliminaAlumno(){
  list <Alumno> aux;

  aux = buscaAlumno();

  list <Alumno>::iterator i;
  list <Alumno>::iterator j;

  for(i=listaAlumnos_.begin(); i!=listaAlumnos_.end(); i++){
    for(j = aux.begin(); j!= aux.end(); j++){
      if(j->getDNI() == i->getDNI()){
        i = listaAlumnos_.erase(i);
      }
    }
  }


}


list <Alumno> Agenda::buscaAlumno(){
  std::list <Alumno> x;
  int n = 0;
  std::string busqueda;
  cout<<"Buscar alumno por: 1-DNI, 2-Apellidos, 3-Email "<<endl;
  cin>>n;
  switch(n){

    case 1:
      cout<<"Introduce el DNI \n";
      cin>>busqueda;
      x = buscar_DNI(busqueda);
      break;

   case 2:
      cout<<"Introduce los apellidos\n";
      cin>>busqueda;
      x = buscar_Apellido(busqueda);
      break;

    case 3:
      cout<<"Introduce el email\n";
      cin>>busqueda;
      x = buscar(busqueda);
      break;
  }

  return x;

}


void Agenda::modificaAlumno(){

  list <Alumno> aux;
  int n;

  cout<<"Indique el alumno que quiere modificar"<<endl;
  aux = buscaAlumno();

  list <Alumno>::iterator i;

  for(i = listaAlumnos_.begin(); i != listaAlumnos_.end(); i++){
    if((*i).getDNI() = aux.getDNI()){
      cout<<"Que elemento del alumno quiere cambiar"<<endl;
      cout<<"1 = DNI, 2 = Nombre, 3 = Apellidos, 4 = Telefono, 5 = Email, 6 = Domicilio, 7 = Fecha de nacimiento, 8 = Curso, 9 = Equipo, 10 = Lider, 10 = Nota"<<endl;
      cin>> n;
      switch(n){
        case 1:
          std::string aux_s;
          int control = 0;
          cout<<"Introduzca nuevo DNI"<<endl;
          cin>>aux_s;
          list <Alumno>::iterator j;
          for(j = listaAlumnos_.begin(); j != listaAlumnos_.end(); j++){
            if(aux_s == (*j).getDNI()){
              cout<<"DNI ya existe en el programa"<<endl;
              control = 1;
            }
          }

          if(control = 0){
            (*i).setDNI(aux_s);
          }
        break;

        case 2:
          std::string aux_s;
          cout<<"Introduzca el el nuevo Nombre"<<endl;
          cin>>aux_s;

        break;
      }
    }
  }

}
      

list <Alumno> Agenda::buscar_DNI(std::string DNI){
 
  std::list <Alumno> aux;
  std::list<Alumno>::iterator i;

  if(listaAlumnos_.empty()==true){
      cout<<"Error, no hay alumnos en la lista \n"<<endl;
      exit(-1);
  }else{
      for(i = listaAlumnos_.begin(); i != listaAlumnos_.end(); i++){
          if(i->getDNI()==DNI){
            aux.push_back(*i);
          }
      }
    return(aux);
  }
}


list <Alumno> Agenda::buscar_Apellido(std::string apellidos){

  std::list <Alumno> aux;
  std::list<Alumno>::iterator i;

  if(listaAlumnos_.empty()==true){
    cout<<"Error, no hay alumnos en la lista \n"<<endl;
    exit(-1);
  }else{
    for(i=listaAlumnos_.begin(); i!=listaAlumnos_.end(); i++){
      if(i->getApellidos()==apellidos){
       aux.push_back(*i);
      }
    }
    return(aux);
  }
}



list <Alumno> Agenda::buscar(std::string email){
  std::list <Alumno> aux;
  std::list<Alumno>::iterator i;

  if(listaAlumnos_.empty()==true){
    cout<<"Error, no hay alumnos en la lista \n"<<endl;
    exit(-1);
  }else{
    for(i=listaAlumnos_.begin(); i!=listaAlumnos_.end(); i++){
      if(i->getEmail()==email){
        aux.push_back(*i);
      }
    }
    return(aux);
  }
}

