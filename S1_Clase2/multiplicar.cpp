#include <iostream>
using namespace std;
int main()
{
  int numero;

  cout<<"Dame el numero de la tabla a multiplicar: ";
  cin>>numero;

  for(int i=1;i<=10;i++)
  {
    cout<<numero<<" x "<<i<<" = "<<numero*i;
    cout<<endl;
  }
  return 0;
}
