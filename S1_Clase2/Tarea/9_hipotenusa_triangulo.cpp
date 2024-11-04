#include <iostream>
#include <cmath>
using namespace std;

/*
Usamos la función hypot de la librería cmath, internamente lo que realiza es:
hypot(x,y)=sqrt(x*x+y*y), pero esto podría servirnos también más adelante
en el ejercicio 10, si colocamos hypot(dx,dy) siendo d las diferencias de
coordenadas en los distintos ejes.
*/
int main(){
  float ladoA=0,ladoB=0,hipotenusa;
  while (ladoA<=0){
    cout<<"Ingrese el primer lado del triángulo rectángulo: ";cin>>ladoA;
  }
  while (ladoB<=0){
    cout<<"Ingrese el segundo lado del triángulo rectángulo: ";cin>>ladoB;
  }
  hipotenusa=hypot(ladoA,ladoB);
  cout<<"La hipotenusa del triángulo rectángulo de lados "<<ladoA<<" y "<<ladoB<<" es: "<<hipotenusa;

  return 0;
}
