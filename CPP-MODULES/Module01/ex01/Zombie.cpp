#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void )
{

}

Zombie::Zombie(std::string name)
{
    this->_name = name;
}
Zombie::~Zombie( void )
{
    std::cout << this->getName() << " is destroyed" << std::endl;
}

std::string Zombie::getName( void ) const
{
    return this->_name;
}

void Zombie::announce( void ) const
{
    std::cout << "<" << this->getName() << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string  name)
{
    this->_name = name;
}