g++ -c desktop.cpp
g++ -c hpDesktopBuilder.cpp
g++ -c dellDesktopBuilder.cpp
g++ -c desktopDirector.cpp
g++ -c client.cpp
g++ -o client.exe desktop.o hpDesktopBuilder.o dellDesktopBuilder.o desktopDirector.o client.o
