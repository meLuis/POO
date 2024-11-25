#include "SpaceVehicle.h"
#include <iostream>
using namespace std;

SpaceVehicle::SpaceVehicle(){
  fuelType="";
  missionType="";
  heatResistance=0.0f;
}

SpaceVehicle::SpaceVehicle(string _id, int _year, int _capacity, float _weight,
float _maxSpeed, string _fuelType, string _missionType, float _heatResistance):
Vehicle(_id,_year,_capacity,_weight,_maxSpeed){
  fuelType=_fuelType;
  missionType=_missionType;
  heatResistance=_heatResistance;
}

SpaceVehicle::~SpaceVehicle(){
  cout<<"Destructor de SpaceVehicle\n";
}

string SpaceVehicle::getFuelType(){
  return fuelType;
}

void SpaceVehicle::setFuelType(string _fuelType) {
  fuelType = _fuelType;
}

string SpaceVehicle::getMissionType() {
  return missionType;
}

void SpaceVehicle::setMissionType(string _missionType) {
  missionType = _missionType;
}

float SpaceVehicle::getHeatResistance() {
  return heatResistance;
}

void SpaceVehicle::setHeatResistance(float _heatResistance) {
  heatResistance = _heatResistance;
}

void SpaceVehicle::start() {
  cout << "Encendiendo propulsores para el vehículo espacial.\n";
}

void SpaceVehicle::stop() {
  cout << "Desactivando propulsores y estabilizando órbita.\n";
}

void SpaceVehicle::move() {
  cout << "El vehículo espacial está navegando por el espacio.\n";
}

void SpaceVehicle::initiateReverseCount(){
  cout<<"Iniciando conteo en reversa\n";
}

void SpaceVehicle::deploySolarPanels(){
  cout<<"Implementando paneles solares\n";
}
