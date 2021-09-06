#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointValue(0){
    //std::cout << "Default constructor called" << std::endl;
}


Fixed::~Fixed( void ){
   // std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(Fixed const  & src)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = src;
}


Fixed & Fixed::operator = (Fixed const & src)
{
    //std::cout << "Assignation operator called" << std::endl;
    if(this != &src)
       this->_fixedPointValue = src.getRawBits();

    return *this;
}

int Fixed::getRawBits( void ) const {
   return _fixedPointValue;
}


void Fixed::setRawBits(int const raw)
{
    _fixedPointValue = raw;
}

Fixed::Fixed(int const & x )
{
   // std::cout << "Int constructor called" << std::endl;
    // 1 << 8  == 2 ^ 8 = 256
    this->_fixedPointValue =  x * (1 << _bitFractio);

}

Fixed::Fixed(float  const & x)
{
    //std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = std::roundf(x * (1 << _bitFractio));
}

float  Fixed::toFloat( void )  const 
{
    
    return ((float)_fixedPointValue / (float)(1 << _bitFractio));
}

int Fixed::toInt( void ) const
{
    
    return (roundf(_fixedPointValue /(1 << _bitFractio)));
}


std::ostream & operator << (std::ostream & o ,Fixed const & src){
    o << src.toFloat();
    return o;
}

Fixed   Fixed::min(Fixed  nbr1 , Fixed  nbr2)
{
    if(nbr1.toFloat() < nbr2.toFloat())
        return nbr1;
    return nbr2;
}

Fixed Fixed::max(Fixed  nbr1, Fixed  nbr2)
{
    if(nbr1.toFloat() > nbr2.toFloat())
        return nbr1;
    return nbr2;
}

Fixed  Fixed::operator * (Fixed  const  & src) const
{
 
    return Fixed(this->toFloat() * src.toFloat());
  
}

bool Fixed::operator > (Fixed const & src) const 
{
    return this->toFloat() > src.toFloat();
}

bool Fixed::operator < (Fixed const & src) const 
{
    return this->toFloat() < src.toFloat();
}
bool Fixed::operator >= (Fixed const & src) const 
{
    return this->toFloat() >= src.toFloat();
}

bool Fixed::operator <= (Fixed const & src) const 
{
    return this->toFloat() <= src.toFloat();
}

bool Fixed::operator == (Fixed const & src) const 
{
    return this->toFloat() == src.toFloat();
}

bool Fixed::operator != (Fixed const & src) const 
{
    return this->toFloat() != src.toFloat();
}


Fixed  Fixed::operator + (Fixed const & src) const 
{
    return Fixed(this->toFloat() + src.toFloat());
}

Fixed  Fixed::operator - (Fixed const & src) const 
{
    return Fixed(this->toFloat() - src.toFloat());
}


Fixed  Fixed::operator / (Fixed const & src)
{
    float  const tmp = this->toFloat() / src.toFloat();
    return Fixed(tmp);
}

Fixed  Fixed::operator ++ (void)
{
    *this = Fixed(this->toFloat() + Fixed(1).toFloat() /(1 << 8));
    return *this;
}

Fixed  Fixed::operator ++(int)
{
    Fixed tmp(*this);
    *this = Fixed(this->toFloat() + Fixed(1).toFloat() /Fixed(1)._fixedPointValue);
    return tmp;
}

Fixed  Fixed::operator --(void)
{
    *this = Fixed(this->toFloat() - Fixed(1).toFloat() /(1 << 8));
    return *this;
}

Fixed  Fixed::operator --(int)
{
    *this = Fixed(this->toFloat()- Fixed(1).toFloat() /(1 << 8));
    return  *this;
}

const int Fixed::_bitFractio = 8;
//https://pediaa.com/difference-between-fixed-point-and-floating-point/
//https://www.forth.com/starting-forth/5-fixed-point-arithmetic/