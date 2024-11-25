#include <iostream>
#include <string>
#include "LandVehicle.h"
#include "SpaceVehicle.h"
#include "WaterVehicle.h"
#include "AirVehicle.h"

using namespace std;

int main() {
    Vehicle* vehicles[4];

    vehicles[0] = new LandVehicle("LV001", 2023, 5, 1500.5f, 180.0f, 4, "Gasolina", true);
    vehicles[1] = new SpaceVehicle("SV001", 2023, 3, 2000.0f, 10000.0f, "Hidrógeno", "Exploración", 3000.0f);
    vehicles[2] = new WaterVehicle("WV001", 2022, 100, 5000.0f, 45.0f, "Hélice", 2000.0f);
    vehicles[3] = new AirVehicle("AV001", 2024, 200, 12000.0f, 900.0f, 5000.0, 2, 15000.0f);

    for (int i = 0; i < 4; i++) {
        cout << "Iniciando vehículo " << i + 1 << ":\n";
        vehicles[i]->start();
        vehicles[i]->move();
        vehicles[i]->stop();
        cout << endl;
    }

    dynamic_cast<LandVehicle*>(vehicles[0])->checkTirePressure();
    dynamic_cast<SpaceVehicle*>(vehicles[1])->initiateReverseCount();
    dynamic_cast<WaterVehicle*>(vehicles[2])->activateSonar();
    dynamic_cast<AirVehicle*>(vehicles[3])->engageAutopilot();

    for (int i = 0; i < 4; i++) {
        delete vehicles[i];
    }

    return 0;
}
