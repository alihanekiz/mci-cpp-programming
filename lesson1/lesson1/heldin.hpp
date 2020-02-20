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

struct Heldin_t {
    char* name;
    int lebenspunkte;
    int gold;
    Gegenstand_t inventar[10];
    Gegenstand_t ausruestung[2];
};

void angreifen(Heldin_t* heldin, Character_t* gegner);
void gegenstandVerkaufen(Heldin_t* heldin, int stelle);
void initHeldin(Heldin_t* heldin, char* name, int lebenspunkte, int gold);

#endif /* heldin_hpp */
