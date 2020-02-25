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
    
    Heldin heldin;
    Character character1;
    Character character2;
    Gegenstand g1;
    Gegenstand g2;
    g1.initGegenstand((char *) "Axt", 100);
    g2.initGegenstand((char *) "Schild", 200);
    heldin.initHeldin((char *) "Futura", 200, 1000);
    character1.initCharacter((char *) "Alihan", 50, 200);
    character1.addInventarGegenstand(g1);
    character2.initCharacter((char *) "Max", 100, 200);
    character2.addInventarGegenstand(g2);
    
    makeWar(&heldin, &character1);
    makeWar(&heldin, &character2);
    
//    playEndScene(&heldin);
    
    
    return 0;
}

void makeWar(Heldin* heldin, Character* character) {
    while(heldin->getLebenspunkte() > 0 && character->getLebenspunkte() > 0) {
        heldin->angreifen(character);
        cout << heldin->getName() << " trifft " << character->getName() << " fuer 20 Lebenspunkte" << endl;
        if(character->getLebenspunkte() > 0) {
            character->angreifen(heldin);
            cout << character->getName() << " trifft " << heldin->getName() << " fuer 5 Lebenspunkte" << endl;
        }
    }
    if (heldin->getLebenspunkte() <= 0) {
        cout << heldin->getName() << " fiel in Ohnmacht!" << endl;
    } else {
        cout << character->getName() << " fiel in Ohnmacht!" << endl;
        cout << heldin->getName() << " hat noch " << heldin->getLebenspunkte() << " Lebenspunkte." << endl;
        int slot = character->getRandomInventarSlot();
        if (slot != -1) {
            int i = heldin->addInventarGegenstand(character->removeGegenstandAusInventar(slot));
            cout << "Gegenstand wurde hinzugefügt: " << heldin->getGegenstand(i).getBezeichnung() << endl;
        }
    }
}

void playEndScene(Heldin* heldin) {
    Gegenstand gegenstand1;
    Gegenstand gegenstand2;
    gegenstand1.initGegenstand((char *) "Zaubertrank", 200);
    gegenstand2.initGegenstand((char *) "Axt", 50);
    cout << heldin->getName() << " hat noch " << heldin->getLebenspunkte() << " Lebenspunkte." << endl;
    
    heldin->addInventarGegenstand(gegenstand1);
    heldin->addInventarGegenstand(gegenstand2);
    
    heldin->gegenstandVerkaufen(0);
    cout << heldin->getName() << " besitzt nun " << heldin->getGold() << " Gold." << endl;
}
