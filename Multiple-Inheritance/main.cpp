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

    //constructor of Person is called two times
    // destructor also will be called two times when object ta1 is destructed.

    //so object ta1 has two copies of all members of Person, this causes ambiguities
    //the solution to that problem is 'virtual keyword.
    //we make the classes 'Faculty' and 'Student' as virtual base to avoid two copies of 'Person' in 'TA' class
    TA ta1(30);
    return 0;
}