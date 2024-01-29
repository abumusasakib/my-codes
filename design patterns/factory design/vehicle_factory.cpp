#include "vehicle_factory.hpp"

Vehicle *VehicleFactory::getVehicle(string vehicleType)
{
    Vehicle *vehicle = nullptr; // Initialize to nullptr to handle the "else" case
    if (vehicleType == "car")
    {
        vehicle = new Car();
    }
    else if (vehicleType == "bike")
    {
        vehicle = new Bike();
    }
    else
    {
        cout << "Nothing" << endl;
    }

    return vehicle;
}