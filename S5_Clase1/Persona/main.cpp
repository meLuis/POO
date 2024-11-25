#include <iostream>
using namespace std;

class Persona{
  private:
  int edad;
  string nombre;
  public:
  //Persona(const string &nom,int e):nombre(nom),edad(e){}
  Persona(const string &nom,int e){
    nombre=nom;
    edad=e;
  }
  void mostrar(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
  }

  friend void imprimir(const Persona &p);
};

void imprimir(const Persona &p){
  cout<<p.nombre<<endl;
  cout<<p.edad<<endl;
}

int main(){
  Persona per1("Jorge",40);
  per1.mostrar();

  imprimir(per1);
  return 0;
}
