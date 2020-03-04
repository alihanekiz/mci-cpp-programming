//
//  zauberer.hpp
//  lesson1
//
//  Created by Alihan  Ekiz on 03.03.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#ifndef zauberer_hpp
#define zauberer_hpp

#include <string>
#include "npc.hpp"


class Zauberer : public NPC {
private:
    int zauberkraft;
public:
    Zauberer(std::string name, int lebenspunkte, int gold, int zauberkraft);
    void setZauberkraft(int zauberkraft);
    int getZauberkraft();
    int getDamage() override;
    std::string getType() override;
};

#endif /* zauberer_hpp */
