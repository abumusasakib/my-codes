REM Compile vehicle_factory.cpp, car.cpp, bike.cpp and vehicle.cpp
g++ -c vehicle_factory.cpp car.cpp bike.cpp vehicle.cpp

REM Create a static library (vehicle_library.a) from vehicle_factory.o, car.o and bike.o
ar ru vehicle_library.a vehicle_factory.o car.o bike.o

REM Link smart_client.cpp with the static library to create client.exe
g++ -o smart_client.exe smart_client.cpp vehicle_library.a
