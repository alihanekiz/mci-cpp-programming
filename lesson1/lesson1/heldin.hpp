//
//  heldin.hpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#ifndef heldin_hpp
#define heldin_hpp

struct Character_t;

class Heldin {
private:
    char* name;
    int lebenspunkte;
    int gold;
    Gegenstand inventar[10];
    Gegenstand ausruestung[2];
    
public:
    void angreifen(Character* gegner);
    int addInventarGegenstand(const Gegenstand& gegenstand);
    int getFreeInventarIndex();
    Gegenstand getGegenstand(int index);
    int addAusruestung(const Gegenstand& gegenstand);
    Gegenstand removeGegenstandVonAusruestung(int slot);
    int getFreeAusruestungIndex();
    Gegenstand removeGegenstandAusInventar(int slot);
    void gegenstandVerkaufen(int stelle);
    void initHeldin(char* name, int lebenspunkte, int gold);
    void setName(char* name);
    void setLebenspunkte(int lebenspunkte);
    void setGold(int gold);
    int getGold();
    int getLebenspunkte();
    char* getName();
};

#endif /* heldin_hpp */
