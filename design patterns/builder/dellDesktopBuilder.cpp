// dellDesktopBuilder.cpp

#ifndef DELLDESKTOPBUILDER_CPP
#define DELLDESKTOPBUILDER_CPP

#include "dellDesktopBuilder.h"

void DellDesktopBuilder::buildMonitor()
{
    desktop->setMonitor("Dell Monitor");
}

void DellDesktopBuilder::buildKeyboard()
{
    desktop->setKeyboard("Dell Keyboard");
}

void DellDesktopBuilder::buildMouse()
{
    desktop->setMouse("Dell Mouse");
}

void DellDesktopBuilder::buildSpeaker()
{
    desktop->setSpeaker("Dell Speaker");
}

void DellDesktopBuilder::buildRam()
{
    desktop->setRam("Dell Ram");
}

void DellDesktopBuilder::buildProcessor()
{
    desktop->setProcessor("Dell Processor");
}

void DellDesktopBuilder::buildMotherBoard()
{
    desktop->setMotherBoard("Dell Motherboard");
}

#endif // DELLDESKTOPBUILDER_CPP
