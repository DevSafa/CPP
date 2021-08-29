#include "Zombie.hpp"

/*
write a function that will create a Zombie, name it, and return it to be
used somewhere else in your code. The prototype of the function is:
Zombie* newZombie( std::string name );
*/
Zombie* newZombie( std::string name)
{
    /*create a Zombie , name it*/
    Zombie *zombie = new Zombie(name);
    
    /*return it*/
    return zombie;
}