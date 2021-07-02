#include "Animal.hpp"

void Animal::eat(){
    std::cout << "I can eat!(Animal)" << std::endl;
}

void Animal::sleep(){
    std::cout << "I can sleep!(Animal)" << std::endl;
}

void Animal::setColor(std::string clr){
    this->color = clr;
}

std::string Animal::getColor(){
    return color;
}

void Dog::setType(std::string tp){
    this->type = tp;
}

void Dog::displayInfo(std::string c){
    std::cout << "I am a " << this->type << std::endl;
    std::cout << "My color is " << c << "(Dog)" <<std::endl;
}

void Dog::bark(){
    std::cout << "I can bark! Woof woof!!(Dog)" << std::endl;
}

int main(){

    //create object of the Dog class
    Dog dog1;

    //Calling memebers of the base class
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    //Calling memeber of the derived class
    dog1.bark();
    dog1.setType("mammal");

    //Using getColor() of dog1 as argument
    //getColor() returns string data
    dog1.displayInfo(dog1.getColor());
}
//https://www.programiz.com/cpp-programming/public-protected-private-inheritance