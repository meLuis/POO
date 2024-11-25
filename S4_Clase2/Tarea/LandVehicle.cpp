#include "LandVehicle.h"
#include <iostream>
using namespace std;

LandVehicle::LandVehicle(){
  //Vehicle(); en este caso es redundante llamarlo
  numberOfWheels=0;
  fuelType="";
  hasMotor=false;
}

LandVehicle::LandVehicle(string _id, int _year, int _capacity, float _weight,
float _maxSpeed,int _numberOfWheels, string _fuelType, bool _hasMotor):
Vehicle(_id,_year,_capacity,_weight,_maxSpeed){
  numberOfWheels=_numberOfWheels;
  fuelType=_fuelType;
  hasMotor=_hasMotor;
}

LandVehicle::~LandVehicle(){
  cout<<"Destructor de LandVehicle\n";
}

int LandVehicle::getNumberOfWheels(){
  return numberOfWheels;
}

void LandVehicle::setNumberOfWheels(int _numberOfWheels){
  numberOfWheels=_numberOfWheels;
}

string LandVehicle::getFuelType(){
  return fuelType;
}

void LandVehicle::setFuelType(string _fuelType){
  fuelType=_fuelType;
}

bool LandVehicle::getHasMotor(){
  return hasMotor;
}

void LandVehicle::setHasMotor(bool _hasMotor){
  hasMotor=_hasMotor;
}

void LandVehicle::start() {
  cout << "El vehículo terrestre enciende su motor y arranca\n";
}

void LandVehicle::stop() {
  cout << "El vehículo terrestre detiene su motor y frena\n";
}

void LandVehicle::move() {
  cout << "El vehículo terrestre avanza por el terreno\n";
}


float LandVehicle::checkTirePressure(){
  return (30+rand()%10)*1.0;
}
