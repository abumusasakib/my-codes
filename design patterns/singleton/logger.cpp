#include <iostream>
#include "logger.hpp"
using namespace std;

int Logger::ctr = 0;
Logger *Logger::loggerInstance = nullptr;
mutex Logger::mtx;

Logger::Logger()
{
    ctr++; // each time instances created, increment by one
    cout << "New instance created. No of instances: " << ctr << endl;
}

void Logger::Log(string msg)
{
    cout << msg << endl;
}

// only one instance of Logger
Logger *Logger::getLogger()
{
    // double-checked locking, because checking the logger instance twice
    if (loggerInstance == nullptr) // ensure that lock is given only for first time
    {
        mtx.lock(); // making instance creation thread safe
        if (loggerInstance == nullptr)
        {
            loggerInstance = new Logger(); // if no instance already, then create
        }
        mtx.unlock();
        return loggerInstance; // if already created then return it
    }
}