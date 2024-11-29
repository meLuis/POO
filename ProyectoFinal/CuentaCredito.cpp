#include "CuentaCredito.h"
CuentaCredito::CuentaCredito():CuentaBancaria()
{
  limiteCredito = 0;
  tasaAnual = 0;
  fechaCorte = "";
  nivelCredito = "";
}
CuentaCredito::CuentaCredito(string _numeroCuenta, string _nombreCliente, float _saldo,
                             float _limiteCredito, float _tasaAnual, string _fechaCorte, string _nivelCredito):CuentaBancaria(_numeroCuenta, _nombreCliente, _saldo)
{
  limiteCredito = _limiteCredito;
  tasaAnual = _tasaAnual;
  fechaCorte = _fechaCorte;
  nivelCredito = _nivelCredito;
}
CuentaCredito::~CuentaCredito()
{
}
float CuentaCredito::getLimiteCredito()
{
  return limiteCredito;
}
void CuentaCredito::setLimiteCredito(float _limiteCredito)
{
  limiteCredito = _limiteCredito;
}
float CuentaCredito::getTasaAnual()
{
  return tasaAnual;
}
void CuentaCredito::setTasaAnual(float _tasaAnual)
{
  tasaAnual = _tasaAnual;
}
string CuentaCredito::getFechaCorte()
{
  return fechaCorte;
}
void CuentaCredito::setFechaCorte(string _fechaCorte)
{
  fechaCorte = _fechaCorte;
}
string CuentaCredito::getNivelCredito()
{
  return nivelCredito;
}
void CuentaCredito::setNivelCredito(string _nivelCredito)
{
  nivelCredito = _nivelCredito;
}

void CuentaCredito::mostrarSaldo()
{
  cout << "============================" << endl;
  cout << "          Cuenta Crédito          " << endl;
  cout << "============================" << endl;

  cout << "Número de cuenta: " << numeroCuenta << endl;
  cout << "Nombre del cliente: " << nombreCliente << endl;

  float saldoTemporal = saldo;
  saldoTemporal -= saldoTemporal * 0.04;

  cout << "Saldo después de aplicar el 4%: $" << saldoTemporal << endl;

  cout << "----------------------------" << endl;
  cout << "Límite de crédito: $" << limiteCredito << endl;
  cout << "Tasa anual: " << tasaAnual << " %" << endl;
  cout << "Fecha de corte: " << fechaCorte << endl;
  cout << "Nivel de crédito: " << nivelCredito << endl;
  cout << "============================" << endl;
}
