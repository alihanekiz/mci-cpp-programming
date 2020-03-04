//
//  Rectangle.cpp
//  Polymorphism
//
//  Created by Alihan  Ekiz on 03.03.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include <string>
#include <iostream>
#include "Rectangle.hpp"
#include "Position.hpp"

Rectangle::Rectangle() : Shape(), a(0), b(0) {}
Rectangle::Rectangle(Position& p, std::string color, int a, int b) : Shape(p, color), a(a), b(b) {}

void Rectangle::draw() {
    this->Shape::draw();
    std::cout << "A: " << this->a << std::endl;
    std::cout << "B: " << this->b << std::endl;
}
