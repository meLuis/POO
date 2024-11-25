#include <iostream>
using namespace std;
class Persona
{
private:
  string nombre;
  int edad;

public:
  Persona()
  {
    nombre = "Default";
    edad = 20;
  }
  void setNombre(string _nombre)
  {
    nombre = _nombre;
  }
  void setEdad(int _edad)
  {
    edad = _edad;
  }
  string getNombre()
  {
    return nombre;
  }
  int getEdad()
  {
    return edad;
  }
  void mostrar()
  {
    cout << "\nNombre: " << nombre << " \nEdad:" << edad;
  }
  virtual ~Persona() = default;
};
class Alumno : public Persona
{
private:
  string matricula;

public:
  void leer()
  {
    cout << "\nAlumno Leyendo...";
  }
};
class Profesor : public Persona
{
private:
  string materia;

public:
  void ensenar()
  {
    cout << "\nProfesor en clase...";
  }
};
int main()
{
  cout << "Herencia" << endl;
  Persona per1;
  per1.setNombre("Jorge");
  per1.setEdad(40);
  per1.mostrar();
  Alumno alu1;
  alu1.setNombre("Ramon");
  alu1.setEdad(20);
  alu1.mostrar();
  alu1.leer();
  Profesor pro1;
  pro1.setNombre("David");
  pro1.setEdad(50);
  pro1.mostrar();
  pro1.ensenar();
  return 0;
}
