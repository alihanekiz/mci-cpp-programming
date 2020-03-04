//
//  ritter.cpp
//  lesson1
//
//  Created by Alihan  Ekiz on 03.03.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include "ritter.hpp"
#include "npc.hpp"

Ritter::Ritter(std::string name, int lebenspunkte, int gold, int staerke) : NPC(std::string(name), int(lebenspunkte), int(gold)) {
    this->setStaerke(staerke);
}

void Ritter::setStaerke(int staerke) {
    if(staerke > 0) this->staerke = staerke;
}

int Ritter::getStaerke() {
    return this->staerke;
}

int Ritter::getDamage() {
    return 2 + this->getStaerke() * 0.1;
}

std::string Ritter::getType() {
    return "Ritter";
}
