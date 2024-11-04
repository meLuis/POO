#include <iostream>
using namespace std;
int main() {
  string nombre;
  double saldo;
  int edad;
  cout << "Nombre del cliente: ";
  cin >> nombre;
  cout << "Saldo del cliente: ";
  cin >> saldo;
  cout << "Edad del cliente: ";
  cin >> edad;
  cout<<"Cliente: "<<nombre<<" con Saldo: "<<saldo<<"de Edad: "<<edad;
  return 0;
}
