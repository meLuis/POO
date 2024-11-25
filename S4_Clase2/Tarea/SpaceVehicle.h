#ifndef SPACE_VEHICLE_H
#define SPACE_VEHICLE_H
#include "Vehicle.h"
class SpaceVehicle : public Vehicle
{
private:
  string fuelType;
  string missionType;
  float heatResistance;

public:
  SpaceVehicle();
  SpaceVehicle(string _id, int _year, int _capacity, float _weight, float _maxSpeed, string _fuelType, string _missionType, float _heatResistance);
  ~SpaceVehicle();
  string getFuelType();
  void setFuelType(string _fuelType);
  string getMissionType();
  void setMissionType(string _missionType);
  float getHeatResistance();
  void setHeatResistance(float _heatResistance);
  void start() override;
  void stop() override;
  void move() override;
  void initiateReverseCount();
  void deploySolarPanels();
};
#endif
