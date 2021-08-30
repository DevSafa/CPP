#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
class Fixed {
    private :
        int _fixedPointValue;
        static const int bitFractio;
    public :
        Fixed( void );
        ~Fixed( void );
        Fixed(Fixed const & src);
        Fixed const & operator = (Fixed  const & src);
        int getRawBits( void ) const ; 
        void setRawBits( int const raw);
};


#endif