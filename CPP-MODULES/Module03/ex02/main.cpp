#include "FragTrap.hpp"
int main()
{
    //called of default constructor
    FragTrap fragtrap1;
    std::cout << fragtrap1;

    std::cout << "--------------------" << std::endl;

    FragTrap fragtrap2(fragtrap1);
    std::cout << fragtrap2;

    std::cout << "--------------------" << std::endl;

    FragTrap fragtrap3("safa");
    std::cout << fragtrap3;

    FragTrap fragtrap4;
    fragtrap4 = fragtrap3;
    // std::cout << "-----------------------" << std::endl;
    // FragTrap FragTrap4 = fragtrap3;
    // std::cout << "-----------------------" << std::endl;

    std::cout << fragtrap4;
    fragtrap4.highFivesGuys();
    return 0;
}