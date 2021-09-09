#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

#include "DiamondTrap.hpp"

class DiamondTrap;

class FragTrap : public virtual  ClapTrap {
    public:
        FragTrap( void );               /* canonical */
        ~FragTrap( void );              /* canonical */
        FragTrap(FragTrap const &src);  /*canonical */
        FragTrap(std::string name);
        FragTrap & operator = (FragTrap const & cpy); /* canonical */
        void highFivesGuys( void );
        void attack(std::string const & target);
        void initializeDiamond( DiamondTrap & diamond);
};

#endif