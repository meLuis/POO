#include <iostream>
using namespace std;

void cargaArreglo(int arr[10], int &size) {
    cout << "Cuantos datos tiene el arreglo " << endl;
    cin >> size;

    for (int cont = 0; cont < size; cont++) {
        cout << "Dato[" << cont << "] = ";
        cin >> arr[cont];
    }
}

int sumaArreglo(int arregloA[10], int tamA){
  int suma=0;
  for (int i=0;i<tamA;i++){
    if (arregloA[i]%2==0){
    suma+=arregloA[i];
    }
  }
  return suma;
}

int main() {
  int arregloA[10];
  int tamA;

   // Llama a la función para cargar datos al arreglo A

  cargaArreglo(arregloA,tamA);


   // Llama a la función que hiciste

  cout<<sumaArreglo(arregloA,tamA)<<endl;
  return 0;
}
