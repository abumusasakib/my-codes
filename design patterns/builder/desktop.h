#ifndef DESKTOP_H
#define DESKTOP_H

#include <string>
using namespace std;

/// @brief The Desktop class
/// @details The Desktop class is a class that represents a desktop.
class Desktop
{
private:
    string monitor;
    string keyboard;
    string mouse;
    string speaker;
    string ram;
    string processor;
    string motherBoard;

public:
    void setMonitor(string pMonitor);
    void setKeyboard(string pKeyBoard);
    void setMouse(string pMouse);
    void setSpeaker(string pSpeaker);
    void setRam(string pRam);
    void setProcessor(string pProcessor);
    void setMotherBoard(string pMotherBoard);
    void showSpecs();
};

#endif //! DESKTOP_H