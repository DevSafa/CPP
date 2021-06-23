#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ){ // define Sample constructor of the Sample class
    std::cout << "Constructor called" << std::endl;
    //constructor and destructor of c++ classes don't have a return type;
    // we can see it as it return void , but it's not actually written
    return; // we write treturn to show that we're done written our constructor, if we forget it , it will works in the same way

}

Sample::~Sample( void ){
    std::cout << "Destructor called" << std::endl;
    return;
}
//Sample.class.cpp name of the class
//in .cpp we will able to define this fuctions present in the class
