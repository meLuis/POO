#ifndef AIR_VEHICLE_H
#define AIR_VEHICLE_H
#include "Vehicle.h"
class AirVehicle:public Vehicle{
private:
double flightRange;
int engineCount;
float maxHeigh;
public:
AirVehicle();
AirVehicle(string _id, int _year, int _capacity, float _weight, float _maxSpeed, double _flightRange, int _engineCount, float _maxHeigh);
~AirVehicle();
double getFlightRange();
void setFlightRange(double _flightRange);
int getEngineCount();
void setEngineCount(int _engineCount);
float getMaxHeight();
void setMaxHeight(float _maxHeight);
void start() override;
void stop() override;
void move() override;
void engageAutopilot();
};
#endif
