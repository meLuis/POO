#include <iostream>
using namespace std;
int main(){
  double valor1,valor2, temp;
  cout<<"Vamos a intercambiar valores entre dos variables";
  cout<<"Ingrese el primer valor: ";cin>>valor1;
  cout<<"Ingrese el segundo valor: ";cin>>valor2;

  temp=valor1;
  valor1=valor2;
  valor2=temp;

  cout<<"El nuevo primer valor es: "<<valor1<<endl;
  cout<<"El nuevo segundo valor es: "<<valor2;

  return 0;
}
