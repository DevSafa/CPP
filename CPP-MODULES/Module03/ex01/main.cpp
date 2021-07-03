#include "ClapTrap.hpp"
#include  "ScavTrap.hpp"
int main()
{
    // create  an instance of Scavtrap using default constructor
    ScavTrap scavTrap1;

    std::cout << scavTrap1;

    //create an instance using Parametric constructor
    ScavTrap scavTrap2("imane");
    std::cout << scavTrap2;

    //create instance using Copy constructor
    ScavTrap scavTrap3(scavTrap2);
    std::cout << scavTrap3;

    //calling attack function memeber of base class
    scavTrap3.attack("wall");

    // call getters of base function on derived function
    std::cout << "Name : " << scavTrap3.getName() << std::endl;
    std::cout << "Energy points : " << scavTrap3.getEnergyPoints() << std::endl;
    std::cout << "Hit points : " << scavTrap3.getHitPoints() << std::endl;
    std::cout << "Attack damage : " << scavTrap3.getAttackDamage() << std::endl;


    // calling guarGate() member of derived class
    scavTrap3.guardGate();

    return 0;
}