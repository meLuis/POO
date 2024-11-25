#include <iostream>
using namespace std;
class Complex{
  private:
  double real=0.0;
  double imag=0.0;
  public:
  Complex(double r=0.0,double i=0.0){
    real=r;
    imag=i;
  }
  //sobrecarga del operador
  Complex operator+(const Complex& other) const{
    return Complex(real + other.real,imag+other.imag);
  }
  //método para mostrar el número complejo
  void display() const{
    cout<<real;
    if (imag>=0)
      cout<<" + "<<imag<<"i";
    else
      cout<<" - "<<-imag<<"i";
    cout<<endl;
  }

};
int main(){
  Complex c1(3.0,4.0); //primer número complejo 3+4i
  Complex c2(1.5,-2.5);//segundo número complejo 1.5-2.5i
  Complex c3=c1+c2;
  cout<<"c1:";
  c1.display();
  cout<<"c2:";
  c2.display();
  cout<<"c3:";
  c3.display();

  return 0;
}
