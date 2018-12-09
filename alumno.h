#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>

struct Fecha{
  int dia;
  int mes;
  int agno;
};


class alumno{

private:

  std::string domicilio_;
  Fecha fecha_;
  int curso_;
  int equipo_;
  bool lider_;
  float nota_;

public:
  std::string getDomicilio()const{return domicilio_;};
  Fecha getFecha()const{return fecha_;};
  int getCurso()const{return curso_;};
  int getEquipo()const{return equipo_;};
  bool getLider()const{return lider_;};
  int getNota()const{return nota_;};
  void setDomicilio(std::string domicilio){domicilio_ = domicilio;};
  void setFecha(Fecha fecha);
  void setCurso(int curso){curso_ = curso;};
  void setEquipo(int equipo){equipo_ = equipo;};
  void setLider(bool lider){lider_ = lider;};
  void setNota(float nota){nota_ = nota;};

};

#endif
