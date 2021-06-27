#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
  this->_name = name;
}

HumanB::~HumanB( void )
{
    std::cout << "Destructor is called" << std::endl;
}

std::string HumanB::getName()
{
    return this->_name;
}

Wwapon HumanB::getWeapon()
{
    return this->_weapon;
}

void HumanB::setName(std::string name)
{
    this->_name = name;
}

void HumanB::setWeapon(Weapon* weapon)
{
    this->_weapon = *weapon;
}

void HumanB::attack( void ) const{
    std::cout << this->getName() << " attacks with his " << this->getWeapon().getType();
}

