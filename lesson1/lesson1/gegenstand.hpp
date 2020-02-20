//
//  gegenstand.hpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#ifndef gegenstand_hpp
#define gegenstand_hpp

struct Gegenstand_t {
    char* bezeichnung;
    int wert;
    bool isValid;
};

void initGegenstand(Gegenstand_t* gegenstand, char* bezeichnung, int wert);

#endif /* gegenstand_hpp */
