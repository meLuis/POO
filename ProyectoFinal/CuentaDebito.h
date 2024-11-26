#include "CuentaBancaria.h"
class CuentaDebito : public CuentaBancaria
{
private:
  float comisionApertura, comisionMensual;
  int limiteRetiro;

public:
  CuentaDebito();
  CuentaDebito(string _numeroCuenta, string _nombreCliente, float _saldo,
               float comisionApertura, float comisionMensual, int limiteRetiro);
  ~CuentaDebito();
  float getComisionApertura();
  void setComisionApertura(float _comisionApertura);
  float getComisionMensual();
  void setComisionMensual(float _comisionMensual);
  int getLimiteRetiro();
  void setLimiteRetiro(int _limiteRetiro);
  void mostrarSaldo() override;
};
