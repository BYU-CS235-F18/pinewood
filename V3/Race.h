#pragma once
#include <sstream>
#include "RaceInterface.h"
#include "Car.h"
#include "Panda.h"
#include "Rocket.h"

using namespace std;

/*
*	WARNING: It is expressly forbidden to modify any part of this document, including its name
*/
class Race: public RaceInterface
{
private:
    vector<Car*> carVec;
public:
	Race();
	~Race() {}
	bool addCar(string info);
	bool removeCar(string name);
	CarInterface* getCar(string name);
	int getSize() const;
};
