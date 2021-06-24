#include <iostream>
#include "Sample6.class.hpp"

Sample6::Sample6( void ){
    
    std::cout << "Constructor called" << std::endl;
    return;
}

Sample6::~Sample6( void )
{
        std::cout << "Destructor called" << std::endl;
        return;
}