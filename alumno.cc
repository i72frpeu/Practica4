#include <string>
#include "alumno.h"

Alumno::Alumno(){
  domicilio_ = "";
  fecha_.dia = 0;
  fecha_.mes = 0;
  fecha_.agno = 0;
  curso_ = 0;
  equipo_ = 0;
  lider_ = 0;
  nota_ = 0;
}


void Alumno::setFecha(Fecha fecha){
  fecha_.dia = fecha.dia;
  fecha_.mes = fecha.mes;
  fecha_.agno = fecha.agno;
}
