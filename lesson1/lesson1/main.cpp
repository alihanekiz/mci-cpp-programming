//
//  main.cpp
//  lesson1
//
//  Created by Alihan  Ekiz on 20.02.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include <iostream>
#include "main.hpp"

using namespace std;

int main() {
    
    Heldin_t heldin;
    Character_t character1;
    Character_t character2;
    initHeldin(&heldin, (char *) "Futura", 2000, 1000);
    initCharacter(&character1, (char *) "Alihan", 100, 200);
    initCharacter(&character2, (char *) "Max", 100, 200);
    
    makeWar(&heldin, &character1);
    makeWar(&heldin, &character2);
    
    playEndScene(&heldin);
    
    return 0;
}

void makeWar(Heldin_t* heldin, Character_t* character) {
    while(heldin->lebenspunkte > 0 && character->lebenspunkte > 0) {
        angreifen(character, heldin);
        cout << character->name << " trifft " << heldin->name << " fuer 5 Lebenspunkte" << endl;
        angreifen(heldin, character);
        cout << heldin->name << " trifft " << character->name << " fuer 20 Lebenspunkte" << endl;
    }
    cout << character->name << " fiel in Ohnmacht!" << endl;
}

void playEndScene(Heldin_t* heldin) {
    Gegenstand_t gegenstand;
    initGegenstand(&gegenstand, (char *) "Zaubertrank", 200);
    cout << heldin->name << " hat noch " << heldin->lebenspunkte << " Lebenspunkte." << endl;
    heldin->inventar[0] = gegenstand;
    gegenstandVerkaufen(heldin, 0);
    cout << heldin->name << " besitzt nun " << heldin->gold << " Gold." << endl;
}
