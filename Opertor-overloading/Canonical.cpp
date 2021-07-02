#include <iostream>
#include "Canonical.hpp"

Canonical::Canonical( void ) : _foo( 0 ){
    std::cout << "Default constructor called" << std::endl;
    return;
}

Canonical::Canonical( int const n ) :_foo( n ){
    std::cout << "Parametric Constructor called" << std::endl;
    return;
}

Canonical::Canonical(Canonical const & src ){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

Canonical::~Canonical( void ){
    std::cout << "Destructor called" << std::endl;
    return;
}

int Canonical::getFoo( void ) const {
    return this->_foo;
}

Canonical & Canonical::operator = (Canonical const & rhs)
{
    std::cout << "Assignement operator called" << std::endl;

    if(this != &rhs)
        this->_foo = rhs.getFoo();

    return *this;
}


std::ostream & operator<<(std::ostream & o, Canonical const & i){
    o << "The value of _foo  is : " << i.getFoo();
    return o;
}
