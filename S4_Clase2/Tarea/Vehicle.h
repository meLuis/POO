#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle
{
protected:
  string id;
  int year, capacity;
  float weight, maxSpeed;

public:
  Vehicle();
  Vehicle(string _id, int _year, int _capacity, float _weight, float _maxSpeed);
  virtual ~Vehicle();
  string getId();
  void setId(string _id);
  int getYear();
  void setYear(int _year);
  int getCapacity();
  void setCapacity(int _capacity);
  float getWeight();
  void setWeight(float _weight);
  float getMaxSpeed();
  void setMaxSpeed(float _maxSpeed);
  virtual void start();
  virtual void stop();
  virtual void move();
};
#endif
