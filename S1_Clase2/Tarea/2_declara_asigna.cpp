#include <iostream>
using namespace std;

int main(){
  int n1,n2;
  cout<<"Introduce el primer numero: ";cin>>n1;
  cout<<"Introduce el segundo numero: ";cin>>n2;

  int suma=n1+n2;
  cout<<"La suma de "<<n1<<" y "<<n2<<" es: "<<suma<<endl;

  return 0;
}

/*
¿qué otro tipo de datos para almacenar valores numéricos utiliza c++?

tipos enteros:
short -> entero corto de 2 bytes
int -> enteros de 4 bytes
long -> también de 4 bytes pero puede ser más grande dependiendo del compilador
long long -> enteros de 8 bytes

tipos punto flotante:
float -> 4 bytes, con 6-7 dígitos de precisión
double -> 8 bytes, con 15-16 digitos de precisión
long double -> 10,12,16 bytes dependiendo del compilador, con mayor precisión
que double

observación:
existe una palabra reservada llamada "unsigned" que puede aplicarse
a las variables de tipo entero para solo representar valores positivos y así
extender el rango, por ejemplo
short -> al ser de 2 bytes admite -32768 a -32767
por otro lado
unsigned short -> admite 0 a 65535
65535 es en binario el número que obtienes cuando llenas de 1s los 2 bytes
11111111 11111111 (2)
*/
