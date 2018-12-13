#include <string>
#include <iostream>

#include "persona.h"
#include "alumno.h"
#include "profesor.h"

int main(){
  Profesor x;

  cout<<"A continuacion va ha introducir un profesor";
  x.setProfesor(&x);
}
