#include <iostream>
#include "Sample.class.hpp"
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"
#include "Sample3.class.hpp"

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

    std::cout << "------------------------" << std::endl;

    //declare a variable that will be allocated in the stack
    Sample3  instance3; // a very simple instance of Sample3 on the stack.

    //I can also declare a pointer still on the stack
    // and assigning other variable address as a value.
    //it's a pointer on a particular type

    Sample3 * instancep = &instance3;

    // a syntax of a pointer on a member attribute of Sample3 class
    //it's a pointer that allow me to take an address of the member attribute of my Sample class
    //the pointer is on a n integer number of SAMPLE3 CLASS initilized to NULL
    int Sample3::*p = NULL;
        
    //declare a pointer to a member function
    //point to a member dunction of a class
    void (Sample3::*f)( void ) const;

    p = &Sample3::foo;

    std::cout << "Value of memeber foo: " << instance3.foo << std::endl;
    //assigning a  new value to foo member using a pointer
    instance3.*p = 21;
    std::cout << "Value of member foo: " << instance3.foo << std::endl;
    instancep->*p = 42;
    std::cout << "Value of memeber foo: " << instance3.foo << std::endl;

    // the f pointer now will point on bar bracket member function of Sample3 class
    f = &Sample3::bar;

    //specify which instance i'm reffering to
    (instance3.*f)();
    (instancep->*f)();



    return 0;

}