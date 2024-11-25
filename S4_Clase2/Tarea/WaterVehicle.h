#ifndef WATER_VEHICLE_H
#define WATER_VEHICLE_H
#include "Vehicle.h"
class WaterVehicle:public Vehicle{
private:
string propulsionType;
float maxDepth;
public:
WaterVehicle();
WaterVehicle(string _id, int _year, int _capacity, float _weight, float _maxSpeed, string _propulsionType, float _maxDepth);
~WaterVehicle();
string getPropulsionType();
void setPropulsionType(string _propulsionType);
float getMaxDepth();
void setMaxDepth(float _maxDepth);
void start() override;
void stop() override;
void move() override;
void activateSonar();
};
#endif
