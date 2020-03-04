//
//  main.cpp
//  Polymorphism
//
//  Created by Alihan  Ekiz on 03.03.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#include <iostream>
#include "Position.hpp"
#include "Rectangle.hpp"

int main(int argc, const char * argv[]) {
    
    Position p(1,1);
    Rectangle r(p, "red", 1, 1);
    r.draw();
    
    
    return 0;
}
