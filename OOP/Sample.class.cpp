#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ){ 
    std::cout << "Constructor called" << std::endl;
   
    return; 

}

Sample::~Sample( void ){
    std::cout << "Destructor called" << std::endl;
    return;
}

//the member functions have a return type in front
void Sample::bar( void ){
    std::cout << "Member function bar called" << std::endl;
    return;
}