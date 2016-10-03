//
//  Hexagon.hpp
//  OOP
//
//  Created by Ольга Клубкова on 02.10.16.
//  Copyright © 2016 Ольга Клубкова. All rights reserved.
//

#ifndef Hexagon_hpp
#define Hexagon_hpp

#pragma once

#include <cstdlib>
#include <iostream>
#include "Figure.h"
class Hexagon : public Figure {
public:
    Hexagon();
    Hexagon(std::istream &is);
    Hexagon(size_t i);
    Hexagon(const Hexagon& orig);
    double Square() override;
    void Print() override;
    virtual ~Hexagon();
private:
    size_t side_a;
};


#endif /* Hexagon_hpp */
