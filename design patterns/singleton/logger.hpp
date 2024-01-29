#ifndef logger_h
#define logger_h

#include <string>
#include <mutex>
using namespace std;

class Logger
{
private:
    static int ctr;                   // keep track of number of instances
    static Logger *loggerInstance;    // this instance will be used by all the loggers
    static mutex mtx;                 // for allowing to lock instance creation
    Logger();                         // making default constructor private
    Logger(const Logger &);           // making copy constructor private
    Logger operator=(const Logger &); // making operator= overloading private

public:
    static Logger *getLogger();
    void Log(string msg);
};

#endif