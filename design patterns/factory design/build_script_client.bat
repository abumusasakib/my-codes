REM Compile vehicle.cpp, car.cpp, and bike.cpp
g++ -c vehicle.cpp car.cpp bike.cpp

REM Create a static library (vehicle_library.a) from car.o and bike.o
ar ru vehicle_library.a car.o bike.o

REM Link client.cpp with the static library to create client.exe
g++ -o client.exe client.cpp vehicle_library.a
