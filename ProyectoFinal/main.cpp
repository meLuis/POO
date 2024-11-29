#include "CuentaCredito.h"
#include "CuentaDebito.h"
#include "CuentaHipotecario.h"
#include "CuentaInversion.h"
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

const int MAX_CUENTAS = 30;

// Función para mostrar el menú principal
void mostrarMenu() {
    cout << "\n--- Sistema de Gestión de Cuentas Bancarias ---\n";
    cout << "1. Agregar cuenta\n";
    cout << "2. Mostrar cuentas\n";
    cout << "3. Modificar cuenta\n";
    cout << "4. Eliminar cuenta\n";
    cout << "5. Salir\n";
    cout << "Seleccione una opción: ";
}

// Función para agregar una nueva cuenta
void agregarCuenta(vector<unique_ptr<CuentaBancaria>>& cuentas) {
    if (cuentas.size() >= MAX_CUENTAS) {
        cout << "No se pueden registrar más cuentas. Límite alcanzado." << endl;
        return;
    }

    int tipo;
    cout << "\nSeleccione el tipo de cuenta a agregar:\n";
    cout << "1. Cuenta de Crédito\n";
    cout << "2. Cuenta de Débito\n";
    cout << "3. Cuenta Hipotecaria\n";
    cout << "4. Cuenta de Inversión\n";
    cout << "Ingrese el número correspondiente: ";
    cin >> tipo;

    string numeroCuenta, nombreCliente;
    float saldo;
    cout << "Ingrese el número de cuenta: ";
    cin >> numeroCuenta;
    cout << "Ingrese el nombre del cliente: ";
    cin.ignore();
    getline(cin, nombreCliente);
    cout << "Ingrese el saldo inicial: ";
    cin >> saldo;

    switch (tipo) {
        case 1: {
            float limiteCredito, tasaAnual;
            string fechaCorte, nivelCredito;
            cout << "Ingrese el límite de crédito: ";
            cin >> limiteCredito;
            cout << "Ingrese la tasa anual (%): ";
            cin >> tasaAnual;
            cout << "Ingrese la fecha de corte (dd/mm/aaaa): ";
            cin >> fechaCorte;
            cout << "Ingrese el nivel de crédito: ";
            cin >> nivelCredito;
            cuentas.push_back(make_unique<CuentaCredito>(numeroCuenta, nombreCliente, saldo, limiteCredito, tasaAnual, fechaCorte, nivelCredito));
            break;
        }
        case 2: {
            float comisionApertura, comisionMensual;
            int limiteRetiro;
            cout << "Ingrese la comisión de apertura: ";
            cin >> comisionApertura;
            cout << "Ingrese la comisión mensual: ";
            cin >> comisionMensual;
            cout << "Ingrese el límite de retiro: ";
            cin >> limiteRetiro;
            cuentas.push_back(make_unique<CuentaDebito>(numeroCuenta, nombreCliente, saldo, comisionApertura, comisionMensual, limiteRetiro));
            break;
        }
        case 3: {
            float montoFijo;
            int plazo;
            bool seguroIncluido;
            cout << "Ingrese el monto fijo: ";
            cin >> montoFijo;
            cout << "Ingrese el plazo (en anios): ";
            cin >> plazo;
            plazo*=12;
            cout << "¿Incluye seguro? (1 para Sí, 0 para No): ";
            cin >> seguroIncluido;
            cuentas.push_back(make_unique<CuentaHipotecario>(numeroCuenta, nombreCliente, saldo, montoFijo, plazo, seguroIncluido));
            break;
        }
        case 4: {
            string tipoInversion;
            int periodoInversion;
            cout << "Ingrese el tipo de inversión: ";
            cin >> tipoInversion;
            cout << "Ingrese el periodo de inversión (en meses): ";
            cin >> periodoInversion;
            cuentas.push_back(make_unique<CuentaInversion>(numeroCuenta, nombreCliente, saldo, tipoInversion, periodoInversion));
            break;
        }
        default:
            cout << "Opción no válida." << endl;
            return;
    }

    cout << "Cuenta agregada exitosamente.\n";
}

// Función para mostrar todas las cuentas
void mostrarCuentas(const vector<unique_ptr<CuentaBancaria>>& cuentas) {
    if (cuentas.empty()) {
        cout << "No hay cuentas registradas." << endl;
        return;
    }

    cout << "\n--- Cuentas Registradas ---\n";
    for (size_t i = 0; i < cuentas.size(); i++) {
        cout << "Cuenta " << i + 1 << ":\n";
        cuentas[i]->mostrarSaldo();
        cout << endl;
    }
}

// Función para eliminar una cuenta
void eliminarCuenta(vector<unique_ptr<CuentaBancaria>>& cuentas) {
    if (cuentas.empty()) {
        cout << "No hay cuentas registradas para eliminar." << endl;
        return;
    }

    int indice;
    cout << "Ingrese el número de la cuenta a eliminar (1 a " << cuentas.size() << "): ";
    cin >> indice;

    if (indice < 1 || indice > cuentas.size()) {
        cout << "Índice no válido." << endl;
        return;
    }

    cuentas.erase(cuentas.begin() + (indice - 1));
    cout << "Cuenta eliminada exitosamente." << endl;
}

// Función para modificar una cuenta (puede extenderse según las clases derivadas)
void modificarCuenta(vector<unique_ptr<CuentaBancaria>>& cuentas) {
    if (cuentas.empty()) {
        cout << "No hay cuentas registradas para modificar." << endl;
        return;
    }

    int indice;
    cout << "Ingrese el número de la cuenta a modificar (1 a " << cuentas.size() << "): ";
    cin >> indice;

    if (indice < 1 || indice > cuentas.size()) {
        cout << "Índice no válido." << endl;
        return;
    }

    string nuevoNombre;
    cout << "Ingrese el nuevo nombre del cliente: ";
    cin.ignore();
    getline(cin, nuevoNombre);

    cuentas[indice - 1]->setNombreCliente(nuevoNombre);
    cout << "Nombre del cliente actualizado exitosamente." << endl;
}

// Función principal
int main() {
    vector<unique_ptr<CuentaBancaria>> cuentas;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarCuenta(cuentas);
                break;
            case 2:
                mostrarCuentas(cuentas);
                break;
            case 3:
                modificarCuenta(cuentas);
                break;
            case 4:
                eliminarCuenta(cuentas);
                break;
            case 5:
                cout << "Saliendo del sistema." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 5);

    return 0;
}
