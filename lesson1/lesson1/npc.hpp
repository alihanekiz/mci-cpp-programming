//
//  npc.hpp
//  lesson1
//
//  Created by Alihan  Ekiz on 03.03.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#ifndef npc_hpp
#define npc_hpp
#include "character.hpp"
#include <string>

class NPC : public Character{
    
public:
    NPC(std::string name, int lebenspunkte, int gold);
    std::string getType() override;
};

#endif /* npc_hpp */
