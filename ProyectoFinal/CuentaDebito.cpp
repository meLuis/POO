#include "CuentaDebito.h"
CuentaDebito::CuentaDebito() : CuentaBancaria()
{
  comisionApertura = 0;
  comisionMensual = 0;
  limiteRetiro = 0;
}
CuentaDebito::CuentaDebito(string _numeroCuenta, string _nombreCliente, float _saldo,
                           float _comisionApertura, float _comisionMensual, int _limiteRetiro) : CuentaBancaria(_numeroCuenta, _nombreCliente, _saldo)
{
  comisionApertura = _comisionApertura;
  comisionMensual = _comisionMensual;
  limiteRetiro = _limiteRetiro;

  saldo-=comisionApertura;
}
CuentaDebito::~CuentaDebito()
{
}
float CuentaDebito::getComisionApertura()
{
  return comisionApertura;
}
void CuentaDebito::setComisionApertura(float _comisionApertura)
{
  comisionApertura = _comisionApertura;
}
float CuentaDebito::getComisionMensual()
{
  return comisionMensual;
}
void CuentaDebito::setComisionMensual(float _comisionMensual)
{
  comisionMensual = _comisionMensual;
}
int CuentaDebito::getLimiteRetiro()
{
  return limiteRetiro;
}
void CuentaDebito::setLimiteRetiro(int _limiteRetiro)
{
  limiteRetiro = _limiteRetiro;
}
void CuentaDebito::mostrarSaldo()
{
  cout << "============================" << endl;
  cout << "           Cuenta Débito           " << endl;
  cout << "============================" << endl;

  cout << "Número de cuenta: " << numeroCuenta << endl;
  cout << "Nombre del cliente: " << nombreCliente << endl;

  float saldoTemporal = saldo;
  saldoTemporal -= comisionMensual;
  cout << "Saldo después de aplicar la comisión mensual: $" << saldoTemporal << endl;

  saldoTemporal -= saldoTemporal * 0.02;
  cout << "Saldo final después del descuento del 2%: $" << saldoTemporal << endl;

  cout << "----------------------------" << endl;
  cout << "Comisión de apertura: $" << comisionApertura << endl;
  cout << "Comisión mensual: $" << comisionMensual << endl;
  cout << "Límite de retiro: $" << limiteRetiro << endl;
  cout << "============================" << endl;
}
