#ifndef vehicle_factory_hpp
#define vehicle_factory_hpp

#include <iostream>
#include "car.hpp"
#include "bike.hpp"
using namespace std;

class VehicleFactory
{
public:
    static Vehicle *getVehicle(string vehicleType); // access this method without creating any object
};

#endif