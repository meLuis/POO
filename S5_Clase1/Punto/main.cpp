#include <iostream>
using namespace std;
class Punto
{
private:
  double x, y;

public:
  Punto(double a = 0.0, double b = 0.0)
  {
    x = a;
    y = b;
  }
  friend class Persona;
};

class Persona
{
private:
  Punto p;

public:
  Persona()
  {
    p.x = 2;
    p.y = 2;
  }
  void imprime() const
  {
    cout << p.x << endl;
    cout << p.y << endl;
  }
};

int main()
{
  cout << "Hello World" << endl;
  return 0;
}
