#include <iostream>
#include "RelojD.h"
using namespace std;
int main(){
  int opcion=0;
  int _hora,_minutos;
  while (opcion!=7){
    switch (opcion)
    {
    case 1:{
      int hora;
      cout<<"Ingrese la hora: ";cin>>_hora;
      break;
      }
    case 2:{
      int minutos;
      cout<<"Ingrese los minutos: ";cin>>_minutos;
      break;
      }
    case 3:{
      Reloj reloj(_hora,_minutos);
      cout<<"Hora "<<reloj.getHora()<<endl;
      break;
      }
    case 4:{
      Reloj reloj(_hora,_minutos);
      cout<<"Minutos "<<reloj.getMinutos()<<endl;
      break;
      }
    case 5:{
      Reloj reloj(_hora,_minutos);
      reloj.muestra();
      cout<<endl;
      break;
      }
    case 6:{
      Reloj reloj(_hora,_minutos);
      reloj.~Reloj();
    }
    case 7:{
      break;
      }
    }
    do{
      cout<<"1.setHora\n2.setMinutos\n3.getHora\n4.getMinutos\n5.desplegar\n6.Destructor!\n7.Salir\n";
      cin>>opcion;
    }while (opcion>7 || opcion<1);
  }

}
