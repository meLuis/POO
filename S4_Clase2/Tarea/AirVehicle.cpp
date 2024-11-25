#include "AirVehicle.h"
#include <iostream>
using namespace std;

AirVehicle::AirVehicle() {
    flightRange = 0.0;
    engineCount = 0;
    maxHeigh = 0.0f;
}

AirVehicle::AirVehicle(string _id, int _year, int _capacity, float _weight, float _maxSpeed,
double _flightRange, int _engineCount, float _maxHeigh):
Vehicle(_id, _year, _capacity, _weight, _maxSpeed) {
  flightRange = _flightRange;
  engineCount = _engineCount;
  maxHeigh = _maxHeigh;
}

AirVehicle::~AirVehicle() {
  cout << "Destructor de AirVehicle\n";
}

double AirVehicle::getFlightRange() {
  return flightRange;
}

void AirVehicle::setFlightRange(double _flightRange) {
  flightRange = _flightRange;
}

int AirVehicle::getEngineCount() {
  return engineCount;
}

void AirVehicle::setEngineCount(int _engineCount) {
  engineCount = _engineCount;
}

float AirVehicle::getMaxHeight() {
  return maxHeigh;
}

void AirVehicle::setMaxHeight(float _maxHeight) {
  maxHeigh = _maxHeight;
}

void AirVehicle::start() {
  cout << "El vehículo aéreo enciende motores\n";
}

void AirVehicle::stop() {
  cout << "El vehículo aéreo apaga motores\n";
}

void AirVehicle::move() {
  cout << "El vehículo aéreo despega y se mueve\n";
}

void AirVehicle::engageAutopilot() {
  cout << "Autopiloto activado\n";
}
