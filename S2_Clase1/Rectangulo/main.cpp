#include <iostream>
#include "Rectangulo.h"
using namespace std;
int main(){
  Rectangulo rect;
  double area;
  rect.setLargo(10);
  rect.setAncho(5);
  area=rect.calcularArea();
  cout<<rect.str()<<"\nEl area es "<<area<<endl;
  return 0;
}
