#include "FragTrap.hpp"
int main()
{
    std::cout << "1---------------------------------" << std::endl;
    //test default constructor
    FragTrap fragTrap1;
    std::cout << fragTrap1;
    fragTrap1.setName("Frag1");
    std::cout << fragTrap1;
    std::cout << "2---------------------------------" << std::endl;
    //test parametric constructor
    FragTrap fragTrap2("Frag2");
    std::cout << fragTrap2;

    std::cout << "3---------------------------------" << std::endl;
    //test copy constructor
    FragTrap fragTrap3(fragTrap2);
    std::cout << fragTrap3;

    std::cout << "4---------------------------------" << std::endl;
    //test assignation 
    FragTrap fragTrap4;
    fragTrap4 = fragTrap1;
    std::cout << fragTrap4;

    std::cout << "5---------------------------------" << std::endl;
    //test hightFivesGuys function
    fragTrap4.highFivesGuys();

    std::cout << "6---------------------------------" << std::endl;
    //test other functions
    
    fragTrap4.attack("HumanA");
    fragTrap4.attack("HumanB");
    std::cout << "7--------------------" << std::endl;
    fragTrap4.takeDamage(3);
    fragTrap4.takeDamage(2);
    std::cout << "8--------------------" << std::endl;
    fragTrap4.beRepaired(2);
    fragTrap4.beRepaired(1);
    return 0;
}