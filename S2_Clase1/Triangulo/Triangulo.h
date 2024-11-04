class Triangulo{
private:
  double base,altura;
public:
  void setBase(double _base);
  void setAltura(double _altura);
  double getBase();
  double getAltura();
  double calcArea();
};

void Triangulo::setBase(double _base){
  base=_base;
}
void Triangulo::setAltura(double _altura){
  altura=_altura;
}
double Triangulo::getBase(){
  return base;
}
double Triangulo::getAltura(){
  return altura;
}
double Triangulo::calcArea(){
  double area;
  area=(base*altura)/2;
  return area;
}
