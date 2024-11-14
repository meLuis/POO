#include <string>
#include <iostream>
#include "Persona.h"
using namespace std;
int main(){
  Persona *vector[3];
  vector[0]=new Alumno("Jorge",20,9.8);
  vector[0]->mostrar();
  vector[1]=new Alumno("Ramon",19,9.5);
  vector[1]->mostrar();
  vector[2]=new Profesor("JorgeB",40,"POO");
  vector[2]->mostrar();
}
