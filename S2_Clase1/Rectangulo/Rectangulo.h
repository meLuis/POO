#include <string>
using namespace std;
class Rectangulo{
  public:
  double calcularArea();
  void setLargo(double _largo);
  void setAncho(double _ancho);
  double getLargo();
  double getAncho();
  string str();
  private:
  double largo, ancho;
};

double Rectangulo::calcularArea(){
  return largo*ancho;
}

void Rectangulo::setLargo(double _largo){
  largo=_largo;
}

void Rectangulo::setAncho(double _ancho){
  ancho=_ancho;
}
double Rectangulo::getLargo(){
  return largo;
}
double Rectangulo::getAncho(){
  return ancho;
}
string Rectangulo::str(){
  return "Largo: "+to_string(largo)+"\nAncho: "+to_string(ancho);
}
