#include "classes.hpp"
#include <iostream>

A::A(){
    std::cout << "A's constructor called" << std::endl;
}

A::~A(){
    std::cout << "A's destructor called" << std::endl;
} 

B::B(){
     std::cout << "B's constructor called" << std::endl;
}

B::~B(){
     std::cout << "B's destructor called" << std::endl;
}


C::C(){
    std::cout << "C's constructor called" << std::endl;
}

C::~C(){
    std::cout << "C's destructor called" << std::endl;
}


Person::Person(int x){
     std::cout << "Person::Person(int ) called" << std::endl;
}


Person::Person(){
    std::cout << "Person::Person() called" << std::endl;
}


Faculty::Faculty(int x) : Person(x){
    std::cout<<"Faculty::Faculty(int ) called"<< std::endl;
}


Student::Student(int x):Person(x){
     std::cout<<"Student::Student(int ) called"<< std::endl;
}


TA::TA(int x) : Student(x) , Faculty(x){
    std::cout<<"TA::TA(int ) called"<< std::endl;
}


int main(){
    C c;
    std::cout << "------------------" << std::endl;
    //the Person constructor wwill be called one.
    //one impotant thng to note is the default constructor of 'Person' is called 

    // when we use virtual keyword , the default constructor of grandparent class is called by default even if the parent classes
    //explicitly call parameterized constructor
    TA ta1(30);
    return 0;
}