// dellDesktopBuilder.h

#ifndef DELLDESKTOPBUILDER_H
#define DELLDESKTOPBUILDER_H

#include "desktopBuilder.h"

/// @brief The DellDesktopBuilder class
/// @details The DellDesktopBuilder class is a class that builds a Dell desktop.
class DellDesktopBuilder : public DesktopBuilder
{ // inherit from the DesktopBuilder class
public:
    DellDesktopBuilder() : DesktopBuilder() {}

    // Implementing the virtual functions to build components
    void buildMonitor() override;
    void buildKeyboard() override;
    void buildMouse() override;
    void buildSpeaker() override;
    void buildRam() override;
    void buildProcessor() override;
    void buildMotherBoard() override;
};

#endif // !DELL_DESKTOP_BUILDER_H
