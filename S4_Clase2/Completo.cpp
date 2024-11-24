#include <string>
#include <iostream>
using namespace std;
const int MAX_PERSONAS = 100;
class Persona
{
protected:
  string nombre;
  int edad;

public:
  // Constructor con lista de inicializacion
  Persona(const string &nombre, int edad) : nombre(nombre), edad(edad) {}
  // M todo get para nombre?
  string getNombre() const
  {
    return nombre;
  }
  // M todo set para nombre?
  void setNombre(const string &nombre)
  {
    this->nombre = nombre;
  }
  // M todo get para edad?
  int getEdad() const
  {
    return edad;
  }
  // M todo set para edad?
  void setEdad(int edad)
  {
    this->edad = edad;
  }
  // M todo para leer el nombre desde la pantalla?
  void leerNombre()
  {
    cout << "Introduce el nombre: ";
    getline(cin, nombre);
  }
  // M todo para leer la edad desde la pantalla?
  void leerEdad()
  {
    cout << "Introduce la edad: ";
    cin >> edad;
    cin.ignore(); // Limpiar el buffer de entrada
  }
  // M todo virtual para mostrar los datos?
  virtual void mostrar() const
  {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
  }
  virtual ~Persona() = default; // Destructor virtual
};
class Maestro : public Persona
{
public:
  // Constructor de Maestro
  Maestro(const string &nombre, int edad) : Persona(nombre, edad) {}
  // M todo para leer los datos de Maestro?
  void leer()
  {
    leerNombre();
    leerEdad();
  }
  // M todo para mostrar los datos de Maestro?
  void mostrar() const override
  {
    cout << "Maestro - ";
    Persona::mostrar();
  }
};
class Alumno : public Persona
{
public:
  // Constructor de Alumno
  Alumno(const string &nombre, int edad) : Persona(nombre, edad) {}
  // M todo para leer los datos de Alumno�
  void leer()
  {
    leerNombre();
    leerEdad();
  }
  // M todo para mostrar los datos de Alumno�
  void mostrar() const override
  {
    cout << "Alumno - ";
    Persona::mostrar();
  }
};
int main()
{
  Persona *personas[MAX_PERSONAS];
  int numPersonas = 0;
  int opcion;
  do
  {
    cout << "\nMenu:\n";
    cout << "1. Leer Maestro\n";
    cout << "2. Leer Alumno\n";
    cout << "3. Mostrar Personas\n";
    cout << "4. Salir\n";
    cout << "Elija una opcion: ";
    cin >> opcion;
    cin.ignore(); // Limpiar el buffer de entrada
    switch (opcion)
    {
    case 1:
    {
      if (numPersonas < MAX_PERSONAS)
      {
        Maestro *maestro = new Maestro("", 0);
        maestro->leer();
        personas[numPersonas++] = maestro;
      }
      else
      {
        cout << "Capacidad maxima alcanzada.\n";
      }
      break;
    }
    case 2:
    {
      if (numPersonas < MAX_PERSONAS)
      {
        Alumno *alumno = new Alumno("", 0);
        alumno->leer();
        personas[numPersonas++] = alumno;
      }
      else
      {
        cout << "Capacidad maxima alcanzada.\n";
      }
      break;
    }
    case 3:
      cout << "Lista de Personas:\n";
      for (int i = 0; i < numPersonas; ++i)
      {
        personas[i]->mostrar();
      }
      break;
    case 4:
      cout << "Saliendo del programa...\n";
      break;
    default:
      cout << "Opcion no valida. Por favor, intente de nuevo.\n";
    }
  } while (opcion != 4);
  // Liberar memoria
  for (int i = 0; i < numPersonas; ++i)
  {
    delete personas[i];
  }
  return 0;
}
