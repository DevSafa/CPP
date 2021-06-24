#include <iostream>
#include "Sample.class.hpp"
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"
#include "Sample3.class.hpp"
#include "Sample4.class.hpp"

int main(){

    Sample instance; 

    //instance is a stack variable not a pointer, if it's a pointer  i have to use ->
    instance.foo = 42;

    std::cout << "instance.foo: " << instance.foo << std::endl;

    //call the member function bar()
    instance.bar();
    std::cout << "---------------" << std::endl;

    //using Sample1 constructor
    Sample1 instance1('a', 42, 4.2f);

    std::cout << "---------------" << std::endl;

    //using Sample2 constructor
    Sample2 instance2('z', 13, 3.14f);

    std::cout << "---------------" << std::endl;

    Sample3 instance3( 3.14f );
    instance3.bar();

    std::cout << "---------------" << std::endl;

    Sample4 instance4;

    instance4.publicFoo = 42;
    std::cout << "instance.publicFoo: " << instance4.publicFoo << std::endl;

    //we can't
    //instance4._privateFoo = 42;
    //std::cout << "instance4._privateFoo: " << instance4._privateFoo << std::end;

    instance4.publicBar();
    //instance4._privateBar();
    
    return 0;
}

//g++ -std=c++98 -Wall -Wextra -Werror  Sample.class.cpp Sample1.class.cpp Sample2.class.cpp Sample3.class.cpp Sample.cpp