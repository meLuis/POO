#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double x1,y1,x2,y2,dist;
  cout<<"Ingrese la coordenada x del primer punto: ";cin>>x1;
  cout<<"Ingrese la coordenada y del primer punto: ";cin>>y1;
  cout<<"Ingrese la coordenada x del segundo punto: ";cin>>x2;
  cout<<"Ingrese la coordenada y del segundo punto: ";cin>>y2;
  dist=hypot(x2-x1,y2-y1);
  cout<<"La distancia entre el punto ("<<x1<<","<<y1<<") y ("<<x2<<","<<y2<<") es: "<<dist;
  return 0;
}
