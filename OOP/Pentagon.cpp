//
//  Pentagon.cpp
//  OOP
//
//  Created by Ольга Клубкова on 02.10.16.
//  Copyright © 2016 Ольга Клубкова. All rights reserved.
//

#include "Pentagon.hpp"
#include <iostream>
#include <cmath>
Pentagon::Pentagon() : Pentagon(0) {
}
Pentagon::Pentagon(size_t i) : side_a(i) {
    std::cout << "Pentagon created: " << side_a << std::endl;
}
Pentagon::Pentagon(std::istream &is) {
    is >> side_a;
}
Pentagon::Pentagon(const Pentagon& orig) {
    std::cout << "Pentagon copy created" << std::endl;
    side_a = orig.side_a;
}
double Pentagon::Square() {
    return (double(side_a)*double(side_a)*sqrt(25 + 10*sqrt(5)))/4;
}
void Pentagon::Print() {
    std::cout << "a=" << side_a << std::endl;
}
Pentagon::~Pentagon() {
    std::cout << "Pentagon deleted" << std::endl;
}


