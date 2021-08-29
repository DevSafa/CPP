#include "HumanA.hpp"

/* While HumanA takes the Weapon in its constructor */
/* HumanA will ALWAYS be armed */
HumanA::HumanA( std::string const & name, Weapon  const & weapon  ) :_weapon(weapon), _name(name)
{
    
}

HumanA::~HumanA( void )
{
    //std::cout << "Destructor is called" << std::endl;
}

std::string const & HumanA::getName() const 
{
    return this->_name;
}

Weapon const & HumanA::getWeapon() const
{
    return this->_weapon;
}

/* 
attack() function that displays:
NAME attacks with his WEAPON_TYPE
*/
void HumanA::attack( void ) const{
    std::cout << this->getName() << " attacks with his " << this->getWeapon().getType() << std::endl;
}

