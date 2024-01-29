#ifndef DESKTOPDIRECTOR_H
#define DESKTOPDIRECTOR_H

#include "desktopBuilder.h"

/// @brief The DesktopDirector class
/// @details The DesktopDirector class is a class that builds a desktop.

class DesktopDirector
{
private:
    DesktopBuilder *desktopBuilder;

public:
    DesktopDirector(DesktopBuilder *pDesktopBuilder);
    Desktop *getDesktop();
    Desktop *BuildDesktop();
};

#endif
