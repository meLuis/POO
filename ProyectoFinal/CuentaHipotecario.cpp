#include "CuentaHipotecario.h"
CuentaHipotecario::CuentaHipotecario() : CuentaBancaria()
{
  montoFijo = 0;
  plazo = 0;
  seguroIncluido = false;
}
CuentaHipotecario::CuentaHipotecario(string _numeroCuenta, string _nombreCliente, float _saldo,
                                     float _montoFijo, int _plazo, bool _seguroIncluido) : CuentaBancaria(_numeroCuenta, _nombreCliente, _saldo)
{
  montoFijo = _montoFijo;
  plazo = _plazo;
  seguroIncluido = _seguroIncluido;
}
CuentaHipotecario::~CuentaHipotecario()
{
}
float CuentaHipotecario::getMontoFijo()
{
  return montoFijo;
}
void CuentaHipotecario::setMontoFijo(float _montoFijo)
{
  montoFijo = _montoFijo;
}
int CuentaHipotecario::getPlazo()
{
  return plazo;
}
void CuentaHipotecario::setPlazo(int _plazo)
{
  plazo = _plazo;
}
bool CuentaHipotecario::getSeguroIncluido()
{
  return seguroIncluido;
}
void CuentaHipotecario::setSeguroIncluido(bool _seguroIncluido)
{
  seguroIncluido = _seguroIncluido;
}
void CuentaHipotecario::mostrarSaldo()
{
  cout << "============================" << endl;
  cout << "      Cuenta Hipotecaria      " << endl;
  cout << "============================" << endl;

  cout << "Número de cuenta: " << numeroCuenta << endl;
  cout << "Nombre del cliente: " << nombreCliente << endl;

  float saldoRestante = saldo - montoFijo;

  cout << "Saldo actual: $" << saldo << endl;
  cout << "Monto fijo mensual a abonar: $" << montoFijo << endl;
  cout << "Saldo después de abonar el monto fijo: $" << saldoRestante << endl;

  cout << "----------------------------" << endl;
  cout << "Plazo del préstamo: " << plazo << " meses" << endl;
  cout << "Seguro incluido: " << (seguroIncluido ? "Sí" : "No") << endl;
  cout << "============================" << endl;
}
