//
//  gegenstand.cpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include "gegenstand.hpp"
#include <string>

Gegenstand::Gegenstand() {
    this->setIsValid(false);
}

Gegenstand::Gegenstand(std::string bezeichnung, int wert) {
    this->setBezeichnung(bezeichnung);
    this->setWert(wert);
    this->setIsValid(true);
}

void Gegenstand::setWert(int wert) {
    if(wert > 0) {
        this->wert = wert;
    }
}

void Gegenstand::setBezeichnung(std::string bezeichnung) {
    this->bezeichnung = bezeichnung;
}

void Gegenstand::setIsValid(bool isValid) {
    this->isValid = isValid;
}

int Gegenstand::getWert() {
    return this->wert;
}

std::string Gegenstand::getBezeichnung() {
    return this->bezeichnung;
}

bool Gegenstand::getIsValid() {
    return this->isValid;
}
