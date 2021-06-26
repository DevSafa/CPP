#include <iostream>
#include "Sample3.class.hpp"

Sample3::Sample3( void ) : foo(0) {

    std::cout << "Constructor called" << std::endl;
    return;
}

Sample3::~Sample3( void ){
    std::cout << "Destructor called" << std::endl;
    return;
}

void Sample3::bar( void ) const {
    std::cout << "Member functions bar called" << std::endl;
    return;
}