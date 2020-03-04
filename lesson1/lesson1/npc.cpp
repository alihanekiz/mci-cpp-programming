//
//  npc.cpp
//  lesson1
//
//  Created by Alihan  Ekiz on 03.03.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include "npc.hpp"
#include "character.hpp"

NPC::NPC(std::string name, int lebenspunkte, int gold) : Character(std::string(name), int(lebenspunkte), int(gold)) {}


std::string NPC::getType() {
    return "NPC";
}

