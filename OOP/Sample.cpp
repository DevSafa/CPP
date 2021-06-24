#include <iostream>
#include "Sample.class.hpp"
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

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

    return 0;
}
