#ifndef HPDESKTOPBUILDER_CPP
#define HPDESKTOPBUILDER_CPP

#include "hpDesktopBuilder.h"

void HpDesktopBuilder::buildMonitor()
{

    desktop->setMonitor("HP Monitor");
}

void HpDesktopBuilder::buildKeyboard()
{

    desktop->setKeyboard("HP Keyboard");
}

void HpDesktopBuilder::buildMouse()
{

    desktop->setMouse("HP Mouse");
}

void HpDesktopBuilder::buildSpeaker()
{

    desktop->setSpeaker("HP Speaker");
}

void HpDesktopBuilder::buildRam()
{

    desktop->setRam("HP Ram");
}

void HpDesktopBuilder::buildProcessor()
{

    desktop->setProcessor("HP Processor");
}

void HpDesktopBuilder::buildMotherBoard()
{

    desktop->setMotherBoard("HP Motherboard");
}

#endif // HPDESKTOPBUILDER_CPP