#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void )
{

}
/*
add a debugging message in the
destructor including  name of the Zombie
*/
Zombie::~Zombie( void )
{
    std::cout << this->getName() << " is destroyed" << std::endl;
}

std::string Zombie::getName( void ) const
{
    return this->_name;
}
/*
The zombies are able to announce themselves like:
<name> BraiiiiiiinnnzzzZ
*/
void Zombie::announce( void ) const
{
    std::cout << "<" << this->getName() << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string  name)
{
    this->_name = name;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

