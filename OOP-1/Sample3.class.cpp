#include <iostream>
#include "Sample3.class.hpp"

//pi( f ) here i'm not assigningg f value to the pi attribute
//but i'm initializing it with f value. 
Sample3::Sample3(float const f) :pi( f ), qd( 42 ){

    std::cout << "Constructor called" << std::endl;
    return;
}

Sample3::~Sample3( void )
{
    std::cout << "Destructor called" << std::endl;
    return;
}

//this member function should never change in the instance 
void Sample3::bar( void ) const{
    std::cout << "this->pi = " << this->pi << std::endl;
    std::cout << "this->qd = " << this->qd << std::endl;
    //since i declared mymemeber function const i can't do this.
        //this->qd = 0;
    return;
}