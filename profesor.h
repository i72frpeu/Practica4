#include <iostream>
#include <cstring>
#include <fstream>

#ifndef PROFESOR_H
#define PROFESOR_H

using namespace std;

class Profesor: public Persona{
  private:

    string asignatura_;
    string departamento_;
    bool role_;

  public:

    Profesor(string DNI, string nombre, string apellidos, int telefono, string gmail, string asignatura, string departamento, bool role):Persona(DNI, nombre, apellidos, telefono, gmail){
      asignatura_=asignatura; depart6amento_=departamento; role_=role;
    };

    void setAsignatura(string asignatura){asignatura_=asignatura;};
    string getAsignatura(){return asignatura_;};

    void setDepartamento(string departamento){departamento_=departamento;};
    string getDepartamento(){return departamento_;};

    void setRole(bool role){role_=role;};
    bool getRole(){return role_;};

    void setProfesor(Profesor profesor){profesor_=profesor;};
    Profesor getPofesor(){return profesor_;};

  /*  void setCopia(Agenda copia);
    inline Agenda getCopia(){return copia_;};

    void setFichero(Agenda fichero);
    Agenda getFichero(Agenda fichero);
*/
};
#endif
