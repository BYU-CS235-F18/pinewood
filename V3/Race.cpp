#include "Race.h"

Race::Race() {}

bool Race::addCar(string info)
{
    stringstream ss(info);
    string name;
    string type;
    int speed;
    if(ss >> name >> type >> speed)
    {
        if(ss.rdbuf()->in_avail() > 0) // If there are more characters in the stringstream
        {
            return false; 
        }
        if(type == "R")
        {
           carVec.push_back(new Rocket(name, speed));
        }
        else if(type == "P")
        {
           carVec.push_back(new Panda(name, speed));
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
    return true;
}

bool Race::removeCar(string name)
{
    for(int i = 0; i < carVec.size(); i++)
    {
       if(carVec[i]->getName() == name)
       {
          delete carVec[i]; // Clear the memory where this Car was stored
          carVec.erase(carVec.begin() + i); // Vector erase function needs an iterator
          return true;
       }
    }
    return false;
}

CarInterface* Race::getCar(string name)
{
    for(int i = 0; i < carVec.size(); i++)
    {
       if(carVec[i]->getName() == name)
       {
          return carVec[i];
       }
    }
    return NULL; // NULL is a pointer
}

int Race::getSize() const
{
    return carVec.size();
}
