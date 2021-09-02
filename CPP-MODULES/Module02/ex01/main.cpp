#include "Fixed.hpp"

int main(void) 
{
    int a_int = 1234;
    std::cout << "from integer to fixed point" << std::endl;
    int fixedpoint_from_int = a_int * (1 << 8) ; // a * 256
    std::cout << a_int  << " => " << fixedpoint_from_int << std::endl;
    std::cout << "from fixed point to integer" << std::endl;
    int integerr = fixedpoint_from_int / (1 << 8);
    std::cout << fixedpoint_from_int << " => " << integerr << std::endl; 
    float a_float = 12.99;
    std::cout << "from float to fixed point" << std::endl;
    int fixedpoint_from_float = roundf(a_float * (1 << 8));
    std::cout << a_float  << " => " << fixedpoint_from_float << std::endl;
    std::cout << "from fixed point to float " << std::endl;
    float floatt = ((float)fixedpoint_from_float / (1 << 8));
    std::cout << fixedpoint_from_float <<" => " << floatt << std::endl;
    std::cout << "======================" << std::endl;
    Fixed a;
    Fixed const b( 10 ); 
    Fixed const c( 42.42f ); 
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;




    return 0;
}

