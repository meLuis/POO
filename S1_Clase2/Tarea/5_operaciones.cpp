#include <iostream>
#include <cmath>
using namespace std;
int main(){
  float n1,n2;
  cout<<"Ingresa el valor del primer numero: ";cin>>n1;
  cout<<"Ingresa el valor del segundo numero: ";cin>>n2;

  cout<<"Suma: "<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
  cout<<"Resta: "<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
  cout<<"Multiplicación: "<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
  cout<<"División: "<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
  cout<<"Módulo: "<<n1<<" % "<<n2<<" = "<<fmod(n1,n2)<<endl;
  return 0;
}

/*
No se puede realizar la operación mod (%) si no son números enteros y tanto n1
como n2 son requeridos como float entonces se usa la librería cmath que tiene
la operación fmod(x,y) y devuelve el residuo de x dividido por y decimales, y
el resultado es también un decimal
fmod(10.5,3.2)=1.1
*/
