#include  <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ){
    std::cout << "Contructor called" << std::endl;
}

Sample::~Sample( void ) {
    std::cout << "Destructor called" << std::endl;
}

void Sample::bar( char const c) const {
    std::cout << "Member function bar called with char overload : " << c << std::endl;
    return;
}


void Sample::bar(int const n) const{
    std::cout << "Member function bar called with int overload : " << n << std::endl;
}

void Sample::bar(float const z) const {
    std::cout << "Member function bar called with float overload : " << z << std::endl;
    return;
}

void Sample::bar(Sample const & i) const {
    (void) i;
    std::cout << "Member function bar called with Sample overload"<< std::endl;
    return;
}