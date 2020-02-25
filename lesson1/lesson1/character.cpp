//
//  character.cpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include "character.hpp"
#include "heldin.hpp"
#include <iostream>
#include <cstdlib>

Gegenstand defgeg;

Gegenstand Character::removeGegenstandAusInventar(int slot) {
    if (slot < 0 || slot > 9) return defgeg;
    this->inventar[slot].setIsValid(false);
    return this->inventar[slot];
}

int Character::getRandomInventarSlot() {
    int freeSlots[10];
    int index = 0;
    bool empty = true;
    for(int i=0; i<10; ++i) {
        if(this->inventar[i].getIsValid()) {
            freeSlots[index] = i;
            ++index;
            empty = false;
        }
    }
    if(empty) return -1;
    return freeSlots[(rand() % index)];
}

void Character::angreifen(Heldin* heldin) {
    heldin->setLebenspunkte(heldin->getLebenspunkte()-5);
}

void Character::initCharacter(char* name, int lebenspunkte, int gold) {
    this->name = name;
    this->lebenspunkte = lebenspunkte;
    this->gold = gold;
    for(int i=0; i<10; ++i) {
        this->inventar[i].setIsValid(false);
    }
}

void Character::setGold(int gold) {
    this->gold = gold;
}

void Character::setName(char *name) {
    this->name = name;
}

void Character::setLebenspunkte(int lebenspunkte) {
    if(lebenspunkte < 0) {
        this->lebenspunkte = 0;
    } else this->lebenspunkte = lebenspunkte;
}

int Character::getGold() {
    return this->gold;
}

int Character::getLebenspunkte() {
    return this->lebenspunkte;
}

char* Character::getName() {
    return this->name;
}

int Character::getFreeInventarIndex() {
    for(int i=0; i<10; ++i) {
        if(!this->inventar[i].getIsValid()) {
            return i;
        }
    }
    return -1;
}

int Character::addInventarGegenstand(const Gegenstand& gegenstand) {
    const int index = this->getFreeInventarIndex();
    if (index != -1) {
        this->inventar[index] = gegenstand;
        this->inventar[index].setIsValid(true);
    }
    std::cout << "Kein Platz mehr vorhanden!" << std::endl;
    return index;
}
