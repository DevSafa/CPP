#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Monster.hpp"
int main()
{   
    std::cout << "\n1----------------------" << std::endl;
    //defining Sorcerer in stack.
    //using parametric constructor 
    Sorcerer sorcerer1("s1","The Strong sorcerer");

    //<< operator overload
    std::cout <<  sorcerer1;

    std::cout << "\n2----------------------" << std::endl;
    //using copy constructor
    Sorcerer sorcerer2("s2","The Smart sorcerer");

    std::cout  << sorcerer2;

    std::cout << "\n3----------------------" << std::endl;
    //= operator overload
    sorcerer1 = sorcerer2;

    std::cout  << sorcerer1;

    
    std::cout << "\n4----------------------" << std::endl;
    //defining Sorcerer in heap;
    Sorcerer *sorcerer3 = new Sorcerer("s3","The busy sorcerer");

    std::cout << *sorcerer3;

    delete sorcerer3;

    
    std::cout << "\n5----------------------" << std::endl;
    //create a generic victim  in heap
    Victim *victim1 = new Victim("v1");
    sorcerer1.polymorph(*victim1);

    delete victim1;

    std::cout << "\n6----------------------" << std::endl;
   
    //create a generic victim in stack
    Victim victim2("v2");
    sorcerer2.polymorph(victim2);

    std::cout << "\n7----------------------" << std::endl;

    //create  Peon
    Peon *peon1 = new Peon("p1");
    std::cout << *peon1;

    std::cout << "\n8----------------------" << std::endl;

    Peon peon2("p2");
    std::cout << peon2;
    
    *peon1 = peon2 ;
    std::cout << *peon1;
    delete peon1;
    
    std::cout << "\n9----------------------" << std::endl;

    Monster monster1("mo1");

    Monster *monster2 = new Monster("mo2");
    std::cout << *monster2;

    monster2->getPolymorphed();
    
    delete monster2;

    std::cout << "\n10----------------------" << std::endl;

    Victim *victim3 = new Peon("piw-piw");
    std::cout << *victim3;

    victim3->getPolymorphed();
    std::cout << "======" << std::endl;

    Victim *victim4 = new Monster("mo-mo");
    std::cout << *victim4;
    victim4->getPolymorphed();
    std::cout << "======" << std::endl;


    Victim *victim5 = new Victim("vi");
    victim5->getPolymorphed();
    std::cout << *victim5;
    victim5->getPolymorphed();

    std::cout << "\n12----------------------" << std::endl;
    delete victim3;
    delete victim4;
    delete victim5;

    std::cout << "\n13--------- test in subject -------------" << std::endl;
 
    Sorcerer robert("Robert", "the Magnificent");
    
    Victim jim("Jimmy");
    
    Peon joe("Joe");
    
    std::cout << robert << jim << joe;
    
    robert.polymorph(jim);
    
    robert.polymorph(joe);

}