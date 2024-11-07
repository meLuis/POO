#include <iostream>
using namespace std;
int main(){
  int num;
  cout<<"TABLAS DE MULTIPLICAR"<<endl;
  cout<<"Dame el numero de tablas a multiplicar: ";
  cin>>num;

  for(int i=1;i<=num;i++){
    cout<<endl;
    for(int j=1;j<11;j++){
      cout<<i<<"x"<<j<<"="<<i*j<<endl;
    }
  }
  return 0;
}
