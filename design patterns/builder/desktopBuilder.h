#ifndef DESKTOPBUILDER_H
#define DESKTOPBUILDER_H
#include "desktop.h"

/// @brief The DesktopBuilder class
/// @details The DesktopBuilder class is an abstract class that provides an interface for creating a desktop.
class DesktopBuilder
{
protected:
    Desktop *desktop;

public:
    DesktopBuilder()
    {
        desktop = new Desktop(); // Initialize the desktop product when a builder is created.
    }
    virtual void buildMonitor() = 0;
    virtual void buildKeyboard() = 0;
    virtual void buildMouse() = 0;
    virtual void buildSpeaker() = 0;
    virtual void buildRam() = 0;
    virtual void buildProcessor() = 0;
    virtual void buildMotherBoard() = 0;
    virtual Desktop *getDesktop()
    {
        return desktop;
    }
    virtual ~DesktopBuilder() {}
};

#endif // !DESKTOPBUILDER_H