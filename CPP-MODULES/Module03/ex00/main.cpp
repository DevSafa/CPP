#include "ClapTrap.hpp"

int main()
{
    //create an instance using default constructor
    ClapTrap clapTrap1;
    std::cout << clapTrap1;

    //create an instance using Parametric constructor
    ClapTrap clapTrap2("Safa");
    std::cout << clapTrap2;

    //create instance using Copy constructor
    ClapTrap  clapTrap3(clapTrap2);
    std::cout << clapTrap3;

    //calling attack function
    clapTrap3.attack("personA");

    //calling takeDamage function
    clapTrap3.takeDamage(5);

    //calling beRepaired function
    clapTrap3.beRepaired(5);
    return 0;
}