#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
int main()
{
    std::cout << "-----------------------------" << std::endl;

    Sorcerer robert("Robert", "the Magnificent");
    
    Victim jim("Jimmy");
    
    Peon joe("Joe");
    
    std::cout << robert << jim << joe;
    
    robert.polymorph(jim);
    
    robert.polymorph(joe);

    std::cout << "-----------------------------" << std::endl;

    Victim  *victim = new Peon("Joe");

    victim->getPolymorphed();

    //delete victim;

    std::cout << "-----------------------------" << std::endl;

    Victim *victim1 = new Victim("HH");

    victim1->getPolymorphed();

    std::cout << "-----------------------------" << std::endl;

    Peon *p1 = new Peon("NN");
    p1->getPolymorphed();
    
    delete victim;
    delete victim1;
    delete p1;

    std::cout << "-----------------------------" << std::endl;

}