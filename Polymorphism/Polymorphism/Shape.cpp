//
//  Shape.cpp
//  Polymorphism
//
//  Created by Alihan  Ekiz on 03.03.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include "Shape.hpp"
#include <iostream>
Shape::Shape() : position(), color() {}
Shape::Shape(Position& p, std::string color) : position(p), color(color) {}

void Shape::draw() {
    std::cout << this->position << std::endl;
    std::cout << "Color: " << this->color << std::endl;
}

Shape::~Shape() {}
