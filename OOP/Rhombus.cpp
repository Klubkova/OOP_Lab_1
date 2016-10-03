//
//  Rhombus.cpp
//  OOP
//
//  Created by Ольга Клубкова on 02.10.16.
//  Copyright © 2016 Ольга Клубкова. All rights reserved.
//

#include "Rhombus.hpp"
#include <iostream>
#include <cmath>
Rhombus::Rhombus() : Rhombus(0, 0) {
}
Rhombus::Rhombus(size_t i, size_t j) : side_a(i), side_b(j)  {
    std::cout << "Rhombus created: " << side_a << ", " << side_b << std::endl;
}
Rhombus::Rhombus(std::istream &is) {
    is >> side_a;
    is >> side_b;
}
Rhombus::Rhombus(const Rhombus& orig) {
    std::cout << "Rhombus copy created" << std::endl;
    side_a = orig.side_a;
    side_b = orig.side_b;
}
double Rhombus::Square() {
    return 0.5*(double(side_a) * double(side_b));
}
void Rhombus::Print() {
    std::cout << "a=" << side_a << ", b=" << side_b << std::endl;
}
Rhombus::~Rhombus() {
    std::cout << "Rhombus deleted" << std::endl;
}