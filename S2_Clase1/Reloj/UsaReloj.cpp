#include <iostream>
#include "RelojD.h"
using namespace std;
int main(){
  int opcion=0;
  Reloj reloj;
  while (opcion!=6){
    switch (opcion)
    {
    case 1:{
      int hora;
      cout<<"Ingrese la hora: ";cin>>hora;
      reloj.setHora(hora);
      break;
      }
    case 2:{
      int minutos;
      cout<<"Ingrese los minutos: ";cin>>minutos;
      reloj.setMinutos(minutos);
      break;
      }
    case 3:{
      cout<<"Hora "<<reloj.getHora()<<endl;
      break;
      }
    case 4:{
      cout<<"Minutos "<<reloj.getMinutos()<<endl;
      break;
      }
    case 5:{
      reloj.muestra();
      cout<<endl;
      break;
      }
    case 6:{
      break;
      }
    }
    do{
      cout<<"1.setHora\n2.setMinutos\n3.getHora\n4.getMinutos\n5.desplegar\n6.Salir\n";
      cin>>opcion;
    }while (opcion>6 || opcion<1);
  }
}
