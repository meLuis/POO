#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(){
  id="";
  year=0;
  capacity=0;
  weight=0.0f;
  maxSpeed=0.0f;
}

Vehicle::Vehicle(string _id, int _year, int _capacity, float _weight, float _maxSpeed){
  id=_id;
  year=_year;
  capacity=_capacity;
  weight=_weight;
  maxSpeed=_maxSpeed;
}

Vehicle::~Vehicle(){
  cout<<"Destructor de Vehicle\n";
}

string Vehicle::getId(){
  return id;
}

void Vehicle::setId(string _id){
  id=_id;
}

int Vehicle::getYear(){
  return year;
}

void Vehicle::setYear(int _year){
  year=_year;
}

int Vehicle::getCapacity(){
  return capacity;
}

void Vehicle::setCapacity(int _capacity){
  capacity=_capacity;
}

float Vehicle::getWeight(){
  return weight;
}

void Vehicle::setWeight(float _weight){
  weight=_weight;
}

float Vehicle::getMaxSpeed(){
  return maxSpeed;
}

void Vehicle::setMaxSpeed(float _maxSpeed){
  maxSpeed=_maxSpeed;
}

void Vehicle::start(){
  cout<<"El vehículo se inicia\n";
}

void Vehicle::stop(){
  cout<<"El vehículo se detiene\n";
}

void Vehicle::move(){
  cout<<"El vehículo se mueve\n";
}
