//
//  ritter.hpp
//  lesson1
//
//  Created by Alihan  Ekiz on 03.03.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#ifndef ritter_hpp
#define ritter_hpp

#include "npc.hpp"
#include <string>

class Ritter : public NPC {
private:
    int staerke;
public:
    Ritter(std::string name, int lebenspunkte, int gold, int staerke);
    void setStaerke(int staerke);
    int getStaerke();
    int getDamage() override;
    std::string getType() override;
};

#endif /* ritter_hpp */
