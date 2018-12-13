#include "agenda.h"

void Agenda::setAlumno(Alumno alumno){
  list<ALumno>::iterator i;
  for(i=listaAlumnos_.begin(); i!=listaAlumnos_.end(); i++){
    if(i->getDNI()==alumno.getDNI()){cout<<"vuelve a introducir el alumno"<<endl; setAlumno();}
    else{listaAlumnos_.push_back(alumno);}
  }
}

int Agenda::eliminaAlumno(){
  Alumno alumno
  buscaAlumno();
  listaAlumnos_.pop_back(alumno)
}
void Agenda::buscaAlumno(){
  int x=0;
  cout<<"Buscar alumno por: 1-DNI, 2-Apellidos, 3-Email "<<endl;
  cin>>x;
  switch(x){
    case 1:
      cout<<"Introduce el DNI \n";
      cin>>DNI;
      buscar(DNI);
      break;
    case 2:
      cout<<"Introduce los apellidos\n";
      cin>>apellidos;
      buscar(apellidos);
      break;
    case 3:
      cout<<"Introduce el email\n";
      cin>>email;
      buscar(email);
      break;
  }
}
void Agenda::modificaAlumno(){
  Alumno alumno;
  int x=0;
  cout<<"elige dato a cambiar\n";
  cout<<"1-domicilio, 2-fecha, 3-curso, 4-equipo, 5-lider, 6-nota\n";
  cin>>x;
  buscaAlumno();
  list<Alumno>::iterator i;
  for(i=listaAlumno_.begin(); i!=listaAlumno_.end(); i++){
    switch(x){
      case 1:
        string domicilio;
        cout<<"Introduce el domicilio\n";
        cin>>domicilio;
        setDomicilio(domicilio);
        break;
      case 2:
        Fecha fecha;
        cout<<"Introduce dia, mes y año\n";
        cin>>fecha.dia;
        cin>>fecha.mes;
        cin>>fecha.ano;
        setFecha(fecha);
        break;
      case 3:
        int curso;
        cout<<"Introduce el curso\n";
        cin>>curso;
        setCurso(curso);
        break;
      case 4:
        int equipo;
        cout<<"Introduce el equipo\n";
        cin>>equipo;
        setEquipo(equipo);
        break;
      case 5:
        string x;
        bool lider;
        cout"determina si es lider o no ( si | no)\n";
        cin>>x;
        if(x=="si"){return true;}
        else{return false;}
        setLider(lider);
        break;
      case 6:
        float nota;
        cout<<"Introduce la nota\n";
        cin>>nota;
        setNota(nota);
        break;
    }
  }
  listaAlumno_.assign(alumno);
}

Alumno Agenda::buscar(string DNI){
  Alumno alumno;
  list<Alumno>::iterator i;
  if(listaAlumnos_.empty()==true){return -1;}
  for(i=listaAlumnos_.begin(); i!=listaAlummnos_.end(); i++){
    if(i->getDNI()==DNI){return alumno;}
  }
}
Alumno Agenda::buscar(string apellidos){
  Alumno alumno;
  list<Alumno>::iterator i;
  if(listaAlumnos_.empty()==true){return -1;}
  for(i=listaAlumnos_.begin(); i!=listaAlummnos_.end(); i++){
    if(i->getApellidos()==apellidos){return alumno;}
  }
}
Alumno Agenda::buscar(string email){
  Alumno alumno;
  list<Alumno>::iterator i;
  if(listaAlumnos_.empty()==true){return -1;}
  for(i=listaAlumnos_.begin(); i!=listaAlummnos_.end(); i++){
    if(i->getEmail()==email){return alumno;}
  }
}
