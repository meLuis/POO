#include "CuentaBancaria.h"
class CuentaHipotecario : public CuentaBancaria
{
private:
  float montoFijo;
  int plazo;
  bool seguroIncluido;

public:
  CuentaHipotecario();
  CuentaHipotecario(string _numeroCuenta, string _nombreCliente, float _saldo,
                    float _montoFijo, int _plazo, bool _seguroIncluido);
  ~CuentaHipotecario();
  float getMontoFijo();
  void setMontoFijo(float _montoFijo);
  int getPlazo();
  void setPlazo(int _plazo);
  bool getSeguroIncluido();
  void setSeguroIncluido(bool _seguroIncluido);
  void mostrarSaldo() override;
};
