#include "Rocket.h"
#define SPEED_BOOST 2

int Rocket::getSpeed() const
{
    return speed * SPEED_BOOST;
}