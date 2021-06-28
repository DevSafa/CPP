#include "HumanB.hpp"

HumanB::HumanB( std::string const & name) :_name(name)
{
    
}

HumanB::~HumanB( void )
{
   // std::cout << "Destructor is called" << std::endl;
}

std::string const & HumanB::getName() const 
{
    return this->_name;
}

Weapon HumanB::getWeapon() const
{
    return *(this->_weapon);
}

void HumanB::attack( void ) const{
    std::cout << this->getName() << " attacks with his " << this->getWeapon().getType() << std::endl;
}

void HumanB::setWeapon(Weapon *weapon)
{
    this->_weapon = weapon;
}
