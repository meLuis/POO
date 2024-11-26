#include "CuentaCredito.h"
#include "CuentaDebito.h"
#include "CuentaHipotecario.h"
#include "CuentaInversion.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<CuentaBancaria *> cuentas;
  cuentas.push_back(new CuentaCredito("123456789", "Juan Perez", 10000, 5000, 0.15, "15/05/2021", "A"));
  cuentas.push_back(new CuentaDebito("987654321", "Maria Lopez", 5000, 100, 50, 1000));
  cuentas.push_back(new CuentaHipotecario("456789123", "Pedro Ramirez", 20000, 10000, 5, true));
  cuentas.push_back(new CuentaInversion("654321987", "Ana Torres", 15000, "Plazo fijo", 3));
  for (int i = 0; i < cuentas.size(); i++)
  {
    cuentas[i]->mostrarSaldo();
    cout << endl;
  }
  return 0;
}
