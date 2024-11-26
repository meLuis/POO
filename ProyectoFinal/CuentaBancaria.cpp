#include "CuentaBancaria.h"
CuentaBancaria::CuentaBancaria()
{
  numeroCuenta = "";
  nombreCliente = "";
  saldo = 0;
}
CuentaBancaria::CuentaBancaria(string _numeroCuenta, string _nombreCliente, float _saldo)
{
  numeroCuenta = _numeroCuenta;
  nombreCliente = _nombreCliente;
  saldo = _saldo;
}
CuentaBancaria::~CuentaBancaria()
{
}
string CuentaBancaria::getNumeroCuenta()
{
  return numeroCuenta;
}
void CuentaBancaria::setNumeroCuenta(string _numeroCuenta)
{
  numeroCuenta = _numeroCuenta;
}
string CuentaBancaria::getNombreCliente()
{
  return nombreCliente;
}
void CuentaBancaria::setNombreCliente(string _nombreCliente)
{
  nombreCliente = _nombreCliente;
}
float CuentaBancaria::getSaldo()
{
  return saldo;
}
void CuentaBancaria::setSaldo(float _saldo)
{
  saldo = _saldo;
}
void CuentaBancaria::depositarDinero()
{
  float deposito;
  cout << "Ingrese la cantidad a depositar: ";
  cin >> deposito;
  saldo += deposito;
}
void CuentaBancaria::retirarDinero()
{
  float retiro;
  cout << "Ingrese la cantidad a retirar: ";
  cin >> retiro;
  if (retiro > saldo)
  {
    cout << "Saldo insuficiente" << endl;
  }
  else
  {
    saldo -= retiro;
  }
}
void CuentaBancaria::mostrarSaldo()
{
  cout << "Saldo: " << saldo << endl;
}
