#include <iostream>
#include "Triangulo.h"
using namespace std;
int main(){
  Triangulo obj;
  obj.setBase(4);
  obj.setAltura(5);
  double resultado=obj.calcArea();
  cout<<"El area del triangulo es: "<<resultado<<endl;

  Triangulo obj2;
  obj2.setBase(40);
  obj2.setAltura(30);
  double area2=obj2.calcArea();
  cout<<"El area del Objeto 2: "<<area2;
  return 0;
}
