#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap( void );
        ~FragTrap( void );
        FragTrap(FragTrap const &src);
        FragTrap(std::string name);
        void setValues(int hit_points, int energy_points,int attack_damage);
        //FragTrap & operator = (FragTrap const & cpy);
        void highFivesGuys( void );
};

#endif