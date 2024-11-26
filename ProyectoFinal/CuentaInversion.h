#include "CuentaBancaria.h"
class CuentaInversion : public CuentaBancaria
{
private:
  string tipoInversion;
  int periodoInversion;

public:
  CuentaInversion();
  CuentaInversion(string _numeroCuenta, string _nombreCliente, float _saldo,
                  string _tipoInversion, int _periodoInversion);
  ~CuentaInversion();
  string getTipoInversion();
  void setTipoInversion(string _tipoInversion);
  int getPeriodoInversion();
  void setPeriodoInversion(int _periodoInversion);
  void mostrarSaldo() override;
};
