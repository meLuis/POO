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
  cout << "Numero de cuenta: " << numeroCuenta << endl;
  cout << "Nombre del cliente: " << nombreCliente << endl;
  cout << "Saldo: " << saldo << endl;
  cout << "Comision de apertura: " << comisionApertura << endl;
  cout << "Comision mensual: " << comisionMensual << endl;
  cout << "Limite de retiro: " << limiteRetiro << endl;
}
