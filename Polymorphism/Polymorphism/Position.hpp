//
//  Position.hpp
//  Polymorphism
//
//  Created by Alihan  Ekiz on 03.03.20.
//  Copyright © 2020 Alihan  Ekiz. All rights reserved.
//

#ifndef Position_hpp
#define Position_hpp

#include <iostream>

class Position {
private:
    int x;
    int y;
    void setX(int x);
    void setY(int y);
public:
    Position();
    Position(int x, int y);
    friend std::ostream& operator<<(std::ostream& out, const Position& p);
    void set(int x, int y);
    int getX();
    int getY();
};

#endif /* Position_hpp */
