#include <iostream>
using namespace std;
int main(){
  //Mostrar un arreglo
  char letras1[]={'a','b','c','d','e'};
  for (int i=0;i<5;i++){
    cout<<"Indice:"<<i<<" valor "<<letras1[i]<<endl;
  }

  //Llenar un arreglo
  int tam;
  cout<<"Dame el tamaño del arreglo: "<<endl;cin>>tam;
  int numeros[tam];
  for(int j=0;j<tam;j++){
    cout<<"Ingrese valores enteros: ";
    cin>>numeros[j];
  }
  for (int j=0;j<tam;j++){
    cout<<"Valores Ingresados: "<<numeros[j]<<endl;
  }

  //Juntar dos arreglos
  char letras2[]={'f','g','h','i','j'};
  char letras3[10];
  for(int i=0;i<5;i++){
    letras3[i]=letras1[i];
    letras3[i+5]=letras2[i];
  }
  for(int j=0;j<10;j++){
    cout<<"Valor en Letras3: "<<letras3[j]<<endl;
  }
  return 0;
}
