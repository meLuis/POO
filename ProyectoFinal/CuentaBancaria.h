#include <string>
#include <iostream>
using namespace std;
class CuentaBancaria
{
protected:
  string numeroCuenta, nombreCliente;
  float saldo;

public:
  CuentaBancaria();
  CuentaBancaria(string _numeroCuenta, string _nombreCliente, float _saldo);
  virtual ~CuentaBancaria();
  string getNumeroCuenta();
  void setNumeroCuenta(string _numeroCuenta);
  string getNombreCliente();
  void setNombreCliente(string _nombreCliente);
  float getSaldo();
  void setSaldo(float _saldo);
  void depositarDinero();
  void retirarDinero();
  virtual void mostrarSaldo();
};
