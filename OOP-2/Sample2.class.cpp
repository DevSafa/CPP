#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2( void ){
    std::cout << "Constructor Called" << std::endl;
    Sample2::_nbInst +=1;

    return;
}

Sample2::~Sample2( void ){
    std::cout << "Destructor Called" << std::endl;
    Sample2::_nbInst -= 1;

    return;
}

int Sample2::getNbInst( void ){
    // the this pointer is not passed to static functions behind the scenes
    //when referring to a non member function we don't use this keyword but we use the name of the class and then we access 
    //to the static member
    return Sample2::_nbInst;
}


// initialize the non member attribute 
//the only way to initialize a non-member attribute ; a static attribute
int Sample2::_nbInst = 0;