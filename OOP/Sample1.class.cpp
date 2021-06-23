#include <iostream>

#include "Sample1.class.hpp"

Sample::Sample1( char p1, int p2, float p3){

    std::cout << "Constructor called" << std::endl;

    //this is an instance pointer
    this->a1 = p1;
    std::cout << "this->a1 = " << this->a1 << std::endl;

    this->a2 = p2;
    std::cout << "this->a2 = " << this->a2 << std::endl;

    this->a3 = p3;
    std::cout << "this->a3 = " << this->a3 <, std::endl;

    return;

}

Sample::~Sample1( void ){
    std::cout << "Destructor called" << std::endl;
    return;
}

