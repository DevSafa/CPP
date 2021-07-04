#include "classes.hpp"
#include <iostream>

A::A(){
    std::cout << "A's constructor called" << std::endl;
}

A::~A(){
    std::cout << "A's destructor called" << std::endl;
} 

B::B(){
     std::cout << "B's constructor called" << std::endl;
}

B::~B(){
     std::cout << "B's destructor called" << std::endl;
}


C::C(){
    std::cout << "C's constructor called" << std::endl;
}

C::~C(){
    std::cout << "C's destructor called" << std::endl;
}

int main(){
    C c;
    return 0;
}