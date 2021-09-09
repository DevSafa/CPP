#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap( void );               /* canonical */
        ~FragTrap( void );              /* canonical */
        FragTrap(FragTrap const &src);  /*canonical */
        FragTrap(std::string name);
        FragTrap & operator = (FragTrap const & cpy); /* canonical */
        void highFivesGuys( void );
        void attack(std::string const & target);
};

#endif