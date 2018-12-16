#ifndef AGENDA_H
#define AGENDA_H

#include "alumno.h"

#include <string>
#include <iostream>
#include <list>

using namespace std;

class Agenda:public Alumno{
  private:

    std::list <Alumno> listaAlumnos_;
    int numeroAlumnos_;

  public:

    Agenda(){numeroAlumnos_=0;};

    void setAlumno();
    list <Alumno> buscaAlumno();
    void getAlumno();

    void eliminaAlumno();
    
    void modificaAlumno();

    list <Alumno> buscar_DNI(std::string DNI);
    list <Alumno> buscar_Apellido(std::string apellidos);
    list <Alumno> buscar(std::string email);
};
#endif
