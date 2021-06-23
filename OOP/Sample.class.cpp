#include <iostream>
#include "Sample.class.hpp"

// a constructor is a code that will be executed when a class is instanciated
Sample::Sample( void ){ 
    std::cout << "Constructor called" << std::endl;
    
    //this a self keyword 
    //this a pointer on the current instance.
    this->foo = 42;
    std::cout << "This->foo: " << this->foo << std::endl;

    //call the bar() function on my current instance
    this->bar();
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