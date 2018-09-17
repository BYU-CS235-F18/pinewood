#include "Car.h"

Car::Car(string name, int speed)
{
    this->name = name;
    this->speed = speed;
}

string Car::getName() const
{
    return name;    
}