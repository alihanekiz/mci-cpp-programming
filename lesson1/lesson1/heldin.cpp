//
//  heldin.cpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include <iostream>
#include "main.hpp"

Gegenstand defaultgeg;

void Heldin::angreifen(Character* gegner) {
    gegner->setLebenspunkte(gegner->getLebenspunkte()-20);
}

Gegenstand Heldin::removeGegenstandVonAusruestung(int slot) {
    if(slot < 0 || slot > 1) return defaultgeg;
    this->ausruestung[slot].setIsValid(false);
    return this->ausruestung[slot];
}

Gegenstand Heldin::removeGegenstandAusInventar(int slot) {
    if (slot < 0 || slot > 9) return defaultgeg;
    this->inventar[slot].setIsValid(false);
    return this->inventar[slot];
}

void Heldin::gegenstandVerkaufen(int stelle) {
    if(stelle >= 0 && stelle <= 9 && this->inventar[stelle].getIsValid()) {
        this->setGold(this->getGold() + this->inventar[stelle].getWert()); 
        this->inventar[stelle].setIsValid(false);
        std::cout << "Gegenstand: " << this->inventar[stelle].getBezeichnung() << " wurde verkauft." << std::endl;
    } else std::cout << "Es befindet sich kein Gegenstand im Inventarplatz." << std::endl;
}

void Heldin::initHeldin(char* name, int lebenspunkte, int gold) {
    this->name = name;
    this->lebenspunkte = lebenspunkte;
    this->gold = gold;
    for(int i=0; i<10; ++i) {
        this->inventar[i].setIsValid(false);
    }
    for(int i=0; i<2; ++i) {
        this->ausruestung[i].setIsValid(false);
    }
}

int Heldin::addAusruestung(const Gegenstand &gegenstand) {
    const int index = this->getFreeAusruestungIndex();
    if(index != -1) this->ausruestung[index] = gegenstand;
    return index;
}

int Heldin::addInventarGegenstand(const Gegenstand &gegenstand) {
    const int index = this->getFreeInventarIndex();
    if (index != -1) {
        this->inventar[index] = gegenstand;
        this->inventar[index].setIsValid(true);
    }
    return index;
}

int Heldin::getFreeInventarIndex() {
    for(int i=0; i<10; ++i) {
        if(!this->inventar[i].getIsValid()) {
            return i;
        }
    }
    return -1;
}

int Heldin::getFreeAusruestungIndex() {
    for(int i=0; i<2; ++i) {
        if(!this->ausruestung[i].getIsValid()) {
            return i;
        }
    }
    return -1;
}

void Heldin::setName(char *name) {
    this->name = name;
}

void Heldin::setLebenspunkte(int lebenspunkte) {
    if(lebenspunkte < 0) {
        this->lebenspunkte = 0;
    } else this->lebenspunkte = lebenspunkte;
}

void Heldin::setGold(int gold) {
    this->gold = gold;
}

int Heldin::getGold() {
    return this->gold;
}

int Heldin::getLebenspunkte() {
    return this->lebenspunkte;
}

char* Heldin::getName() {
    return this->name;
}

Gegenstand Heldin::getGegenstand(int index) {
    if (index < 0 || index > 9) return defaultgeg;
    return this->inventar[index];
}
