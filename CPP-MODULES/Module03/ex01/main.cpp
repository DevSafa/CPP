#include "ClapTrap.hpp"
#include  "ScavTrap.hpp"
int main()
{
    //test ScavTrap class
    std::cout << "1---------------------" << std::endl;
    //using default constructor
    ScavTrap scavTrap1;
    std::cout << scavTrap1;
    scavTrap1.setName("scav1");
    std::cout << "2---------------------" << std::endl;
    //using parametric constructor
    ScavTrap scavTrap2("scav2");
    std::cout << scavTrap2;

    std::cout << "3---------------------" << std::endl;

    //test guardGate() function
    scavTrap1.guardGate();
    scavTrap2.guardGate();

    std::cout << "4---------------------" << std::endl;
    //test copy constructor
    ScavTrap scavTrap3(scavTrap1);
    std::cout << scavTrap3;
    std::cout << "5---------------------" << std::endl;
    //test assignement operator 
    scavTrap3 = scavTrap1;

    std::cout << scavTrap3;
    std::cout << "6---------------------" << std::endl;
    //test functions inherited from base class

    scavTrap3.attack("HumanA");
    scavTrap2.attack("HumanB");
    std::cout << "7--------------------" << std::endl;
    scavTrap1.takeDamage(3);
    scavTrap2.takeDamage(2);
    std::cout << "8--------------------" << std::endl;
    scavTrap1.beRepaired(2);
    scavTrap2.beRepaired(1);
    return 0;
}