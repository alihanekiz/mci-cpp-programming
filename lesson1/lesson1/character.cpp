//
//  character.cpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include "character.hpp"
#include "heldin.hpp"

void angreifen(Character_t* character, Heldin_t* heldin) {
    heldin->lebenspunkte -= 5;
}

void initCharacter(Character_t* character, char* name, int lebenspunkte, int gold) {
    character->name = name;
    character->lebenspunkte = lebenspunkte;
    character->gold = gold;
    for(int i=0; i<10; ++i) {
        character->inventar[i].isValid = false;
    }
}
