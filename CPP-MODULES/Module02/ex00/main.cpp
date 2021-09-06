#include "Fixed.hpp"


int main(void) {

    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}

// 3 -> binary :           0000000000000011
// 3 * (1 << 8) :  768 :   0000001100000000
