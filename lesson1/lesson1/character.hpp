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
#include <string>

class Heldin;

class Character {
private:
    std::string name;
    int lebenspunkte;
    int gold;
    Gegenstand inventar[10];
public:
    Character(std::string name, int lebenspunkte, int gold);
    void angreifen(Character* character);
    virtual int getDamage();
    virtual std::string getType();
    int addInventarGegenstand(const Gegenstand& gegenstand);
    Gegenstand removeGegenstandAusInventar(int slot);
    Gegenstand getGegenstand(int index);
    int getRandomInventarSlot();
    int getFreeInventarIndex();
    void setName(std::string name);
    void setLebenspunkte(int lebenspunkte);
    void setGold(int gold);
    std::string getName();
    int getLebenspunkte();
    int getGold();
    friend std::ostream& operator<<(std::ostream& out, const Character& c);
};

#endif /* character_hpp */
