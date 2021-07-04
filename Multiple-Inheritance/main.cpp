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


TA::TA(int x) : Student(x) , Faculty(x) , Person(x) {
    std::cout<<"TA::TA(int ) called"<< std::endl;
}


int main(){
    C c;
    std::cout << "------------------" << std::endl;
    
    // to avoid that default constructor will be called 
    //the constructor has to be called in 'TA' class 
    // in general it is not allowed to call the grandparent's constructor directly , 
    //it has to be called through parent class , it is allowed only when 'virtual keyword' is used
    
    TA ta1(30);
    return 0;
}