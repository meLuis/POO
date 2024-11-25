#include "WaterVehicle.h"
#include <iostream>
using namespace std;

WaterVehicle::WaterVehicle() {
    propulsionType = "";
    maxDepth = 0.0f;
}

WaterVehicle::WaterVehicle(string _id, int _year, int _capacity, float _weight,
float _maxSpeed, string _propulsionType, float _maxDepth):
Vehicle(_id, _year, _capacity, _weight, _maxSpeed) {
  propulsionType = _propulsionType;
  maxDepth = _maxDepth;
}

WaterVehicle::~WaterVehicle() {
  cout << "Destruyendo vehículo acuático.\n";
}

string WaterVehicle::getPropulsionType() {
  return propulsionType;
}

void WaterVehicle::setPropulsionType(string _propulsionType) {
  propulsionType = _propulsionType;
}

float WaterVehicle::getMaxDepth() {
  return maxDepth;
}

void WaterVehicle::setMaxDepth(float _maxDepth) {
  maxDepth = _maxDepth;
}

void WaterVehicle::start() {
  cout << "Preparando sistemas del vehículo acuático para iniciar.\n";
}

void WaterVehicle::stop() {
  cout << "El vehículo acuático está desacelerando y deteniéndose.\n";
}

void WaterVehicle::move() {
  cout << "El vehículo acuático está navegando en el agua.\n";
}

void WaterVehicle::activateSonar() {
  cout << "Sonar activado: escaneando el entorno subacuático.\n";
}
