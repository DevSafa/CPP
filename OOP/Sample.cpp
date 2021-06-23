#include <iostream>
#include "Sample.class.hpp"

int main(){

    Sample instance; 

    //instance is a stack variable not a pointer, if it's a pointer  i have to use ->
    instance.foo = 42;

    std::cout << "instance.foo: " << instance.foo << std::endl;

    //call the member function bar()
    instance.bar();
    return 0;
}
