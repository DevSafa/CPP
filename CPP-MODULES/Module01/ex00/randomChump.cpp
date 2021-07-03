#include "Zombie.hpp"

void randomChump( std::string name)
{
    Zombie *zombie = newZombie(name);
    zombie->setName(name);
    zombie->announce();
    delete  zombie;
}