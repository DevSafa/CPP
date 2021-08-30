#include "Fixed.hpp"
#include <cmath>
int main(void) {

    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    int r = 1 << 8;
    std::cout << 3 * r << std::endl;
   
   float f = 32.3455f;
   std::cout << "------------" << std::endl;

   int fixed_point = roundf(f  * (1 << 8)) ; // * (1<< 8) ;
   std::cout << fixed_point << std::endl;

   std::cout << "------------" << std::endl;

   float p = ((float)fixed_point / (float)(1 << 8));
   std::cout << p;
    return 0;
}

// 3 -> binary :           0000000000000011
// 3 * (1 << 8) :  768 :   0000001100000000
