#include "HumanA.hpp"

HumanA::HumanA( std::string const & name, Weapon const & weapon  ) :_name(name),_weapon(weapon)
{
    
}

HumanA::~HumanA( void )
{
    std::cout << "Destructor is called" << std::endl;
}

std::string const & HumanA::getName() const 
{
    return this->_name;
}

Weapon const & HumanA::getWeapon() const
{
    return this->_weapon;
}


void HumanA::attack( void ) const{
    std::cout << this->getName() << " attacks with his " << this->getWeapon().getType() << std::endl;
}

