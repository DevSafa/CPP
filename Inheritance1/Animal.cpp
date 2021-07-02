#include "Animal.hpp"

void Animal::eat(){
    std::cout << "I can eat!(Animal)" << std::endl;
}

void Animal::sleep(){
    std::cout << "I can sleep!(Animal)" << std::endl;
}

void Dog::bark(){
    std::cout << "I can bark! Woof woof!!(Dog)" << std::endl;
}

int main(){
    //create object of the Dog class
    Dog dog1;

    //Calling members of the base class
    //dog1 can access members of the base class Animal , it's because Dog is inherited from Animal
    dog1.eat();
    dog1.sleep();

    //Calling member of the derived class
    dog1.bark();
    return 0;
}