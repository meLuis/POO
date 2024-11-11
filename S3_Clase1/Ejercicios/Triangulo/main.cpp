#include <iostream>
#include "Triangulo.h"
using namespace std;
int main(){
/*  Triangulo obj;
  obj.setBase(4);
  obj.setAltura(5);
  double resultado=obj.calcArea();
  cout<<"El area del triangulo es: "<<resultado<<endl;

  Triangulo obj2;
  obj2.setBase(40);
  obj2.setAltura(30);
  double area2=obj2.calcArea();
  cout<<"El area del Objeto 2: "<<area2;
*/
  int size;
  cout<<"Ingrese la longitud del arreglo de triangulos: ";cin>>size;

  Triangulo arrTriangulo[size];
  for (int i=0;i<size;i++){
    int base,altura;
    cout<<"Ingrese la base del triangulo "<<i+1<<": ";cin>>base;
    cout<<"Ingrese la altura del triangulo "<<i+1<<": ";cin>>altura;
    arrTriangulo[i].setBase(base);
    arrTriangulo[i].setAltura(altura);
  }

  for (int i=0;i<size;i++){
    cout<<"El area del triangulo "<<i+1<<" es "<<arrTriangulo[i].calcArea()<<endl;
  }

  return 0;
}
