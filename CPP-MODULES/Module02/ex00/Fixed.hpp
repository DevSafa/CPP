#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
class Fixed {
    private :
        /* An integer to store the fixed point value. */
        int _fixedPointValue;
        /* Astatic constant integer to store the number of fractional bits */
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