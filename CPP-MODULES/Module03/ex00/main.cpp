#include "ClapTrap.hpp"

int main()
{
    std::cout << "1--------------------" << std::endl;
    //create a clapTrap with default constructor
    ClapTrap clapTrap1;
    std::cout << clapTrap1;
    
    //set name for clapTrap1
    clapTrap1.setName("PP1");
    std::cout << clapTrap1;
    std::cout << "2--------------------" << std::endl;
    //create a clapTrap with parametric constructor
    ClapTrap clapTrap2("PP2");
    std::cout << clapTrap2;

    std::cout << "3--------------------" << std::endl;
    //create a clapTrap with copy constructor
    ClapTrap clapTrap3(clapTrap1);
    std::cout << clapTrap3;

    std::cout << "4--------------------" << std::endl;
    //test assignation operator
    ClapTrap clapTrap4;
    clapTrap4 = clapTrap2;
    std::cout << clapTrap4;
    //test functions
    std::cout << "5--------------------" << std::endl;
    clapTrap1.attack("HumanA");
    clapTrap2.attack("HumanB");
    std::cout << "6--------------------" << std::endl;
    clapTrap1.takeDamage(3);
    clapTrap2.takeDamage(2);
    std::cout << "7--------------------" << std::endl;
    clapTrap1.beRepaired(2);
    clapTrap2.beRepaired(1);
    std::cout << "----------------------" << std::endl;

    // return 0;
}