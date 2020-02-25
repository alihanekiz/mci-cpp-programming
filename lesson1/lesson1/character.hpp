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
class Heldin;

class Character {
private:
    char* name;
    int lebenspunkte;
    int gold;
    Gegenstand inventar[10];
public:
    void angreifen(Heldin* heldin);
    int addInventarGegenstand(const Gegenstand& gegenstand);
    Gegenstand removeGegenstandAusInventar(int slot);
    int getRandomInventarSlot();
    int getFreeInventarIndex();
    void initCharacter(char* name, int lebenspunkte, int gold);
    void setName(char* name);
    void setLebenspunkte(int lebenspunkte);
    void setGold(int gold);
    char* getName();
    int getLebenspunkte();
    int getGold();
};

#endif /* character_hpp */
