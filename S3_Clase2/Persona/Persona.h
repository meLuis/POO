#include <iostream>
#include <string>
using namespace std;

class Persona{
  private:
  string nombre;
  int edad;
  public:
  Persona(string, int);
  virtual void mostrar();
};

class Alumno: public Persona{
  private:
  float calificacion;
  public:
  Alumno(string, int,float);
  void estudiar();
  void mostrar();
};

class Profesor: public Persona{
  private:
  string materia;
  public:
  Profesor(string,int,string);
  void calificar();
  void mostrar();
};

Persona::Persona(string _nombre, int _edad){
  nombre=_nombre;
  edad=_edad;
}
void Persona::mostrar(){
  cout<<"Persona: "<<nombre;
}
Alumno::Alumno(string _nombre, int _edad, float _cal):Persona(_nombre,_edad){
  calificacion=_cal;
}
void Alumno::mostrar(){
  Persona::mostrar();
  cout<<"\tCalificacion: "<<calificacion<<endl;

}
Profesor::Profesor(string _nombre, int _edad, string _materia):Persona(_nombre,_edad){
  materia=_materia;
}
void Profesor::mostrar(){
  Persona::mostrar();
  cout<<"\tMateria: "<<materia<<endl;
}
