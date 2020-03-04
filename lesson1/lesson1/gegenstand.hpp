//
//  gegenstand.hpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#ifndef gegenstand_hpp
#define gegenstand_hpp
#include <string>
#include <iostream>

class Gegenstand {
private:
    std::string bezeichnung;
    int wert;
    bool isValid;
public:
    Gegenstand();
    Gegenstand(std::string bezeichnung, int wert);
    void setIsValid(bool isValid);
    void setBezeichnung(std::string bezeichnung);
    void setWert(int wert);
    int getWert();
    std::string getBezeichnung();
    bool getIsValid();
};

#endif /* gegenstand_hpp */
