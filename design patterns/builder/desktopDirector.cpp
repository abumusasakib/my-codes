#include "desktopDirector.h"

DesktopDirector::DesktopDirector(DesktopBuilder *pDesktopBuilder)
{
    this->desktopBuilder = pDesktopBuilder;
}

Desktop *DesktopDirector::getDesktop()
{
    return desktopBuilder->getDesktop();
}

Desktop *DesktopDirector::BuildDesktop()
{
    desktopBuilder->buildMonitor();
    desktopBuilder->buildKeyboard();
    desktopBuilder->buildMouse();
    desktopBuilder->buildSpeaker();
    desktopBuilder->buildRam();
    desktopBuilder->buildProcessor();
    desktopBuilder->buildMotherBoard();
    return desktopBuilder->getDesktop();
}
