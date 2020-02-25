//
//  gegenstand.cpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include "gegenstand.hpp"

void Gegenstand::initGegenstand(char* bezeichnung, int wert) {
    this->bezeichnung = bezeichnung;
    this->wert = wert;
    this->isValid = true;
}

void Gegenstand::initGegenstand() {
    this->isValid = false;
}

void Gegenstand::setWert(int wert) {
    if(wert > 0) {
        this->wert = wert;
    }
}

void Gegenstand::setBezeichnung(char *bezeichnung) {
    this->bezeichnung = bezeichnung;
}

void Gegenstand::setIsValid(bool isValid) {
    this->isValid = isValid;
}

int Gegenstand::getWert() {
    return this->wert;
}

char* Gegenstand::getBezeichnung() {
    return this->bezeichnung;
}

bool Gegenstand::getIsValid() {
    return this->isValid;
}
