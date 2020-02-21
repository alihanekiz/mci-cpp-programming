//
//  heldin.cpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include <iostream>
#include "main.hpp"

void angreifen(Heldin_t* heldin, Character_t* gegner) {
    gegner->lebenspunkte -= 20;
}

void gegenstandVerkaufen(Heldin_t* heldin, int stelle) {
    if(stelle >= 0 && stelle <= 9 && heldin->inventar[stelle].isValid) {
        heldin->gold += heldin->inventar[stelle].wert;
        heldin->inventar[stelle].isValid = false;
        std::cout << "Gegenstand: " << heldin->inventar[stelle].bezeichnung << " wurde verkauft." << std::endl;
    } else std::cout << "Es befindet sich kein Gegenstand im Inventarplatz." << std::endl;
}

void initHeldin(Heldin_t* heldin, char* name, int lebenspunkte, int gold) {
    heldin->name = name;
    heldin->lebenspunkte = lebenspunkte;
    heldin->gold = gold;
    for(int i=0; i<10; ++i) {
        heldin->inventar[i].isValid = false;
    }
    for(int i=0; i<2; ++i) {
        heldin->ausruestung[i].isValid = false;
    }
}
