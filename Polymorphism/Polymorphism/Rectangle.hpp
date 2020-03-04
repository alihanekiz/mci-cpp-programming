//
//  Rectangle.hpp
//  Polymorphism
//
//  Created by Alihan  Ekiz on 03.03.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "Shape.hpp"

class Rectangle : Shape {
private:
    int a;
    int b;
public:
    Rectangle();
    Rectangle(Position& p, std::string color, int a, int b);
    void draw();
};

#endif /* Rectangle_hpp */
