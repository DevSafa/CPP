#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public ScavTrap , public FragTrap {
    public :
        DiamondTrap( void );                    /*canonical*/
        ~DiamondTrap( void );                   /*canonical*/
        DiamondTrap(DiamondTrap const & src);   /*canonical*/
        DiamondTrap(std::string name);
        // DiamondTrap & operator = (DiamondTrap const & src); /*canonical */

};
#endif

/*
    The diamond problem occurs when 
    two superclasses of a class have a common base class.
    DiamondTrap  gets two copies of all attributes of ClapTrap class
*/