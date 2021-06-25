#include <iostream>
#include "Sample5.class.hpp"

Sample5::Sample5( void ){
    
    std::cout << "Constructor called" << std::endl;
    return;
}

Sample5::~Sample5( void )
{
        std::cout << "Destructor called" << std::endl;
        return;
}