#include "Zombie.hpp"

int main()
{
    Zombie* zombie = newZombie("safa");
    std::cout << zombie->getName();
    std::cout << "\n-----------------\n";

    randomChump("manal");
    delete zombie;
}