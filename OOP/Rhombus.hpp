//
//  Rhombus.hpp
//  OOP
//
//  Created by Ольга Клубкова on 02.10.16.
//  Copyright © 2016 Ольга Клубкова. All rights reserved.
//

#ifndef Rhombus_hpp
#define Rhombus_hpp
#pragma once
#include <cstdlib>
#include <iostream>
#include "Figure.h"
class Rhombus : public Figure {
public:
    Rhombus();
    Rhombus(std::istream &is);
    Rhombus(size_t i, size_t j);
    Rhombus(const Rhombus& orig);
    double Square() override;
    void Print() override;
    virtual ~Rhombus();
private:
    size_t side_a;
    size_t side_b;
};


#endif /* Rhombus_hpp */
