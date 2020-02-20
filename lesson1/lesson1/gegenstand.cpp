//
//  gegenstand.cpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include "gegenstand.hpp"

void initGegenstand(Gegenstand_t* gegenstand, char* bezeichnung, int wert) {
    gegenstand->bezeichnung = bezeichnung;
    gegenstand->wert = wert;
    gegenstand->isValid = true;
}

void initGegenstand(Gegenstand_t* gegenstand) {
    gegenstand->isValid = false;
}
