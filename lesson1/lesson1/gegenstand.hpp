//
//  gegenstand.hpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#ifndef gegenstand_hpp
#define gegenstand_hpp

class Gegenstand {
private:
    char* bezeichnung;
    int wert;
    bool isValid;
public:
    void initGegenstand();
    void initGegenstand(char* bezeichnung, int wert);
    void setIsValid(bool isValid);
    void setBezeichnung(char* bezeichnung);
    void setWert(int wert);
    int getWert();
    char* getBezeichnung();
    bool getIsValid();
};

#endif /* gegenstand_hpp */
