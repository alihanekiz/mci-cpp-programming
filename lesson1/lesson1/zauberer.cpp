//
//  zauberer.cpp
//  lesson1
//
//  Created by Alihan  Ekiz on 03.03.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include "zauberer.hpp"
#include "npc.hpp"
#include <string>

Zauberer::Zauberer(std::string name, int lebenspunkte, int gold, int zauberkraft) : NPC(std::string(name), int(lebenspunkte), int(gold)) {
    this->setZauberkraft(zauberkraft);
}

void Zauberer::setZauberkraft(int zauberkraft) {
    if(zauberkraft > 0) this->zauberkraft = zauberkraft;
}

int Zauberer::getZauberkraft() {
    return this->zauberkraft;
}

int Zauberer::getDamage() {
    return 2 + this->getZauberkraft() * 0.1;
}

std::string Zauberer::getType() {
    return "Zauberer";
}
