#include "Fixed.hpp"
/* A default constructor that initializes the fixed point value to 0 */
Fixed::Fixed( void ) : _fixedPointValue(0){
    std::cout << "Default constructor called" << std::endl;
}
/* A destructor. */
Fixed::~Fixed( void ){
    std::cout << "Destructor called" << std::endl;
}
/* A copy constructor */
Fixed::Fixed(Fixed const  & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}
/* An assignation operator overload. */ 
Fixed const  & Fixed::operator = (Fixed const & src)
{
    std::cout << "Assignation operator called" << std::endl;
    if(this != &src)
       this->_fixedPointValue = src.getRawBits();

    return *this;
}
/* returns the rawvalue of the fixed point value. */
int Fixed::getRawBits( void ) const {
   std::cout << "getRawBits member function called" << std::endl; 
   return _fixedPointValue;
}
/* sets the rawvalue of the fixed point value  */
void Fixed::setRawBits(int const raw)
{
    _fixedPointValue = raw;
}

/* This constant will always be the litteral 8 */
const int Fixed::bitFractio = 8;

