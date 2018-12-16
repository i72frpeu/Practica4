#ifndef PROFESOR_H
#define PROFESOR_H

#include <iostream>
#include <cstring>
#include <fstream>
#include <list>
#include "persona.h"
#include "alumno.h"
#include "agenda.h"

using namespace std;

class Profesor: public Agenda{
  private:

    string asignatura_;
    string departamento_;
    bool role_;

  public:

    Profesor(){
      asignatura_="";
      departamento_="";
      role_=0;
    };

    void setAsignatura(string asignatura){asignatura_=asignatura;};
    string getAsignatura(){return asignatura_;};

    void setDepartamento(string departamento){departamento_=departamento;};
    string getDepartamento(){return departamento_;};

    void setRole(bool role){role_=role;};
    bool getRole(){return role_;};

    void setProfesor(Profesor x);

    void getProfesor(Profesor x);

    void setCopia();
    void getCopia();

    void setFichero(list <Alumno> listaAlumnos);
    list <Alumno> getFichero();

    void guardarPorfesor(Profesor x);
};
#endif
