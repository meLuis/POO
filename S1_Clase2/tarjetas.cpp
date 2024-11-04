#include <iostream>
using namespace std;
int main(){
  double saldo,interes,total;
  char tipo;
  cout<<"Dame el saldo de la tarjeta: ";
  cin>>saldo;
  cout <<"Dame el Tipo de TDC: B-basica, O-Oro, P-Platinum: ";
  cin>>tipo;
  if (tipo=='B')
  {
    interes=saldo*0.10;
  }
  else if (tipo=='O')
  {
    interes=saldo*0.15;
  }
  else if (tipo=='P')
  {
    interes=saldo*0.20;
  }

  total=saldo+interes;
  cout<<"El saldo total es: "<<total;
  return 0;
}
