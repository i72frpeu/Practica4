#ifndef PROFESOR_H
#define PROFESOR_H

#include <iostream>
#include <cstring>
#include <fstream>
#include <lista>
#include "persona.h"

using namespace std;

class Profesor: public Persona{
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

    Profesor setProfesor();

    void getProfesor(Profesor x);

    void setCopia();
    void getCopia();

    void setFichero(lista<Alumno> listaAlumnos);
    void getFichero(lista<Alumno> listaAlumnos);
};
#endif
