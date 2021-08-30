#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointValue(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void ){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const  & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed const  & Fixed::operator = (Fixed const & src)
{
    std::cout << "Assignation operator called" << std::endl;
    if(this != &src)
       this->_fixedPointValue = src.getRawBits();

    return *this;
}
int Fixed::getRawBits( void ) const {
   std::cout << "getRawBits member function called" << std::endl; 
   return _fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    _fixedPointValue = raw;
}


const int Fixed::bitFractio = 8;

