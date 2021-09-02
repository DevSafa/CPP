#ifndef FIXED_HPP
# define FIXED_HPP
#include <cmath>
#include <iostream>
class Fixed {
    private :
        int _fixedPointValue;
        static const int _bitFractio;
    public :
        Fixed( void );
        Fixed( int const & x);
        Fixed( float const & x);
        Fixed(Fixed const & src);
        Fixed const & operator = (Fixed  const & src);
        int getRawBits( void ) const; 
        void setRawBits( int const raw);
        float toFloat( void )const;
        int toInt( void ) const;
        ~Fixed( void );
};

std::ostream & operator << (std::ostream & o ,Fixed const & src);

#endif