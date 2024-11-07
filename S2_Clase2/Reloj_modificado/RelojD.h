#include <iostream>
#include <string>
using namespace std;
class Reloj{
  private:
  int hora,minutos;

  public:
  Reloj();
  Reloj(int _hora, int _minutos);
  ~Reloj();
  void setHora(int _hora);
  void setMinutos(int _minutos);
  int getHora();
  int getMinutos();
  void muestra();
  void incrementaMinutos();
};

Reloj::Reloj(){
  hora=0;
  minutos=0;
};

Reloj::Reloj(int _hora,int _minutos){
  if (_hora<0||_hora>23){
    _hora=0;
  }
  hora=_hora;
  if(_minutos<0 || _minutos>59){
    _minutos=0;
  }
  minutos=_minutos;
}
//setHora y setMinutos quedan ahora inutilizados
void Reloj::setHora(int _hora){
  while (_hora<0||_hora>23){
    cout<<"Ingrese es un valor entre 0 y 23: ";cin>>_hora;
  }
  hora=_hora;
}

void Reloj::setMinutos(int _minutos){
  while(_minutos<0 || _minutos>59){
    cout<<"Ingrese un valor entre 0 y 59: ";cin>>minutos;
  }
  minutos=_minutos;
}

int Reloj::getHora(){
  return hora;
}

int Reloj::getMinutos(){
  return minutos;
}

void Reloj::muestra(){
  if (hora>9 && minutos>9){
    cout<<hora<<":"<<minutos;
  }else if (hora>9){
    cout<<hora<<":0"<<minutos;
  }else if (minutos>9){
    cout<<"0"<<hora<<":"<<minutos;
  }else{
    cout<<"0"<<hora<<":0"<<minutos;
  }

}

void Reloj::incrementaMinutos(){
  minutos=(minutos+1)%60;
  if (minutos==0){
    hora=(hora+1)%24;
  }
}

//destructor, no requiere parámetros (dentro de paréntesis)
Reloj::~Reloj(){
  cout<<"Hola buenas, este es el destructor de la clase Reloj\n";
}