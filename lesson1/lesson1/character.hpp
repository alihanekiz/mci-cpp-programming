//
//  character.hpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//


#ifndef character_hpp
#define character_hpp

#include "gegenstand.hpp"
struct Heldin_t;

struct Character_t {
    char* name;
    int lebenspunkte;
    int gold;
    Gegenstand_t inventar[10];
};

void angreifen(Character_t* character, Heldin_t* heldin);
void initCharacter(Character_t* character, char* name, int lebenspunkte, int gold);

#endif /* character_hpp */
