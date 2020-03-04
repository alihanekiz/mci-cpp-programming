//
//  Shape.hpp
//  Polymorphism
//
//  Created by Alihan  Ekiz on 03.03.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include "Position.hpp"
#include <string>

class Shape {
private:
    Position position;
    std::string color;
    
public:
    virtual ~Shape();
    Shape();
    Shape(Position& p, std::string color);
    virtual void draw();
};

#endif /* Shape_hpp */
