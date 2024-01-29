#ifndef HPDESKTOPBUILDER_H
#define HPDESKTOPBUILDER_H

#include "desktopBuilder.h"

/// @brief The HpDesktopBuilder class
/**
 * @brief The HpDesktopBuilder class
 * @details The HpDesktopBuilder class is a class that builds a HP desktop.
 */
class HpDesktopBuilder : public DesktopBuilder
{
public:
    void buildMonitor();
    void buildKeyboard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif // !HPDESKTOPBUILDER_H