#pragma once
#include "CarInterface.h"

class Car: public CarInterface
{
protected:
  string name;
  int speed;
public:
	Car(string name, int speed);
	~Car() {}
	string getName() const;
	virtual int getSpeed() const = 0;
};
