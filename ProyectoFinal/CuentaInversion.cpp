#include "CuentaInversion.h"
CuentaInversion::CuentaInversion() : CuentaBancaria()
{
  tipoInversion = "";
  periodoInversion = 0;
}
CuentaInversion::CuentaInversion(string _numeroCuenta, string _nombreCliente, float _saldo,
                                 string _tipoInversion, int _periodoInversion) : CuentaBancaria(_numeroCuenta, _nombreCliente, _saldo)
{
  tipoInversion = _tipoInversion;
  periodoInversion = _periodoInversion;
}
CuentaInversion::~CuentaInversion()
{
}
string CuentaInversion::getTipoInversion()
{
  return tipoInversion;
}
void CuentaInversion::setTipoInversion(string _tipoInversion)
{
  tipoInversion = _tipoInversion;
}
int CuentaInversion::getPeriodoInversion()
{
  return periodoInversion;
}
void CuentaInversion::setPeriodoInversion(int _periodoInversion)
{
  periodoInversion = _periodoInversion;
}
void CuentaInversion::mostrarSaldo()
{
  cout << "============================" << endl;
  cout << "       Cuenta Inversión       " << endl;
  cout << "============================" << endl;

  cout << "Número de cuenta: " << numeroCuenta << endl;
  cout << "Nombre del cliente: " << nombreCliente << endl;

  float saldoConInteres = saldo + (saldo * 0.12);

  cout << "Saldo después del 12% de interés anual: $" << saldoConInteres << endl;

  cout << "----------------------------" << endl;
  cout << "Tipo de inversión: " << tipoInversion << endl;
  cout << "Periodo de inversión: " << periodoInversion << " años" << endl;
  cout << "============================" << endl;
}
