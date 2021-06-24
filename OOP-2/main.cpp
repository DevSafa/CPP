#include <iostream>
#include "Sample.class.hpp"
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

void f0( void ){
    Sample2 instance;

    std::cout << "Number of instances : " << Sample2::getNbInst() << std::endl;

    return;
}

void f1( void ){
    Sample2 instance;

    std::cout << "Number of instances : " << Sample2::getNbInst() << std::endl;
    f0();
    return;
}
int main()
{
    Sample instance;

    instance.setFoo( 42 );
    std::cout << "instance.getFoo() " << instance.getFoo() << std::endl;
    // because it's not greater than 0
    instance.setFoo( -42 );
    std::cout << "instance.getFoo() " << instance.getFoo() << std::endl;

    std::cout << "------------------------" << std::endl;

    //two instances with different memory addresses and different stack addresses.
    Sample1 instance1( 42 );
    Sample1 instance2( 42 );

    if(&instance1 == &instance1)
        std::cout << "instance1 and instance1 are physically equal " << std::endl;
    else
        std::cout << "instance1 and instace1 are not physically equal" << std::endl;

    if(&instance1 == &instance2)
        std::cout << "instance1 and instance2 are physically equal " << std::endl;
     else
        std::cout << "instance1 and instace2 are not physically equal" << std::endl;


    if(instance1.compare(&instance1) == 0)
        std::cout << "instance1 and instance1 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance1 are not  structurally equal" << std::endl;

    
    if(instance1.compare(&instance2) == 0)
        std::cout << "instance1 and instance2 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance2 are not  structurally equal" << std::endl;

    std::cout << "------------------------" << std::endl;
    
    std::cout << "Number of instances : " << Sample2::getNbInst() << std::endl;
    f1();
    std::cout << "Number of instances : " << Sample2::getNbInst() << std::endl;

    return 0;

}