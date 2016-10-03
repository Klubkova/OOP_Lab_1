//
//  main.cpp
//  OOP
//
//  Created by Ольга Клубкова on 02.10.16.
//  Copyright © 2016 Ольга Клубкова. All rights reserved.
//


#include <cstdlib>
#include "Rhombus.hpp"
#include "Pentagon.hpp"
#include "Hexagon.hpp"

int main(int argc, char** argv) {
    
    Figure *ptr = new Rhombus(std::cin);
    ptr->Print();
    std::cout << ptr->Square () << std:: endl;
    delete ptr;
    
    Figure *ptr2 = new Pentagon(std::cin);
    ptr2->Print();
    std::cout << ptr2->Square () << std:: endl;
    delete ptr2;
    
    Figure *ptr3 = new Hexagon(std::cin);
    ptr3->Print();
    std::cout << ptr3->Square () << std:: endl;
    delete ptr3;
    
    return 0;
}