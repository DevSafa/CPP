#include <iostream>
#include "Sample.class.hpp"

int main()
{
    Sample instance;

    instance.setFoo( 42 );
    std::cout << "instance.getFoo() " << instance.getFoo() << std::endl;
    // because it's not greater than 0
    instance.setFoo( -42 );
    std::cout << "instance.getFoo() " << instance.getFoo() << std::endl;
}