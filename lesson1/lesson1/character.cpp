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
#include <string>

Gegenstand defgeg;

Character::Character(std::string name, int lebenspunkte, int gold) {
    this->setName(name);
    this->setLebenspunkte(lebenspunkte);
    this->setGold(gold);
    for(int i=0; i<10; ++i) {
        this->inventar[i].setIsValid(false);
    }
}

std::ostream& operator<<(std::ostream& out, const Character& c) {
    out << "Name: " << c.name;
    return out;
}


void Character::angreifen(Character *character) {
    int damage = 2 + this->getDamage() * 0.1;
    character->setLebenspunkte(character->getLebenspunkte() - damage);
}

int Character::getDamage() {
    return 2;
}

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

void Character::setGold(int gold) {
    this->gold = gold;
}

void Character::setName(std::string name) {
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

std::string Character::getName() {
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
    } else std::cout << "Kein Platz mehr vorhanden!" << std::endl;
    return index;
}

Gegenstand Character::getGegenstand(int index) {
    if (index < 0 || index > 9) return defgeg;
    return this->inventar[index];
}

std::string Character::getType() {
    return "Character";
}
