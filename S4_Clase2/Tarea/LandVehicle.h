#ifndef LAND_VEHICLE_H
#define LAND_VEHICLE_H
#include "Vehicle.h"
class LandVehicle : public Vehicle
{
private:
  int numberOfWheels;
  string fuelType;
  bool hasMotor;

public:
  LandVehicle();
  LandVehicle(string _id, int _year, int _capacity, float _weight, float _maxSpeed, int _numberOfWheels, string _fuelType, bool _hasMotor);
  ~LandVehicle();
  int getNumberOfWheels();
  void setNumberOfWheels(int _numberOfWheels);
  string getFuelType();
  void setFuelType(string _fuelType);
  bool getHasMotor();
  void setHasMotor(bool _hasMotor);
  void start() override;
  void stop() override;
  void move() override;
  float checkTirePressure();
};
#endif
