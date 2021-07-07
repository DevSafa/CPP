#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
int main()
{
    //defining Sorcerer in stack.
    //using parametric constructor 
    Sorcerer sorcerer1("s1","The Strong sorcerer");

    //<< operator overload
    std::cout <<  sorcerer1;

    //using copy constructor
    Sorcerer sorcerer2("s2","The Smart sorcerer");

    std::cout  << sorcerer2;

    //= operator overload
    sorcerer1 = sorcerer2;

    std::cout  << sorcerer1;

    std::cout << "-------------------------------" << std::endl;

    //defining Sorcerer in heap;
    Sorcerer *sorcerer3 = new Sorcerer("s3","The busy sorcerer");

    std::cout << *sorcerer3;

    delete sorcerer3;

    std::cout << "-----------------------------" << std::endl;

    //create a generic victim  in heap
    Victim *victim1 = new Victim("v1");
    sorcerer1.polymorph(*victim1);

    delete victim1;

    std::cout << "-----------------------------" << std::endl;
    //create a generic victim in stack
    Victim victim2("v2");
    sorcerer2.polymorph(victim2);

    std::cout << "-----------------------------" << std::endl;

    //create  Peon
    Peon *peon1 = new Peon("p1");
    std::cout << *peon1;


    Peon peon2("p2");
    std::cout << peon2;
    
    *peon1 = peon2 ;
    std::cout << *peon1;
    delete peon1;

    std::cout << "-----------------------------" << std::endl;

    Victim *victim3 = new Peon("p3");

    std::cout << *victim3;

    victim3->getPolymorphed();

    *victim3 = peon2;

    std::cout << *victim3 ;

    sorcerer2.polymorph(*victim3);

    sorcerer2.polymorph(peon2);

    Victim *victim4 = new Victim("v4");

    victim4->getPolymorphed();
    
    delete victim3;
    delete victim4;


    std::cout << "-----------------------------" << std::endl;

    Sorcerer robert("Robert", "the Magnificent");
    
    Victim jim("Jimmy");
    
    Peon joe("Joe");
    
    std::cout << robert << jim << joe;
    
    robert.polymorph(jim);
    
    robert.polymorph(joe);

    std::cout << "-----------------------------" << std::endl;

}