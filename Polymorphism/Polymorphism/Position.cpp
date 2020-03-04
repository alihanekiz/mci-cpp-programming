//
//  Position.cpp
//  Polymorphism
//
//  Created by Alihan  Ekiz on 03.03.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include "Position.hpp"

Position::Position() : x(0), y(0) {}
Position::Position(int x, int y) {
    x = x < 0 ? 0 : x;
    y = y < 0 ? 0 : y;
    this->set(x, y);
}

std::ostream& operator<<(std::ostream& out, const Position& p) {
    out << "Position: (" << p.x << "/" << p.y << ")";
    return out;
}

void Position::set(int x, int y) {
    if(x >= 0) this->setX(x);
    if(y >= 0) this->setY(y);
}

int Position::getX() {
    return this->x;
}

int Position::getY() {
    return this->y;
}

void Position::setX(int x) {
    this->x = x;
}

void Position::setY(int y) {
    this->y = y;
}
