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
        ~Fixed( void );
        Fixed(Fixed const & src);
        Fixed const & operator = (Fixed  const & src);
        int getRawBits( void ) const; 
        void setRawBits( int const raw);
        Fixed( int const & x);
        Fixed( float const & x);
        float toFloat( void )const;
        int toInt( void ) const;
        bool operator > (Fixed const & src);
        bool operator < (Fixed const & src);
        bool operator >= (Fixed const & src);
        bool operator <= (Fixed const & src);
        bool operator == (Fixed const & src);
        bool operator != (Fixed const & src);
        static Fixed & min(Fixed & nbr1, Fixed & nbr2);
        static Fixed & max(Fixed & nbr1, Fixed & nbr2);
       Fixed & operator + (Fixed const & src);
       // Fixed & operator - (Fixed const & src);
        //Fixed & operator * (Fixed const & src);
       // Fixed & operator /(Fixed const & src);
        Fixed &operator++(void);
        Fixed &operator++(int);
        Fixed &operator--(void);
        Fixed &operator--(int);
};

std::ostream & operator << (std::ostream & o ,Fixed const & src);

#endif