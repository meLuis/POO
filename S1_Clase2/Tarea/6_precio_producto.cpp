#include <iostream>
using namespace std;
/*Estamos usando camelCase para diferenciar variables, anteriormente en Python
usábamos snake_case, al parecer esto forma parte de los estándares de codificación
*/
int main(){
  float precioBase, IVA,precioFinal;
  cout<<"Ingrese el precio base del producto: ";cin>>precioBase;
  cout<<"Ingrese el porcentaje del impuesto (IVA): ";cin>>IVA;
  precioFinal=precioBase*(1+IVA/100);
  cout<<"El precio del producto con el "<<IVA<<"%"<<" de IVA es: "<<precioFinal<<endl;
  return 0;
}
