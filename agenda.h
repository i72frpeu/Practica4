#ifndef AGENDA_H
#define AGENDA_H

#include "alumno.h"

#include <cstring>
#include <iostream>
#include <list>

using namespace std;

class Agenda:public Alumno{
  private:
    list<Alumno> listaAlumnos_;
    int numeroAlumnos_;
  public:
    Agenda(){numeroAlumnos_=0;};

    void setAlumno();
    inline void getAlumno(){return listaAlumnos_;};

    void eliminaAlumno();
    Alumno buscaAlumno();
    void modificaAlumno();

    Alumno buscar(string DNI);
    Alumno buscar(string apellidos);
    Alumno buscar(string email);
};
#endif
