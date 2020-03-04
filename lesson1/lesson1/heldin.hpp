//
//  heldin.hpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#ifndef heldin_hpp
#define heldin_hpp

#include <iostream>

class Heldin : public Character {
private:
    Gegenstand ausruestung[2];
    
public:
    Heldin(std::string name, int lebenspunkte, int gold);
    int addAusruestung(const Gegenstand& gegenstand);
    Gegenstand removeGegenstandVonAusruestung(int slot);
    int getFreeAusruestungIndex();
    void gegenstandVerkaufen(int stelle);
    std::string getType() override;
    int getDamage() override;
};

#endif /* heldin_hpp */
