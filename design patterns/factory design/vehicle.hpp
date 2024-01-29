#ifndef vehicle_hpp
#define vehicle_hpp


// interface
class Vehicle
{
public:
    // virtual function
    virtual void createVehicle() = 0; // mandatory to implement by other classes
};

#endif