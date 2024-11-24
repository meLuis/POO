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
    nombre = "PersonaDefault";
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
  virtual void mostrar() const
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
  virtual void mostrar() const
  {
    cout << "\n Mostrar del Alumno";
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
  virtual void mostrar() const
  {
    cout << "\n Mostrar del Profesor\n";
  }
};
int main()
{
  cout << "Puntero" << endl;
  Persona per1;
  per1.setNombre("Jorge");
  per1.setEdad(40);
  per1.mostrar();
  Persona *myAlu1 = new Alumno;
  myAlu1->setNombre("Puntero");
  myAlu1->setEdad(23);
  myAlu1->mostrar();
  Persona *arrayp[5];
  Persona *ptr;
  int option, i;
  for (i = 0; i < 5; i++)
  {
    cout << "(1) Persona (2) Alumno (3)Profesor (4)Salir\n"
         << endl;
    cin >> option;
    switch (option)
    {
    case 1:
      ptr = new Persona;
      break;
    case 2:
      ptr = new Alumno;
      break;
    case 3:
      ptr = new Profesor;
      break;
    case 4:
      ptr = new Persona;
      break;
    }
    arrayp[i] = ptr;
  }
  for (i = 0; i < 5; i++)
  {
    arrayp[i]->mostrar();
  }
  return 0;
}
