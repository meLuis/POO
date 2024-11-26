#include "CuentaBancaria.h"
class CuentaCredito : public CuentaBancaria
{
private:
  float limiteCredito, tasaAnual;
  string fechaCorte, nivelCredito;

public:
  CuentaCredito();
  CuentaCredito(string _numeroCuenta, string _nombreCliente, float _saldo,
                float _limiteCredito, float _tasaAnual, string _fechaCorte, string _nivelCredito);
  ~CuentaCredito();
  float getLimiteCredito();
  void setLimiteCredito(float _limiteCredito);
  float getTasaAnual();
  void setTasaAnual(float _tasaAnual);
  string getFechaCorte();
  void setFechaCorte(string _fechaCorte);
  string getNivelCredito();
  void setNivelCredito(string _nivelCredito);
  void mostrarSaldo() override;
};
