#include <iostream>
#include <string>
using namespace std;
int main(){
  string nombre;
  float nota1,nota2,nota3,promedio;
  cout<<"Ingrese la calificación 1: ";cin>>nota1;
  cout<<"Ingrese la calificación 2 ";cin>>nota2;
  cout<<"Ingrese la calificación 3: ";cin>>nota3;
  promedio=(nota1+nota2+nota3)/3;
  //esto lo limita la cantidad de cifras significativas
  cout.precision(2);
  //el fixed indica que se cuenten las C.S. a partir del punto decimal
  cout<<"El promedio de "<<fixed<<nombre<<" es: "<<promedio;
  return 0;
}
