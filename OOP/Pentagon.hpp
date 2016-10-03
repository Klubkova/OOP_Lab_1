//
//  Pentagon.hpp
//  OOP
//
//  Created by Ольга Клубкова on 02.10.16.
//  Copyright © 2016 Ольга Клубкова. All rights reserved.
//

#ifndef Pentagon_hpp
#define Pentagon_hpp

#pragma once
#include <cstdlib>
#include <iostream>
#include "Figure.h"
class Pentagon : public Figure {
public:
    Pentagon();
    Pentagon(std::istream &is);
    Pentagon(size_t i);
    Pentagon(const Pentagon& orig);
    double Square() override;
    void Print() override;
    virtual ~Pentagon();
private:
    size_t side_a;
};

#endif /* Pentagon_hpp */
