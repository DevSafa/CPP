#include "Zombie.hpp"

int main()
{
    //test newZombie() function
    Zombie* zombie = newZombie("safa");
    std::cout << "name : " << zombie->getName() << std::endl;
    zombie->announce();
    
    
    std::cout << "\n-----------------\n";

    /* test rundomChump() function */
    randomChump("manal");

    std::cout << "\n-----------------\n";
    //delete zombie after finishing
    delete zombie;
}

