//
//  heldin.cpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include <iostream>
#include "main.hpp"
#include <string>

Gegenstand defaultgeg;

Heldin::Heldin(std::string name, int lebenspunkte, int gold) : Character(std::string(name), int(lebenspunkte), int(gold)) {
    
    for(int i=0; i<2; ++i) {
        this->ausruestung[i].setIsValid(false);
    }
}

Gegenstand Heldin::removeGegenstandVonAusruestung(int slot) {
    if(slot < 0 || slot > 1) return defaultgeg;
    this->ausruestung[slot].setIsValid(false);
    return this->ausruestung[slot];
}

int Heldin::addAusruestung(const Gegenstand &gegenstand) {
    const int index = this->getFreeAusruestungIndex();
    if(index != -1) this->ausruestung[index] = gegenstand;
    return index;
}


int Heldin::getFreeAusruestungIndex() {
    for(int i=0; i<2; ++i) {
        if(!this->ausruestung[i].getIsValid()) {
            return i;
        }
    }
    return -1;
}

void Heldin::gegenstandVerkaufen(int stelle) {
    if(stelle >= 0 && stelle <= 9 && this->getGegenstand(stelle).getIsValid()) {
        this->setGold(this->getGold() + this->getGegenstand(stelle).getWert());
        this->getGegenstand(stelle).setIsValid(false);
        std::cout << "Gegenstand: " << this->getGegenstand(stelle).getBezeichnung() << " wurde verkauft." << std::endl;
    } else std::cout << "Es befindet sich kein Gegenstand im Inventarplatz." << std::endl;
}

std::string Heldin::getType() {
    return "Heldin";
}

int Heldin::getDamage() {
    return 20;
}
