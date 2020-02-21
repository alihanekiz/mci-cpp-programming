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
    initHeldin(&heldin, (char *) "Futura", 200, 1000);
    initCharacter(&character1, (char *) "Alihan", 50, 200);
    initCharacter(&character2, (char *) "Max", 100, 200);
    
    makeWar(&heldin, &character1);
    makeWar(&heldin, &character2);
    
    playEndScene(&heldin);
    
    return 0;
}

void makeWar(Heldin_t* heldin, Character_t* character) {
    while(heldin->lebenspunkte > 0 && character->lebenspunkte > 0) {
        angreifen(heldin, character);
        cout << heldin->name << " trifft " << character->name << " fuer 20 Lebenspunkte" << endl;
        if(character->lebenspunkte > 0) {
            angreifen(character, heldin);
            cout << character->name << " trifft " << heldin->name << " fuer 5 Lebenspunkte" << endl;
        }
    }
    if (heldin->lebenspunkte <= 0) {
        cout << heldin->name << " fiel in Ohnmacht!" << endl;
    } else cout << character->name << " fiel in Ohnmacht!" << endl;
}

void playEndScene(Heldin_t* heldin) {
    Gegenstand_t gegenstand1;
    Gegenstand_t gegenstand2;
    initGegenstand(&gegenstand1, (char *) "Zaubertrank", 200);
    initGegenstand(&gegenstand2, (char *) "Axt", 50);
    cout << heldin->name << " hat noch " << heldin->lebenspunkte << " Lebenspunkte." << endl;
    heldin->inventar[0] = gegenstand1;
    heldin->inventar[1] = gegenstand2;
    gegenstandVerkaufen(heldin, 0);
    cout << heldin->name << " besitzt nun " << heldin->gold << " Gold." << endl;
}
